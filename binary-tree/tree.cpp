#include<bits/stdc++.h>

using namespace std;


class Tree{
   public:
   int data;
   Tree* left;
   Tree* right;

   Tree(int val){
      left = NULL;
      right = NULL;
      data = val;
   }
};

vector<int> inorderTraversal(Tree* tree, vector<int> &ans){
     if(tree==NULL){
        return ans;
     }
     ans = inorderTraversal(tree->left,ans);
     ans.push_back(tree->data);
     ans = inorderTraversal(tree->right,ans);

     return ans;
}

vector<int> preorderTraversal(Tree* tree, vector<int> &ans){
     if(tree==NULL){
        return ans;
     }
     ans.push_back(tree->data);
     ans = preorderTraversal(tree->left,ans);
     ans = preorderTraversal(tree->right,ans);

     return ans;
}

vector<int> postorderTraversal(Tree* tree, vector<int> &ans){
     if(tree==NULL){
        return ans;
     }
     
     ans = postorderTraversal(tree->left,ans);
     ans = postorderTraversal(tree->right,ans);
     ans.push_back(tree->data);
     return ans;
}


void printKaro(vector<int> a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
   Tree* tree = new Tree(1);
   tree->left = new Tree(2);
   tree->left->left = new Tree(4);
   tree->left->right = new Tree(5);
   tree->right=new Tree(3);  
   tree->right->left = new Tree(6);
   tree->right->right = new Tree(7);

   vector<int> inorderAns;
   inorderAns = inorderTraversal(tree,inorderAns); 
   printKaro(inorderAns);

   vector<int> preorderAns;
   preorderAns = preorderTraversal(tree,preorderAns);
   printKaro(preorderAns);

   vector<int> postorderAns;
   postorderAns = postorderTraversal(tree,postorderAns);
   printKaro(postorderAns);
}