#include<iostream>
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

int sizeOfTree(Node* root){
    if(root==NULL)  return 0;
    return 1+sizeOfTree(root->left)+sizeOfTree(root->right);
}

bool isCBT(Node* root){ //called BFS -->levelOrderTraversalUsingQueue
    int size=sizeOfTree(root);
    int count=0;
    queue<Node*>q;
    q.push(root);
    while(count<size){
        Node* temp=q.front();
        q.pop();
        count++;
        if(temp!=NULL){
            q.push(temp->left);
            q.push(temp->right);
        }  
    }
    
    if(q.size()>0){
        Node* temp=q.front();
        if(temp!=NULL)  return false;
        q.pop();
    }
    return true;
}

bool isMax(Node* root){ //using preorder
    if(root==NULL)  return true;
    if(root->left!=NULL && root->value < root->left->value)   return false; 
    if(root->right!=NULL && root->value < root->right->value)   return false;

    return  isMax(root->left) && isMax(root->right);
}

int main(){
    Node* a=new Node(20);
    Node* b=new Node(15);
    Node* c=new Node(10);
    Node* d=new Node(8);
    Node* e=new Node(11);
    Node* f=new Node(6);
    Node* g=NULL;

    a->left=b;  a->right=c;
    b->left=d;  b->right=e;
    c->left=f;  c->right=g;

   if( isCBT(a) && isMax(a) )   cout<<"tree is maxHeap.";
   else     cout<<"tree is not a maxHeap.";
}