#include<iostream>
#include<climits>
using namespace std;

class Node{ //TreeNode
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

void preorderTraversal(Node* root){   //preorder traversal
    if(root==NULL)  return;
    cout<<root->val<<" ";               //root
    preorderTraversal(root->left);      //left
    preorderTraversal(root->right);     //right
}

void inOrderTraversal(Node* root){   //inOrder traversal
    if(root==NULL)  return;
    inOrderTraversal(root->left);      //left
    cout<<root->val<<" ";               //root
    inOrderTraversal(root->right);     //right
}

void postOrderTraversal(Node* root){   //postOrder traversal
    if(root==NULL)  return;
    postOrderTraversal(root->left);      //left
    postOrderTraversal(root->right);     //right
    cout<<root->val<<" ";               //root
}

int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);

    a->left=b;
    a->right=c;

    b->left=d;
    b->right=e;

    c->left=f;
    c->right=g;

    preorderTraversal(a);
    cout<<endl;
    inOrderTraversal(a);
    cout<<endl;
    postOrderTraversal(a);
    cout<<endl;
}