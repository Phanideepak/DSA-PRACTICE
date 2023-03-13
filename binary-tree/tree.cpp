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

void printLevelOrderTraversal(Tree* tree){
    if(tree==NULL) {
      return;
    }
    queue<Tree*> q;
    q.push(tree);
    q.push(NULL);

    while(!q.empty()){
        Tree *t = q.front();
        
        q.pop(); 
        if(t!=NULL){
           cout<<t->data<<" ";

           if(t->left!=NULL)  q.push(t->left);

           if(t->right!=NULL) q.push(t->right);   
        } else if(!q.empty()){
            //marking the end of each level step.
            q.push(NULL);
        }
    }
}

int findlevelOrderSumAtK(Tree* tree, int k){
   if(tree==NULL){
      return 0;
   }
   queue<Tree*> q;
   q.push(tree);
   q.push(NULL);
   int sum=0;
   int level=0;

   while(!q.empty()){
      Tree * t = q.front();
      q.pop();

      if(t!=NULL){
         if(level==k){
            sum = sum + t->data;
         }
         if(t->left!=NULL) q.push(t->left);

         if(t->right!=NULL) q.push(t->right);
         
      } else if(!q.empty()){
          q.push(NULL);
          level++;
      }
   }

   return sum;
}

int countNodes(Tree* tree){
   if(tree==NULL){
      return 0;
   }
   return countNodes(tree->left) + countNodes(tree->right) + 1;
}

int sumNodes(Tree* tree){
   if(tree ==NULL){
      return 0;
   }
   return sumNodes(tree->left)+ sumNodes(tree->right)+tree->data;
}

int heightTree(Tree* tree){
    if(tree==NULL){
      return 0;
    }
    return max(heightTree(tree->left),heightTree(tree->right)) + 1;
}
// not optimised tree
int diameterTree(Tree* tree){
    if(tree==NULL){
       return 0;
    }

    int leftHeight = heightTree(tree->left);
    int rightHeight = heightTree(tree->right);

    int leftDiameter = diameterTree(tree->left);
    int rightDiameter = diameterTree(tree->right);

    return max(leftHeight+rightHeight+1,max(leftDiameter,rightDiameter));
}

int diameter(Tree* tree, int* height){
   if(tree == NULL){
      *height = 0;
      return 0;
   }
   int lh=0;
   int rh=0;
   int leftDiameter = diameter(tree->left, &lh);
   int rightDiameter = diameter(tree->right,&rh);

   int currentDiameter = lh+rh+1;
   *height = max(lh,rh)+1;

   return max(currentDiameter,max(leftDiameter,rightDiameter));

}

void sumReplacement(Tree* tree){
   if(tree==NULL) return;

   sumReplacement(tree->left);
   sumReplacement(tree->right);

   if(tree->left!=NULL){
      tree->data = tree->data + tree->left->data;
   }

   if(tree->right!=NULL){
      tree->data = tree->data+ tree->right->data;
   }
}

bool isBalancedHeightedBinaryTree(Tree* tree){
   if(tree==NULL){
      return true;
   }
   if(!isBalancedHeightedBinaryTree(tree->left)) return false;

   if(!isBalancedHeightedBinaryTree(tree->right)) return false;

   int lh = heightTree(tree->left);

   int rh = heightTree(tree->right);

   return abs(lh-rh)<=1;
}

bool isBalancedHeightedTree(Tree* tree, int* height){
   if(tree==NULL){
      return true;
   }
   int lh=0;
   int rh=0;
   if(!isBalancedHeightedTree(tree->left, &lh)){
      return false; 
   }

   if(!isBalancedHeightedTree(tree->right, &rh)){
      return false;
   }

   *height  = max(lh,rh) + 1; //decreasing time complexity step.
  
   return abs(lh-rh)<=1;
}

vector<int> rightViewTree(Tree* tree){
    vector<int> ans;
    vector<int> levelNodes;
    if(tree==NULL){
       return levelNodes; 
    }
    queue<Tree*> q;
    q.push(tree);
    q.push(NULL);

    while(!q.empty()){
      Tree* t = q.front();
      q.pop();
      if(t!=NULL){
        levelNodes.push_back(t->data);

        if(t->left) q.push(t->left);

        if(t->right) q.push(t->right);


      }else if(!q.empty()){
          q.push(NULL);
          ans.push_back(levelNodes[levelNodes.size()-1]);
          levelNodes = {};
      }
    }

    ans.push_back(levelNodes[levelNodes.size()-1]);

    return ans;
}

vector<int> leftViewTree(Tree* tree){
   vector<int> ans;
   queue<Tree*> q;
   q.push(tree);

   while(!q.empty()){
      int n = q.size();
      for(int i=1;i<=n;i++){
          Tree* t = q.front();
          q.pop();
          if(i==1){
            ans.push_back(t->data);
          }

          if(t->left) q.push(t->left);
          if(t->right) q.push(t->right);
      }
   }
   return ans;
}

Tree* lowestCommonAncestor(Tree* root, int a, int b){
   if(root==NULL) return NULL;

   if(root->data==a || root->data == b){
      return root;
   }

   Tree* leftLCA = lowestCommonAncestor(root->left,a,b);
   Tree* rightLCA = lowestCommonAncestor(root->right,a,b);

   if(leftLCA&&rightLCA){
      return root;
   }
   
   if(leftLCA!=NULL) return leftLCA;

   return rightLCA;
}

int distNodes(Tree* root, int n1, int dist){
    if(root==NULL){
       return -1;
    }
    if(root->data == n1){
       return dist;
    }
    
    int left = distNodes(root->left,n1,dist+1);

    if(left!=-1) return left;

    return distNodes(root->right,n1,dist+1);
}

int findDistanceBetweenNodes(Tree* root, int n1, int n2){
   Tree* lca =  lowestCommonAncestor(root,n1,n2);
   int d1 = distNodes(lca,n1,0);
   int d2 = distNodes(lca,n2,0);
   return d1+d2;
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

   printLevelOrderTraversal(tree);

   cout<<endl;
   cout<<"Count Number of nodes in binary tree: ";
   cout<<countNodes(tree)<<endl;

   cout<<"Sum of all the nodes in binary tree: "<<sumNodes(tree) <<endl;

   cout<<"height of a binary tree: "<<heightTree(tree)<<endl;

   int height=0;  
   cout<<"diameter of a binary tree: "<<diameter(tree,&height)<<endl;

   int h=0;

   cout<<"isBalanced heighted tree: "<<isBalancedHeightedTree(tree,&h)<<endl;


   cout<<"Right View Tree: "<<endl;
   printKaro(rightViewTree(tree));
   cout<<endl;

   cout<<"Left View Tree: "<<endl;
   printKaro(leftViewTree(tree));
   cout<<endl;

   cout<<lowestCommonAncestor(tree,6,5)->data<<endl;
}