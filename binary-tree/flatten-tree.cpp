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

void inorderTraversal(Tree* tree){
     if(tree==NULL){
        return ;
     }
     inorderTraversal(tree->left);
     cout<<tree->data<<" ";
     inorderTraversal(tree->right);
}

void flatten(Tree* root){

    // tree already flatenned.
    if(root==NULL || root->left == NULL || root->right == NULL){
        return;
    }

    if(root->left!=NULL){
        flatten(root->left);
        Tree* temp = root->right; //(holds the right subtree for a while)
        root->right = root->left; 
        //when left subtree become right subtree then left subtree becomes NUll.
        root->left = NULL;
        
        Tree* it = root->right; //(left subtree which became right subtree)
        while(it->right!=NULL){
            it = it->right;
        }

        it->right = temp; //(appending leftsubtree to right subtree.)
    }

    flatten(root->right);

}


int main(){
   Tree* tree = new Tree(1);
   tree->left = new Tree(2);
   tree->left->left = new Tree(4);
   tree->left->right = new Tree(5);
   tree->right=new Tree(3);  
   tree->right->left = new Tree(6);
   tree->right->right = new Tree(7);
   flatten(tree);
   inorderTraversal(tree);
}