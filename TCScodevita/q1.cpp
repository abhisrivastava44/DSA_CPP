#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<vector>
#include<map>
#include<string>
#include<sstream>
#include<queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    if (!(cin >> N)) return 0; 
    string line;
    getline(cin, line); 

    unordered_map<long long, vector<long long>> children;
    unordered_set<long long> allNodes;

    for (int i = 0; i < N; ++i) {
        string s;
        getline(cin, s);
        while (s.size() == 0 && ++i < N) getline(cin, s);
        if (s == "break") continue;
        stringstream ss(s);
        long long parent;
        if (!(ss >> parent)) continue;
        allNodes.insert(parent);
        long long child;
        vector<long long> kids;
        while (ss >> child) {
            kids.push_back(child);
            allNodes.insert(child);
        }
        if (!kids.empty()) {
            children[parent] = kids;
        } else {
            if (children.find(parent) == children.end()) {
                children[parent] = {};
            }
        }
    }

    long long start = -1, target = -1;
    {
        string s;
        while (getline(cin, s)) {
            if (s.find_first_not_of(" \t\r\n") != string::npos) break;
        }
        stringstream ss(s);
        if (!(ss >> start >> target)) {
            return 0;
        }
    }

    unordered_map<long long, long long> parentOf;
    for (auto &kv : children) {
        long long p = kv.first;
        for (long long c : kv.second) {
            parentOf[c] = p;
        }
        
        if (parentOf.find(p) == parentOf.end()) {
            parentOf[p] = -1; 
        }
    }

    unordered_map<long long, vector<pair<long long,int>>> adj;
    auto add_edge = [&](long long u,long long v,int w){
        adj[u].push_back({v,w});
    };

    for (auto &kv : children) {
        long long p = kv.first;
        if (!adj.count(p)) adj[p] = {};
        for (long long c : kv.second) {
            add_edge(p, c, 0);
            add_edge(c, p, 1);
            if (!adj.count(c)) adj[c] = {};
        }
    }

    if (!adj.count(start)) adj[start] = {};
    if (!adj.count(target)) adj[target] = {};

    const long long INF = (1LL<<60);
    unordered_map<long long, long long> dist;
    struct Node {
        long long d, u;
        bool operator<(Node const& o) const { return d > o.d; } // for min-heap
    };
    priority_queue<Node> pq;
    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        auto cur = pq.top(); pq.pop();
        long long u = cur.u;
        long long d = cur.d;
        if (d != dist[u]) continue;
        if (u == target) break;
        for (auto &e : adj[u]) {
            long long v = e.first;
            int w = e.second;
            long long nd = d + w;
            if (!dist.count(v) || nd < dist[v]) {
                dist[v] = nd;
                pq.push({nd, v});
            }
        }
    }

    long long ans = dist.count(target) ? dist[target] : -1;
    cout << ans << "\n";
    return 0;
}