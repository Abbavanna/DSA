#include<iostream>
using namespace std;

//FUN FUN

class none:().

class stack{

    private:
   
    int top;
    int Arr[5];
    public:
    stack();
    void push(int value);
    int pop(); // it should return the pop value so return data type is int
    bool isEmpty();
    bool isFull();
    int peek(int position); // return value at the index value choosen
    int count();
    void change(int position, int value);
    void display();
};

stack :: stack(){
    top = -1;
    for (int i = 0; i < 5; i++)
    {
        Arr[i]=0;
    }
    
}
void stack::push(int value){

    
    if (isFull())
    {
        cout<<"Stack overflow. Cannot accept any further element. Please increase the size of array or delete the exisiting element to push the value"<<endl;

    }
    else
        top++;
        Arr[top] = value;
    
}
int stack::pop(){

    int i;
    if (isEmpty())
    {
        cout<<"Stack underflow, No elements are there in stack to remove, Please add some elements and then try again!"<<endl;

    }
    else
    
        i = Arr[top];
        Arr[top] = 0;
        top--;
        return i;
    
    

}

bool stack :: isEmpty(){

    if (top==-1)
    {
        return true;
    }
    else 
        return false;
    
}
bool stack :: isFull(){

    if(top==4){
     return true;   
    }
    else
        return false;
    
}
int stack ::  peek(int position){

    int i;
    if (isEmpty())
     cout<<"Stack underflow, No elements are there in stack to remove, Please add some elements and then try again!"<<endl;
    else
    i = Arr[position] ;
    return i;
}
int stack::count(){

    return top+1; // here top is not index, it is an increment variable which is initially set to -1
}
void stack:: change(int position, int value){

    Arr[position] = value;

}
void stack::display(){

    for (int i = 4; i > -1; i--)
    {
        cout<<Arr[i]<<endl;
    }
    
};

int main(){

    stack stack;
    int value,position,choice;

    
    do
    {
        cout<<"\t0.Exit: "<<endl;
        cout<<"\t1.Push "<<endl;
        cout<<"\t2.Pop "<<endl;
        cout<<"\t3.isEmpty"<<endl;
        cout<<"\t4.isFull"<<endl;
        cout<<"\t5.peek "<<endl;
        cout<<"\t6.Count "<<endl;
        cout<<"\t7.change "<<endl;
        cout<<"\t8.display"<<endl;
        cout<<"\t9.Clear Screen"<<endl;
        cout<<"Choose an option: "<<endl;
        
        cin>>choice;
        switch (choice)
        {

                case 0:
                    break;
                case 1:
                    cout<<"Enter a value to push into the stack: ";
                    cin>>value;
                    stack.push(value);
                    break;
                case 2:
                    cout<<"Enter a value to pop out of the stack: ";
                    cout<<stack.pop();
                    break;
                case 3:
                    cout<<"Checking whether the stack is empty or not: ";
                    cout<<stack.isEmpty();
                    break;
                case 4:
                    cout<<"Checking whether the stack is full or not: ";
                    cout<<stack.isFull();
                    break;
                case 5:
                    cout<<"Choose the element position to peek into its value: ";
                    cin>>position;
                    cout<<stack.peek(position);
                    break;
                case 6:
                    cout<<"Counting number of elements in stack: ";
                    cout<<stack.count();
                    break;
                case 7:
                    cout<<"Enter position to change an element in stack: ";
                    cin>>position;
                    cout<<"Enter value to insert in the position: ";
                    cin>>value;
                    stack.change(position, value);
                    break;
                case 8:
                    cout<<"Displaying all elements in the stack \n";
                    stack.display();
                    break;
                case 9:
                    cout<<"Clearing the screen";
                    system("cls");
                    break;
                
                default:
                    cout<<"Please choose the correct option"<<endl;
                    break;
        }
        
    } while (choice!=0);
    
    return 0;
    
}

