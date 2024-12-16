
#ifndef MAIN
#define MAIN
#include <iostream>
#include <cstdlib>
#include <ctime>

class DoublyLinkedList {
private:
    struct Node {
        int data;
        Node* next;
        Node* prev;
        Node(int value) : data(value), next(nullptr), prev(nullptr) {}
    };

    Node* head;
    Node* tail;

public:
    // Constructor and Destructor
    DoublyLinkedList();
  

    // Stack-specific methods (LIFO)
    void insertStack(int value);
    void removeStack();
    void printStack();

    void insertQueue(int value);
    void removeQueue();
    void printQueue();
};

#endif 





