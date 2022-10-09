#include<iostream>

using namespace std;

class human{

    public:

        virtual  void action() = 0;
};

class pavan:public human{

    public:

        void action(){ cout<<"Pavan is a c++ programmer"<<endl;}
};
class thanu:public human{

    public: 

        void action(){ cout<<"Thanu is a python programmer"<<endl;}
};

int main(){



    pavan p;
    human &h = p;

    p.action();
    

   

}