#include<iostream>
#include<vector>
using namespace std;

//Adjacency List for undirected unweighted graph
// int main(){
//     int vertex;
//     int edges;
//     cout<<"enter the number of vertices and edges: ";
//     cin>>vertex>>edges;

//     vector<int>AdjacencyList[vertex];

//     int u,v;
//     for(int i=0; i<edges; i++){
//         cout<<"enter the vertices between which edge exist: ";
//         cin>>u>>v;
//         AdjacencyList[u].push_back(v);
//         AdjacencyList[v].push_back(u);
//     }

//     for(int i=0; i<vertex; i++){ //printing the list
//         cout<<i<<"->";
//         for(int j=0; j<AdjacencyList[i].size(); j++){
//             cout<<AdjacencyList[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }



//Adjacency List for undirected weighted graph
int main(){
    int vertex;
    int edges;
    cout<<"enter the number of vertices and edges: ";
    cin>>vertex>>edges;

    vector<pair<int,int>>AdjacencyList[vertex];

    int u,v;
    int weight;
    for(int i=0; i<edges; i++){
        cout<<"enter the vertices between which edge exist and also give its weight: ";
        cin>>u>>v>>weight;
        AdjacencyList[u].push_back({v,weight});
        AdjacencyList[v].push_back({u,weight});
    }

    for(int i=0; i<vertex; i++){ //printing the list
        cout<<i<<"->";
        for(int j=0; j<AdjacencyList[i].size(); j++){
            cout<<"["<<AdjacencyList[i][j].first<<","<<AdjacencyList[i][j].second<<"]";
        }
        cout<<endl;
    }
}