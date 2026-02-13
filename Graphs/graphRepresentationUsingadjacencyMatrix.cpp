#include<iostream>
#include<vector>
using namespace std;

//Adjacency Matrix for undirected unwighted graph
// int main(){
//     int vertex, edges;
//     cout<<"enter the number of vertices and edges: ";
//     cin>>vertex>>edges;

//     vector<vector<bool>>AdjacencyMatrix(vertex, vector<bool>(vertex,0));
    
//     int u,v;
//     for(int i=0; i<edges; i++){ //taking input that kin kin vertices k beech m edge h
//         cout<<"enter the vertices between which edge exist: ";
//         cin>>u>>v;
//         AdjacencyMatrix[u][v]=1;    //agar u and v k beech edge h, means v and u k beech bhi edge exist krta h
//         AdjacencyMatrix[v][u]=1;
//     }

//     for(int i=0; i<vertex; i++){    //display the adjacency matrix
//         for(int j=0; j<vertex; j++){
//             cout<<AdjacencyMatrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }





//Adjacency Matrix for undirected wighted graph
// int main(){
//     int vertex, edges;
//     cout<<"enter the number of vertices and edges: ";
//     cin>>vertex>>edges;

//     vector<vector<int>>AdjacencyMatrix(vertex, vector<int>(vertex,0));
    
//     int u,v;
//     int weight;
//     for(int i=0; i<edges; i++){ //taking input that kin kin vertices k beech m edge h
//         cout<<"enter the vertices between which edge exist and also give its weight: ";
//         cin>>u>>v>>weight;
//         AdjacencyMatrix[u][v]=weight;    //agar u and v k beech edge h, means v and u k beech bhi edge exist krta h
//         AdjacencyMatrix[v][u]=weight;
//     }

//     for(int i=0; i<vertex; i++){    //display the adjacency matrix
//         for(int j=0; j<vertex; j++){
//             cout<<AdjacencyMatrix[i][j]<<"    ";
//         }
//         cout<<endl;
//     }
// }



//Adjacency Matrix for directed unwighted graph
int main(){
    int vertex, edges;
    cout<<"enter the number of vertices and edges: ";
    cin>>vertex>>edges;

    vector<vector<bool>>AdjacencyMatrix(vertex, vector<bool>(vertex,0));
    
    int u,v;
    for(int i=0; i<edges; i++){ //taking input that kin kin vertices k beech m edge h
        cout<<"enter the vertices between which edge exist: ";
        cin>>u>>v;
        AdjacencyMatrix[u][v]=1;    //in directed graph ek hi direction m edge consider kiya jaata h
    }

    for(int i=0; i<vertex; i++){    //display the adjacency matrix
        for(int j=0; j<vertex; j++){
            cout<<AdjacencyMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
}