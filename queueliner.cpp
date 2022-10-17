#include <iostream>

using namespace std;

class queu
{

private:
    int rear;
    int front;
    int Arr[5];

public:
    queu();
    bool isEmpty();
    bool isFull();
    int enqueue(int value);
    void dequeue();
    int count();
    void display();
};

queu ::queu()
{

    int rear = -1;
    int front = -1;
    for (int i = 0; i < 5; i++)
    {
        Arr[i] = 0;
    }
}

bool queu ::isEmpty()
{

    if (rear == -1 && front == -1)
    {
        cout << "The queue is empty";
        return true;
    }
    else
        return false;
}
bool queu ::isFull()
{

    if (rear == 3 && front == 0)

    {
        cout << "The queue is full";
        return true;
    }
    else
        return false;
}

int queu ::enqueue(int value)
{
}

void queu ::dequeue()
{
}

int queu ::count()
{
}

void queu ::display()
{
}

int main()
{
    queu q;
    int choice, value;

    do
    {

        cout << "Welcome to Queue data structure\n";
        cout << "Choose any option\n";
        cout << "\t0.Exit\n";
        cout << "\t1.Enqueue\n";
        cout << "\t2.Dequeu\n";
        cout << "\t3.isEmpty\n";
        cout << "\t4.isFull\n";
        cout << "\t5.Count\n";
        cout << "\t6.Display\n";
        cout << "\t7.Clear Screen\n";
        cin >> choice;
        switch (choice)
        {
        case 0:
            cout << "Thanks for using queue data structure . Bye !";

            break;
        case 1:
            cout << "Please enter a value to send into the queue:\t";
            cin >> value;
            q.enqueue(value);
            break;
        case 2:
            cout << "Dequeing the value\n";
            q.dequeue();
            break;
        case 3:
            cout << "Checking whether the queue is empty or not!\n";
            q.isEmpty();
            break;
        case 4:
            cout << "Checking whether the queue is Full or not!\n";
            q.isFull();
            break;
        case 5:
            cout << "The count of elements are: ";
            q.count();
            break;
        case 6:
            cout << "Displaying all elements in the queue\n";
            q.display();
            break;
        case 7:
            cout << "Clearing the screen\n";

            break;

        default:
            cout << "Choose the correct option";
            break;
        }

    } while (choice != 0);
    return 0;
}