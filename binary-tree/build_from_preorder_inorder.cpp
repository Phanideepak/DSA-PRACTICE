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

int search(vector<int> a, int s, int e, int key){
   for(int i=s;i<=e;i++){
       if(a[i]==key){
          return i;
       }
   }
   return -1;
}

Tree* buildTree(vector<int> preorder,vector<int> inorder, int start, int end){
    static int i = 0;

    if(start > end){
        return NULL;
    }

    int curr = preorder[i];
    i = i + 1;

    Tree * tree = new Tree(curr);

    //recursive step.
    if(start == end){
        return tree;
    }

    int pos = search(inorder, start, end, curr);

    tree->left  = buildTree(preorder,  inorder, start, pos-1);
    tree->right = buildTree(preorder, inorder, pos+1, end);

    return tree;
}

Tree* build(vector<int> preorder,vector<int> inorder){
    return buildTree(preorder,inorder,0,inorder.size()-1);
}

int main(){
    vector<int> preorder  = {1,2,4,3,5};
    vector<int> inorder = {4,2,1,5,3};
    Tree * tree = build(preorder,inorder);
    cout<<tree->data<<endl;   
}