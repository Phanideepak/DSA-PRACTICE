Binary tree:

->Data stored in heirarchial level in memory. 
-> Binary tree contains root node and other node. 
-> For every node, there exists maximum of two child nodes.
-> Root node is at level = 0.
-> The nodes at last level are called leaf nodes.
-> height of the tree is maximum distance between root and leaf node.
->


Properities:
1.  Maximum nodes at level L = 2 ^ L.
2.  Maximum nodes in a tree of height h = (2^h) - 1  (1+2+...2^h)
3.  For N nodes, minimum height or minimum number of levels is log(N+1)
4.  A binary tree with L leaves has atleast log(N+1)+1 number of levels.

Implementation:
1. Can be implemented with linked list.
2. 
3. 

Traversals:
-> Preorder traversals:  Print  root node, traverse left subtree, traverse right subtree. 
-> Postorder traversals:  traverse left subtree, traverse right subtree, print root node.
-> Inorder traversals: traverse left subtree, print root node, traverse right subtree.


Build from preorder - inorder traversals Algorithm:

1. pick element from preorder and create a node
2. Increment preorder index
3. search for picked element pos in inorder 
4. call to build left subtree from inorder 0 to pos-1
5. call to build right subtree from inorder pos+1 to n
6. return the node


Build from postorder - inorder traversal algorithm:

1. Start from end of postorder and pick an element to create a node.
2. Decrement postorder index.
3. search for picked element'pos in inorder
4. call to build right subtree from pos+1 to n in inorder
5. call to build left subtree from inorder 0 to pos-1
6. return the node
