#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node{
public:
    int value;
    Node* left;
    Node* right;

    Node(int value){
        this->value=value;
        left=NULL;
        right=NULL;
    }
};

void reverseInorder(Node* root,vector<int>&arr){
    if(root==NULL)  return;
    reverseInorder(root->right,arr);
    arr.push_back(root->value);
    reverseInorder(root->left,arr);
}

void preOrder(Node* root,vector<int>&arr,int &i){
    if(root==NULL)  return;
    root->value=arr[i++];
    preOrder(root->left,arr,i);
    preOrder(root->right,arr,i);
}

void levelOrderTraversalUsingQueue(Node* root){ //called BFS
    queue<Node*>q;
    q.push(root);
    while(q.size()>0){
        Node* temp=q.front();
        q.pop();
        cout<<temp->value<<" ";
        if(temp->left!=NULL)    q.push(temp->left);
        if(temp->right!=NULL)    q.push(temp->right);
    }
    cout<<endl;
}

int main(){
    Node* a=new Node(10);
    Node* b=new Node(5);
    Node* c=new Node(16);
    Node* d=new Node(1);
    Node* e=new Node(8);
    Node* f=new Node(12);
    Node* g=new Node(20);

    a->left=b;  a->right=c;
    b->left=d;  b->right=e;
    c->left=f;  c->right=g;

    vector<int> arr;    //stores reverse inorder(sorted in descending order)
    reverseInorder(a,arr);
    levelOrderTraversalUsingQueue(a);

    int i=0;
    preOrder(a,arr,i);  //due to this step BST->changed to maxHeap
    levelOrderTraversalUsingQueue(a);
    
}