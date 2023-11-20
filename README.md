# C - Binary Trees Learning!

## General Questions:

### What is a Binary Tree?

A binary tree is a type of tree data structure in which each node has at most two children, referred to as the left child and the right child. The left child is
smaller than the parent node, and the right child is greater. This hierarchical structure allows for efficient searching, insertion, and deletion operations.
Binary trees are commonly used in various algorithms and data structures.


### What is the difference between a binary tree and a Binary Search Tree?

A binary tree is a general tree structure where each node can have at most two children. There are no specific rules regarding the ordering of the nodes in a
binary tree.

On the other hand, a Binary Search Tree (BST) is a type of binary tree that follows a specific ordering property. In a BST, for every node, all the nodes in its
left subtree have values less than the node's value, and all the nodes in its right subtree have values greater than the node's value. This ordering property
enables efficient searching, insertion, and deletion operations.

In summary, while a binary tree is a general tree structure, a Binary Search Tree is a specific type of binary tree with an ordering property that allows for
efficient searching.


### What are the depth, the height, the size of a binary tree?

Depth refers to the level of a node in the tree. The root node is at depth 0, its children are at depth 1, their children are at depth 2, and so on.

Height refers to the maximum depth of the tree, i.e., the longest path from the root to a leaf node. The height of an empty tree is typically considered to be -1,
and the height of a tree with only one node (the root) is 0.

Size refers to the total number of nodes in the tree, including both internal nodes and leaf nodes.


### What are the different traversal methods to go through a binary tree?

Inorder Traversal: In this method, the left subtree is visited first, then the root node, and finally the right subtree. This traversal method gives the nodes in
ascending order when applied to a Binary Search Tree.

Preorder Traversal: Here, the root node is visited first, followed by the left subtree, and then the right subtree.

Postorder Traversal: In this method, the left subtree is visited first, then the right subtree, and finally the root node.

Level Order Traversal: This method visits the nodes level by level, starting from the root and moving to the next level. It uses a queue data structure to keep
track of the nodes at each level.

These traversal methods are commonly used to perform various operations on binary trees, such as searching, printing, or modifying the nodes.


### What is a complete, a full, a perfect, and a balanced binary tree?

A complete binary tree is a binary tree in which all levels, except possibly the last level, are completely filled, and all nodes are as far left as possible. In
other words, a complete binary tree is a binary tree in which all nodes are filled from left to right, except for the rightmost nodes on the last level.

A full binary tree is a binary tree in which every node has either 0 or 2 children. In other words, every node in a full binary tree either has no children (leaf
node) or has two children.

A perfect binary tree is a binary tree in which all levels are completely filled with nodes. It is a combination of both a complete binary tree and a full binary
tree.

A balanced binary tree is a binary tree in which the difference in height between the left and right subtrees of any node is at most 1. In other words, a balanced
binary tree is a tree in which the heights of the left and right subtrees of any node differ by at most one.

These different types of binary trees have their own characteristics and properties, and they are used in various applications depending on the specific
requirements and constraints of the problem at hand.
