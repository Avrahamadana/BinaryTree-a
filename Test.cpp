#include "doctest.h"
#include "BinaryTree.hpp"
using namespace ariel;
TEST_CASE("Good BinaryTree code")
{
    BinaryTree<int> tree;
    BinaryTree<int> tree1;

    int arr[5] = {3, 1, 0, 2, 4};
    int arr1[5] = {0, 1, 3, 2, 4};
    int arr2[5] = {3, 1, 4, 2, 0};
    tree.add_root(0).add_left(0, 1).add_right(0, 2).add_left(1, 3).add_right(2, 4);
    

    tree1.add_root(0).add_left(0, 1).add_right(0, 2).add_left(1, 3).add_right(2, 4);
    int j = 0;
    //CHECK InOrder
    for (auto i = tree.begin_inorder(); i != tree.end_inorder(); ++i)
    {
        CHECK(arr[j] == *i);
        j++;
    }
    j = 0;
    for (auto i = tree1.begin_inorder(); i != tree1.end_inorder(); ++i)
    {
        CHECK(arr[j] == *i);
        j++;
    }
    j = 0;
    //CHECK Preorder
    for (auto i = tree.begin_preorder(); i != tree.end_preorder(); ++i)
    {
        CHECK(arr1[j] == *i);
        j++;
    }
    j = 0;
    for (auto i = tree1.begin_preorder(); i != tree1.end_preorder(); ++i)
    {
        CHECK(arr1[j] == *i);
        j++;
    }
    j = 0;
    for (int x : tree)
    {
        CHECK(j == x);
        j++;
    }
    j = 0;
    for (int x : tree)
    {
        CHECK(j == x);
        j++;
    }
    j = 0;
    for (int x : tree)
    {
        CHECK(j == x);
        j++;
    }
    j = 0;
    for (int x : tree)
    {
        CHECK(j == x);
        j++;
    }
    j = 0;
    //CHECK Postorder
    for (auto i = tree.begin_postorder(); i != tree.end_postorder(); ++i)
    {
        CHECK(arr2[j] == *i);
        j++;
    }
    j = 0;
    for (auto i = tree1.begin_postorder(); i != tree1.end_postorder(); ++i)
    {
        CHECK(arr2[j] == *i);
        j++;
    }
    j=0;
    for (int i = 0; i < 21; i++)
    {
        CHECK(j==i);
        j++;
    }
}