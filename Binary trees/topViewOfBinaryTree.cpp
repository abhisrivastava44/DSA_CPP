#include<iostream>
#include<queue>
#include<climits>
#include<unordered_map>
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


void topViewOfBinaryTree(TreeNode* root){
    unordered_map<int,int>m;    //(level,root->val)
    queue<pair<TreeNode*,int>>q;    //<node,level>
    pair<TreeNode*,int>r;
    r.first=root;
    r.second=0;
    q.push(r);
    while(q.size()>0){
        TreeNode* temp=(q.front()).first;
        int level=(q.front()).second;
        q.pop();
        if(m.find(level)==m.end()){
            m[level]=temp->val;
        }  
        if(temp->left!=NULL){
            pair<TreeNode*,int>p;
            p.first=temp->left;
            p.second=level-1;;
            q.push(p);
        }
        if(temp->right!=NULL){
            pair<TreeNode*,int>p;
            p.first=temp->right;
            p.second=level+1;
            q.push(p);
        }
    }
    int minLevel=INT_MAX;
    int maxLevel=INT_MIN;
    for(auto x:m){
        int level=x.first;
        minLevel=min(minLevel,level);
        maxLevel=max(maxLevel,level);
    }
    for(int i=minLevel; i<=maxLevel; i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    TreeNode* root=constructTree(arr,n);
    topViewOfBinaryTree(root);
}