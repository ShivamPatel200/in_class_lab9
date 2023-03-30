#include <iostream>
#include <memory>
using namespace std;

#ifndef IN_CLASS_LAB_NINE
#define IN_CLASS_LAB_NINE

struct List
{
    struct Node
    {
        int data;
        unique_ptr<Node> next;
        Node(int data) {
            this->data = data;
            next = nullptr;
        }
    };
        unique_ptr<Node> head;
    ~List() {
        // add code here
        while(head) {
            auto temp = move(head->next);
            head = move(temp);
        }
}

void push(int data) {
    // add code here – adjust the head
    auto new1 = make_unique<Node>(data);
    new1->next = move(head);
    head = move(new1);
}
};

#endif
