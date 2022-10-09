#include<iostream>
#include<map>
#include<string>
#include<fstream>

using namespace std;

#define MIN_BALANCE 500;

class insufficientfunds{ public: insufficientfunds(){cout<<"NO money NO honey\n";}};
class account{

    private:

        long accountnumber;
        string firstname;
        string lastname;
        float balance;
        static long defaultaccountnumber;    // should initialize outside using scope resolution
    public:

        account(){};                                 // Non parameterized object
        account(string fn, string ln, float bal){}; // parameterized object
        long getaccountno(){return accountnumber;}   // accessors
        string getfirstname(){return firstname;}
        string getlastname(){return lastname;}
        float getbalance(){return balance;} 
        void deposit(float amount);         //mutator
        void withdraw(float amount);        //mutator
        static void getdefaultaccno();           
        static void setdefaultaccno(long accountnumber);

        friend ofstream & operator<<(ofstream &ofs, account &acc);
        friend ifstream & operator>>(ifstream &ifs, account &acc);
        friend ostream & operator<<(ostream &os, account &acc);
};

long account:: defaultaccountnumber = 0; 

class bank{
    private:

    map<long,account> Accounts;

    public:

        bank();
        account openaccount(string fn, string ln, float bal);  //parameterized objects
        account balanceenq(long accountnumber);
        account deposit(long accountnumber, float amount);
        account withdraw(long accountnumber, float amount);
        void closeaccount(long accountnumber);    //mutator
        void showallaccounts();    //accessor
       ~bank();

};

int main()
{

    bank b;
    account acc;
 
 int choice;
 string fname,lname;
 long accountNumber;
 float balance;
 float amount;
 cout<<"***Banking System***"<<endl;
 do
    {
 cout<<"\n\tSelect one option below ";
 cout<<"\n\t1 Open an Account";
 cout<<"\n\t2 Balance Enquiry";
 cout<<"\n\t3 Deposit";
 cout<<"\n\t4 Withdrawal";
 cout<<"\n\t5 Close an Account";
 cout<<"\n\t6 Show All Accounts";
 cout<<"\n\t7 Quit";
 cout<<"\nEnter your choice: ";
 cin>>choice;
 switch(choice)
    {
           case 1:
            cout<<"Enter First Name: ";
            cin>>fname;
            cout<<"Enter Last Name: ";
            cin>>lname;
            cout<<"Enter initil Balance: ";
            cin>>balance;
            acc=b.openaccount(fname,lname,balance);    // storing details in acc object 
            cout<<endl<<"Congradulation Account is Created"<<endl;
            cout<<acc;  // throwing out the details with operator overloading to console
            break;
            case 2:
            cout<<"Enter Account Number:";
            cin>>accountNumber;
            acc=b.balanceenq(accountNumber);
            cout<<endl<<"Your Account Details"<<endl;
            cout<<acc;
            break;
            case 3:
            cout<<"Enter Account Number:";
            cin>>accountNumber;
            cout<<"Enter Balance:";
            cin>>amount;
            acc=b.deposit(accountNumber, amount);
            cout<<endl<<"Amount is Deposited"<<endl;
            cout<<acc;
            break;
            case 4:
            cout<<"Enter Account Number:";
            cin>>accountNumber;
            cout<<"Enter Balance:";
            cin>>amount;
            acc=b.withdraw(accountNumber, amount);
            cout<<endl<<"Amount Withdrawn"<<endl;
            cout<<acc;
            break;
            case 5:
            cout<<"Enter Account Number:";
            cin>>accountNumber;
            b.closeaccount(accountNumber);
            cout<<endl<<"Account is Closed"<<endl;
            cout<<acc;
            case 6:
            b.showallaccounts();
            break;
            case 7: break;
            default:
            cout<<"\nEnter corret choice";
            exit(0);
 }
 }while(choice!=7); 
 
 return 0;
} //tobe continued tomorrow !!