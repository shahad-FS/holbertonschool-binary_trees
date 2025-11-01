# C - Binary trees

This project explores the fundamentals of **binary trees** and their variations. The main objective was to understand how trees are structured, traversed, and manipulated in C.
Through the project, we implemented different types of trees — including **Binary Trees**, **Binary Search Trees (BSTs)**, **AVL Trees**, and **Max Binary Heaps** — while analyzing their advantages and limitations.

---

## ✅ Tests

All project tasks are accompanied by test files located in the `tests/` directory.
These files were provided by Holberton School and are used to validate program functionality.

---

## 🧰 Helper File

- **`binary_tree_print.c`** — Contains a helper function that visually prints binary trees in a structured, easy-to-read format.

---

## 📁 Header File

- **`binary_trees.h`** — Defines all data structures and declares every function prototype used throughout the project.

---
## 🧮 Tasks Overview

- Each function focuses on a specific concept related to binary trees:

- Creating and inserting nodes.

- Deleting entire trees.

- Checking if a node is a root or a leaf.

- Traversing trees in preorder, inorder, and postorder.

- Calculating properties such as height, depth, size, and balance factor.

- Implementing advanced tree operations like rotations, validity checks (for BST and AVL), and node removal.

## 🧩 Data Structures

```c
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;
```

---

## 📘 Project Tasks

Each task builds on the previous one to progressively strengthen understanding of tree operations.

0. New Node

Create a binary tree node with a specific parent and value.
➡️ File: 0-binary_tree_node.c

1. Insert Left

Insert a node as the left child of another.
If the parent already has a left child, it becomes the left child of the new node.
➡️ File: 1-binary_tree_insert_left.c

2. Insert Right

Insert a node as the right child of another.
➡️ File: 2-binary_tree_insert_right.c

3. Delete Tree

Delete an entire binary tree.
➡️ File: 3-binary_tree_delete.c

4. Check Leaf

Check if a node is a leaf node (no children).
➡️ File: 4-binary_tree_is_leaf.c

5. Check Root

Determine whether a node is the root of a tree.
➡️ File: 5-binary_tree_is_root.c

📊 Big O Notation
|File	|Description|
|--------|------------------------------------------|
|115-O	|Average time complexities of BST operations|
|125-O	|Average time complexities of AVL tree operations|
|135-O	|Average time complexities of binary heap operations|

---
## 👥 Authors
- Shahad Alsaneea
- Raghad Nassef

```
This project provided hands-on experience with dynamic data structures and recursive algorithms — building a strong foundation for more advanced topics such as self-balancing trees and heaps.
```
