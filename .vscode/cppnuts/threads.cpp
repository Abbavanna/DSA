
/*Different types of thread use*/

#include<iostream>
using namespace std;
#include<thread>

// void fun(int x){

//     while (x-- >1)
//     {
//         cout<<x;
//     }
    
// }

// int main(){

//     thread t1(fun,10);
//     t1.join();

//     return 0;
// }

/*Thread using lambda function*/


// int main(){



// thread t([](int x){while (x-->0){cout<<x<<endl;
// }},10);
// t.join();
// return 0;
    
// }

/*using functor*/

// class base{
//     public:

//     void operator()(int x){

//         while (x-->0)
//         {
//             cout<<x<<endl;
//         }
        
//     }
// };

// int main(){

//     thread t(base(),10);
//     t.join();
//     return 0;
// }


/*Mutex try lock*/

#include<mutex>

int counter  = 0;

mutex m;

void count(int x){

    while (x-->0)
    {   
        // if(m.try_lock())
        m.lock();
        counter++;
        m.unlock();
    }
    

}
int main(){


     thread t1(count,1000000);
     
     thread t2(count,12121212);
     t1.join();
     t2.join();

    cout<<"Result "<<counter;
    return 0;
}