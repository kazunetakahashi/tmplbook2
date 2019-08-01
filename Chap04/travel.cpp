#include <iostream>

struct Node
{
  int val;
  Node *left;
  Node *right;

  Node(int i) : val{i}, left{nullptr}, right{nullptr} {}
};

auto Left = &Node::left;
auto Right = &Node::right;

template <typename T, typename... TP>
Node *travel(T np, TP... paths)
{
  return (np->*...->*paths);
}

int main()
{
  Node *root = new Node{0};
  root->left = new Node{1};
  root->right = new Node{2};
  root->left = new Node{3};
  Node *node = travel(root, Left, Right, Left);
  // (((root ->* Left) ->* Right) ->* Left)
  // root -> Node::left -> Node::right -> Node::left
  // root -> left -> right -> left
  std::cout << node->val << std::endl;
}