#include<iostream>
#include<fstream>
#include<string>
#include<map>
using namespace std;


class createaccount{

  private:
    string username,password;
  public:

    createaccount(){}
    createaccount(string un, string pw)
    {
      username = un;
      password = pw;
    }

    string getusername(){return this->username;}
    string getpassword(){return this->password;}

    void setusername(){ this->username = username;}
    void setusername(){ this->password = password;}
    
    friend ofstream & operator<<(ofstream &ofs, createaccount  &ca);
    friend ifstream & operator>>(ifstream &ifs, createaccount  &ca);
    friend ostream & operator<<(ostream &os, createaccount  &ca);
    
};


class login{

    private:
      
      map<string,createaccount> reg;

    public:

      login();
      createaccount creation(string username,string password);
      createaccount log(string username, string password);
      ~login();
};

createaccount login::creation(string username, string password){

      ofstream outfile("Login.txt");

      

}

createaccount login::log(string username, string password){

  ifstream infile("Login.txt");
}


ofstream & operator<<(ofstream &ofs, createaccount  &ca){

  ofs<<ca.username<<endl<<ca.password<<endl;
  return ofs;
}
ifstream & operator>>(ifstream &ifs, createaccount  &ca){

  ifs>>ca.username>>ca.password;
  return ifs;
}
ostream & operator<<(ostream &os, createaccount  &ca){

  os<<ca.username<<endl<<ca.password<<endl;
  return os;
}


int main(){

  createaccount acc;
  login l;
  int choice;
  string username,password;

  do
  {
    cout<<"Choose an option: "<<endl;
    cout<<"\t1.Create an account"<<endl;
    cout<<"\t2.Login to an account"<<endl;
    cout<<"\t3.Exit"<<endl;
  
  cin>>choice;
 
  switch (choice)
  {
  case 1:
    cout<<"Choose username: ";
    cin>>username;
    
    cout<<"Choose Password: ";
    cin>>password;

    acc = l.creation(username,password);
    cout<<acc;
    break;
  case 2:
    cout<<"Enter username: ";
    cin>>username;
    cout<<"Enter Password: ";
    cin>>password;
    acc = l.log(username,password);
    cout<<acc;
    break;
  case 3:
    cout<<"Thanks for using our service";
    break;
  
  default:
    cout<<"Choose the correct option";
    break;
  }
} while (choice!=3);
return 0;
}