
#include <iostream>
#include "clsMyQueueArr.h"

using namespace std;
int main()
{
    clsMyQueueArr<int >MyQueue;
    MyQueue.Push(10);
    MyQueue.Push(20);
    MyQueue.Push(30);
    MyQueue.Push(40);
    MyQueue.Push(50);

    cout << "\nQueue: \n";
    MyQueue.Print();

    cout << "\nQueue Size: " << MyQueue.Size();
    cout << "\nQueue front: " << MyQueue.Front();
    cout << "\nQueue Back: " << MyQueue.Back();

    MyQueue.Pop();

    cout << "\n\nQueue after pop(): \n";
    MyQueue.Print();

    cout << "\n\nItem(2): " << MyQueue.GetItem(2);

    cout << "\n\nQueue after reverse(): \n";
    MyQueue.Print();

    MyQueue.UpdateItem(2,500);
    cout << "\n\nQueue after updating item(2) 500: \n";
    MyQueue.Print();

    MyQueue.InsertAtFront(90);
    cout << "\n\nQueue after inserting at beginning: \n";
    MyQueue.Print();

    MyQueue.InsertAfter(2,600);
    cout << "\n\nQueue after inserting at (2) value600: \n";
    MyQueue.Print();

    MyQueue.InsertAtBack(700);
    cout << "\n\nQueue after inserting at Back(700): \n";
    MyQueue.Print();

    MyQueue.Clear();
    cout << "\nQueue after clear(): \n";
    MyQueue.Print();
    system("pause>0");
}
