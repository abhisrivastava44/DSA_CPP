#include<iostream>
#include<climits>
#include<queue>
using namespace std;

class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

TreeNode* constructTree(int arr[],int n){
    queue<TreeNode*>q;
    TreeNode* root=new TreeNode(arr[0]);
    q.push(root);

    int i=1;
    int j=2;
    while(q.size()>0 && i<n){
        TreeNode* temp=q.front();
        q.pop();
        TreeNode* leftNode;
        TreeNode* rightNode;
        if(arr[i]!=INT_MIN)     leftNode=new TreeNode(arr[i]);
        else leftNode=NULL;

        if(j!=n && arr[j]!=INT_MIN)     rightNode=new TreeNode(arr[j]);
        else rightNode=NULL;

        temp->left=leftNode;
        temp->right=rightNode;

        if(leftNode!=NULL)      q.push(leftNode);
        if(rightNode!=NULL)     q.push(rightNode);

        i+=2;
        j+=2;
    }
    return root;
}

void leftBoundary(TreeNode* root){
    if(root==NULL)  return;
    if(root->left==NULL && root->right==NULL)  return;
    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left==NULL)    leftBoundary(root->right);
}

void leafNode(TreeNode* root){
    if(root==NULL)  return;
    if(root->left==NULL && root->right==NULL)  cout<<root->val<<" ";;
    
    leafNode(root->left);
    leafNode(root->right);
}

void rightBoundary(TreeNode* root){
    if(root==NULL)  return;
    if(root->left==NULL && root->right==NULL)  return;
    rightBoundary(root->right);
    if(root->right==NULL)    rightBoundary(root->right);
    cout<<root->val<<" ";
}

void boundaryTraversal(TreeNode* root){
    leftBoundary(root);
    leafNode(root);
    rightBoundary(root->right);
}

int main(){
    int arr[]={1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28,INT_MIN,INT_MIN};
    int n=sizeof(arr)/sizeof(arr[0]);
    TreeNode* root=constructTree(arr,n);
    boundaryTraversal(root);
}