#include <iostream>
#include <Windows.h>
using namespace std;

struct Node
{
    int data;
    Node *ptr_to_next = nullptr;
};

struct List
{
    Node *head_node = nullptr;
    Node *tail_node = nullptr;
};

void pushBack(List &list, const int &data)
{
    Node *new_node = new Node;
    new_node->data = data;

    if (list.head_node == nullptr)
    {
        list.head_node = new_node;
        list.tail_node = new_node;
    }
    else
    {
        list.tail_node->ptr_to_next = new_node;
        list.tail_node = new_node;
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    List list;
    for (int i = 0; i != 7; ++i)
    {
        pushBack(list, i);
    }

    Node *current_node = list.head_node;
    while (current_node != nullptr)
    {
        cout << current_node->data << ' ';
        current_node = current_node->ptr_to_next;
    }

    return 0;
}