 #include<iostream>


using namespace std;

// template <class T1, class T2> // we can define class t2 class t3, depending on the main class input params
// // Intro to templates
// auto getmax(T1 x, T2 y){

//         return  x>y? x :y ;

// }

// int main(){

//     int x = 100; 
//      double  y = 200.5546546549847654654;

//     char h = 'A', z = 'B';

//     cout<<getmax(x,y)<<endl;
//     cout<<getmax(h,z)<<endl;

// }

/*****Intro to overriding function template****/

// int const& max(int const&a, int const&b){

//     cout<<"Max(t,t)"<<endl;
//     return a>b?a:b;
// }

// template <class T1, class T2>

// auto const& max(T1 const&a,T2 const&b){
//     cout<<"Maxauto(t,t)"<<endl;
//     return a>b?a:b;
// }

// template <class T1, class T2, class T3>

// auto const& max(T1 const&a,T2 const&b, T3 const&c){
//     cout<<"Max(t,t,t)"<<endl;
//     return max(max(a,b),c);
// }

// int main(){


//     cout<<::max(10,20);
    
    
// }

/*Template specilization using vectors*/

#include<vector>
#include<sstream>


// template <class T>

// auto addll(vector<T> list ){


//     T count = 0;

//     for (auto& elements : list)
//     {
//         count += elements;
        
//     }
   
//     return count;
// }


// string addll(vector<string> list){

//       int count = 0;
//       for (auto& elements : list){       //auto& = const string&
//           for (auto& n : elements)
//                 count+=n;
             
//       }

    
//       ostringstream os;
//       os<<count;
//       string str = os.str();
//       return str;

// }
// int main(){


//     vector<int> vectint = {1,2,3,4,5};
//     vector<double> vectdouble = {1,0,0,0,0,1,1,0,0,0,0,1,1,0,0,0,0,1,1,0,0,0,0,1};
//     vector<string> vectstring = {"ab","bc"};

//      cout<<"int"<<addll(vectint)<<endl;
//      cout<<"double"<<addll(vectdouble)<<endl;
//      cout<<addll(vectstring)<<endl;
    

//     return 0;
// }

/*Threads in c++*/

typedef unsigned long long ul;
#include<chrono>
#include<thread>
ul evensum = 0;
ul oddsum = 0;
void findeven(ul start, ul end){

    
    for (ul i = start; i<=end; ++i)
    {
        if ((i & 1)==0)
        {
            evensum+=i;
        }
      
    }
    
}
void findodd(ul start, ul end){

    
    for (ul i = start; i<=end; ++i)
    {
        if ((i & 1)==1)
        {
            oddsum+=i;
        }
      
    }
    
}

int main(){

    ul start= 0, end = 56465;

    auto startTime = chrono::steady_clock::now();

    thread t1(findeven,start,end);
    thread t2(findodd,start,end);

    t1.join();
    t2.join();

    // findeven(start,end);
    // findodd(start,end);

    auto endclock = chrono::steady_clock::now();

    double dur = double(chrono::duration_cast<chrono::microseconds>(endclock-startTime).count());
   
   
    
    cout<<"DURATION IS:\t"<<dur<<endl; 
    cout<<"EVEN\t"<< evensum <<endl;;
    cout<<"ODD\t"<<oddsum;


}

