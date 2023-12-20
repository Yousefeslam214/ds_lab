#include <iostream>
using namespace std;
#define size 5
int queue[size];
int front = -1, rear = -1;
/**
 * Queue Ex
 * Write a program code in C++ to implement the following:
 * 1. Create queue.
 * 2. Create Enqueue function.
 * 3. Create Dequeue function.
 * 4. Create peek function.
 * 5. Create display function.
*/

void enqueue(int value);
void dequeue();
int peek();
void display();

int main()
{
    enqueue(5);
    enqueue(101);
    enqueue(102);
    enqueue(103);
    display();
    dequeue();
    display();
    cout << "peek = " << peek() << endl;
    display();
}

void enqueue(int value)
{
    if (rear != size - 1)
    {
        if (front == -1 && rear == -1)
        {
            front++;
            queue[++rear] = value;
        }
        else
        {
            queue[++rear] = value;
        }
    }
    else
    {
        cout << "queue is full" << endl;
    }
}


void dequeue()
{
    if (front != -1 && rear != -1 && front <=  rear)
    {
        front++;
    }
    else
    {
        cout << "queue is empty" << endl;
    }
}

int peek()
{
    if (front != -1 && rear != -1 && front <=  rear)
    {
        return queue[front];
    }
    else
    {
        cout << "queue is empty" << endl;
        return -1;
    }
}


void display() 
{
    if (front != -1 && rear != -1 && front <=  rear)
    {
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << "\t";
        }
        cout << endl;
    }
    else
    {
        cout << "queue is empty" << endl;
    }
}
