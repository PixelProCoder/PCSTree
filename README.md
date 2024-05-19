# PCS Tree
 
The PCS tree is a specialized version of the left-child, right-sibling binary tree. In a regular LCRS tree, a node would have only two pointers - one to the node's first child and one to its next sibling. In contrast, the PCS tree has three pointers: one to the first child, one to its next sibling, and one to its previous sibling. The additional previous pointer helps with the efficient removal of a node from the tree. Additionally, I have implemented two types of iterators to traverse the tree:

1. Forward iterator: This iterator implements a depth-first search algorithm to traverse the tree from top to bottom.
2. Reverse iterator: This iterator can be used to traverse the tree from bottom to top.

Moreover, the tree can perform insertions with a time complexity of O(1).
