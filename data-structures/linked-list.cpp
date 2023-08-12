#include <iostream>

struct Node
{
    int data;
    Node *next;
};

typedef Node* nodePtr;

void insert(nodePtr& head, int data)
{
    nodePtr tempPtr;
    tempPtr = new Node;
    tempPtr->data = data;
    tempPtr->link = head;
    head = tempPtr;
}

int main()
{
    nodePtr head;
    head = headNode;

    headNode->data = 20;
    headNode->link = NULL;

    insert (head, 30);
    nodePtr tmp;
    tmp = head;

    while (tmp->link != NULL)
    {
        std::cout << tmp->data << std::endl;
        tmp = tmp->link;
    }
}
