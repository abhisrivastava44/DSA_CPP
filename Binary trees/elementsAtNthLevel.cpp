#include<iostream>
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

void printNthLevel(TreeNode* root,int currentLevel,int level){ //using preOredr
    if(root==NULL)  return;
    if(currentLevel==level){    //this is optimized code    //root
        cout<<root->val<<" ";
        return;
    } 
    printNthLevel(root->left,currentLevel+1,level);     //left
    printNthLevel(root->right,currentLevel+1,level);    //right
}

void printNthLevelReverse(TreeNode* root,int currentLevel,int level){ //using preOredr
    if(root==NULL)  return;
    if(currentLevel==level){    //this is optimized code    //root
        cout<<root->val<<" ";
        return;
    } 
    printNthLevelReverse(root->right,currentLevel+1,level);    //right
    printNthLevelReverse(root->left,currentLevel+1,level);     //left
}

int noOfLevels(TreeNode* root){
    if(root==NULL)  return 0;
    int maxLevelInleft=noOfLevels(root->left);
    int maxLevelInRight=noOfLevels(root->right);
    return 1+max(maxLevelInleft,maxLevelInRight);
}

void levelOrderTraversal(TreeNode* root,int currentLevel){
    int n=noOfLevels(root);
    if(root==NULL)  return;
    for(int i=1; i<=n; i++){
        printNthLevelReverse(root,1,i);
        cout<<endl;
    }
}

void levelOrderTraversalUsingQueue(TreeNode* root){ //called BFS
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

int main(){
    TreeNode* a=new TreeNode(1);
    TreeNode* b=new TreeNode(2);
    TreeNode* c=new TreeNode(3);
    TreeNode* d=new TreeNode(4);
    TreeNode* e=new TreeNode(5);
    TreeNode* f=new TreeNode(6);
    TreeNode* g=new TreeNode(7);

    a->left=b;
    a->right=c;

    b->left=d;
    b->right=e;

    c->left=f;
    c->right=g;

    // printNthLevel(a,1,3);
    levelOrderTraversalUsingQueue(a);
}