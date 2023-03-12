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

Tree* buildTreeRecursive(vector<int> inorder,vector<int> postorder, int start, int end, int& j){
    
    if(start > end) {
        return NULL;
    }


    int curr = postorder[j];
    j=j-1;

    Tree* tree = new Tree(curr);

    if(start == end){
        return tree;
    }

    int pos = search(inorder,start,end,curr);

    tree->right = buildTreeRecursive(inorder, postorder, pos+1, end, j);
    tree->left = buildTreeRecursive(inorder, postorder, start, pos-1, j);

    return tree;
}

Tree* buildTree(vector<int> inorder, vector<int> postorder){
   // end index of postorder matrix. 
   int j = postorder.size()-1;
   return buildTreeRecursive(inorder, postorder, 0, inorder.size()-1,j);
}

void inorderPrint(Tree* tree){
    if(tree == NULL) return;
    inorderPrint(tree->left);
    cout<<tree->data<<" ";
    inorderPrint(tree->right);
}

int main(){
   vector<int> postorder = {4,2,5,3,1};
   vector<int> inorder= {4,2,1,5,3};
   Tree * tree = buildTree(inorder,postorder);

   inorderPrint(tree);
}

