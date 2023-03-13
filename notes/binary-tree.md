Binary tree:

->Data stored in heirarchial level in memory. 
-> Binary tree contains root node and other node. 
-> For every node, there exists maximum of two child nodes.
-> Root node is at level = 0.
-> The nodes at last level are called leaf nodes.
-> height of the tree is maximum distance between root and leaf node.
-> Height of the tree is nothing both no of nodes between root node and deepest leaf node (inclusively).


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

Level order traversal of binary tree:

1. Add the root node to the queue.
2. Pop out the root node and print it. Add the left node to queue and right node to queue.
3. continue the process till the queue is empty.



Count no of nodes in binary tree:

1. recursively count in left subtree and recursively count in right subtree.
2. Suppose take binary tree with one node, then contribution of left subtree and right subtree willbe zero.
   Then count will be 1.


Sum of all nodes in binary tree.
1. If there is one node, sum will be that node.
2. Recursively calculate sum in left subtree and right subtree.

Height of a binary tree.
1. If there is no node, height will be zero.
2. if there is only one root node, height will be one. Left subtree contibutes =0,right subtree contibutes =0;
3. height is nothing but maximum of height achieved from (left subtree and right subtree) +1
 
Minimum depth of tree.
1. https://www.geeksforgeeks.org/find-minimum-depth-of-a-binary-tree/

Diameter of a binary tree.
Def: No of nodes in a longest path between any two leaves in binary tree
1. If diameter passes through the root node, diameter = leftheight + right height + 1
2. If diameter doesnot pass through root node, then diameter is equal to  max of left diameter and right subtree.
3. resultant = max(leftdiamter,rightdiameter,leftheight+rightheight+1)


Sum replacement of binary tree.
->statement: Value of each node is replaced with sum of all subtree nodes and itself.
->url: https://www.youtube.com/watch?v=xDayqPCWmkY&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=98
1. Recursively traverse sum of left subtree
2. Recursively traverse sum of right subtree
3. if left node is not null, add the left node value to current node.
4. if right node is not null, add the right node value to right node;

Balanced height in subtree:
1. For each node, absolute difference between heights of left and right subtree is less than or equal to 1.
2. Check balanced condition in left subtree. If failed return.
3. check balanced condition in right subtree. If failed return.
4. If height diff between left and right subtree is atmost 1, then it is balanced.


Right view of the binary tree:
-> def: The nodes of binary tree that can be seen from right side point of view. Inner nodes will be hidden from the
        view.
1. Apply level order traversal on binary tree.
2. For every level -> consider the last node in the level order traversal.

Lower Common Ancestor
1. If tree is null then lca is null
2. If tree has one node then root is lca.
3. Find LCA in left subtree recursively and Find LCA in right subtree by matching given two elements;
4. If LCA of left subtree and right subtree are not null then return root;
5. If LCA of right subtree is NULL then return LCA of left subtree.
6. IF LCA of left subtree is NULL then return LCA of right subtree.


Distance between two nodes in a binary tree.
-> def: Distance between two nodes is minimum number of edges to be traversed
        from one node to another node.
1. Find the lca of given two nodes.
2. calculate distance of first node from lca and distance of second node from lca.
3. Add both distances.


Flatten a binary tree:
->problem: Given a binary tree, flatten it into linkedlist in-place. After flattening left of node should be null
           and right should contain  next node in preorder sequence.
strategy: 
1. Recurisvely flatten the left subtree and right subtree. 
2. store left tail and right tail
3. store right subtree in temp and make left subtree as right subtree.
4. Join left tail with right subtree(temp stored)
5. return right tail.          

Print all nodes at distance k from a given node:
1.
2.
3.
4.
5.