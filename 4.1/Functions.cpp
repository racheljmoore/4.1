#include "main.h"  
#include <cstdlib> 
#include <ctime>    
#include <iostream>

int main() {
    // Initialized random seed
    std::srand(std::time(nullptr));

    // Created instances of your data structures
    DoublyLinkedList stack; 
    DoublyLinkedList queue; 

	if (top == MAX - 1)

    // Remove from stack
    stack.removeStack();
    stack.printStack(); // Expect: 20 -> 10

    // Insert into queue (FIFO)
    std::cout << "\nTesting Queue:\n";
    queue.insertQueue(40); 
    queue.insertQueue(50);
    queue.insertQueue(60);
    queue.printQueue();
    // Expect: 40 -> 50 -> 60

    // Removed from queue
    queue.removeQueue();
    queue.printQueue(); 
    return 0;
}

DoublyLinkedList::DoublyLinkedList()
{
}

DoublyLinkedList::~DoublyLinkedList()
{
}

void DoublyLinkedList::removeQueue()
{
}

void DoublyLinkedList::printQueue()
{
}
