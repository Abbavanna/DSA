#include <iostream>

using namespace std;

class queue
{

private:
    int rear;
    int front;
    int Arr[5];

public:
    queue()
    {

        int rear = -1;
        int front = -1;
        for (int i = 0; i < 5; i++)
        {
            Arr[i] = 0;
        }
    }
    bool isEmpty();
    bool isFull();
    void enqueue(int value);
    int dequeue();
    int count();
    void display();
};

bool queue ::isEmpty()
{

    if (rear == -1 && front == -1)
    {

        return true;
    }
    else
        return false;
}
bool queue ::isFull()
{

    if (rear == 4)

    {

        return true;
    }
    else
        return false;
}

void queue ::enqueue(int value)
{

    if (isFull())
    {
        cout << "The queuee is full. Cannot insert any value further";
        return;
    }
    else if (isEmpty())
    {
        rear = 0;
        front = 0;
        Arr[rear] = value;
    }
    else
    {

        rear++;
        Arr[rear] = value;
    }
}

int queue ::dequeue()
{

    int x = 0;
    if (isEmpty())
    {

        cout << "The queue is empty. No value to delete";
        return x;
    }
    else if (front == rear)
    {
        x = Arr[rear];

        rear = -1;
        front = -1;
        return x;
    }
    else
    {

        x = Arr[front];
        Arr[front] = 0;
        front++;
        return x;
    }
}

int queue ::count()
{
    return (rear - front + 1);
}

void queue ::display()
{
    for (int i = 0; i < 5; i++)
    {
        cout << Arr[i] << endl;
    }
}

int main()
{
    queue q;
    int choice, valu;

    do
    {

        cout << "Welcome to Queue data structure\n";
        cout << "Choose any option\n";
        cout << "\t0.Exit\n";
        cout << "\t1.Enqueuee\n";
        cout << "\t2.Dequeue\n";
        cout << "\t3.isEmpty\n";
        cout << "\t4.isFull\n";
        cout << "\t5.Count\n";
        cout << "\t6.Display\n";
        cout << "\t7.Clear Screen\n";
        cin >> choice;
        switch (choice)
        {
        case 0:
            cout << "Thanks for using queuee data structure . Bye !";

            break;
        case 1:
            cout << "Please enter a value to send into the queue: " << endl;
            cin >> valu;
            q.enqueue(valu);
            break;
        case 2:
            cout << "Dequeing the value\n"
                 << endl;
            cout << q.dequeue();
            break;
        case 3:
            cout << "Checking whether the queuee is empty or not!\n";
            cout << q.isEmpty() << endl;
            break;
        case 4:
            cout << "Checking whether the queuee is Full or not!\n";
            cout << q.isFull() << endl;
            break;
        case 5:
            cout << "The count of elements are: ";
            cout << q.count() << endl;
            break;
        case 6:
            cout << "Displaying all elements in the queuee\n";
            q.display();
            break;
        case 7:
            cout << "Clearing the screen\n";
            system("cls");
            break;

        default:
            cout << "Choose the correct option";
            break;
        }

    } while (choice != 0);
    return 0;
}