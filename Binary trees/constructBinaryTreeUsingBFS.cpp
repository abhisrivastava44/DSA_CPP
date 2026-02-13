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

void levelOrderTraversalUsingQueue(TreeNode* root){
    queue<TreeNode*>q;
    q.push(root);
    while(q.size()>0){
        TreeNode* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL)    q.push(temp->left);
        if(temp->right!=NULL)    q.push(temp->right);
    }
    cout<<endl;
}

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

int main(){
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    TreeNode* root=constructTree(arr,n);

    levelOrderTraversalUsingQueue(root);
}