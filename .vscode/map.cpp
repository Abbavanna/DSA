#include <iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;

int main()
{
   map<string, vector<string>> family;

   vector<string> abbavanna {"munirathnam","adhilakshmi","bhanu","pavan"};
   vector<string> gandla {"deviyani","subramanyam","latha","sarath","hindu"};
   vector<string> gandla2 {"shanmugam","yasodha","karthik","saravanan"};
   vector<string> cherukuri {"mani","hiteja","thanuja"};

   family.insert(pair<string, vector<string>>("ABBAVANNA",abbavanna));
   family.insert(pair<string, vector<string>>("GANDLA",gandla));
   family.insert(pair<string, vector<string>>("GANDLA2",gandla2));
   family.insert(pair<string, vector<string>>("CHERUKURI ",cherukuri));

   for (auto pair : family)
   {
        cout<<pair.first<<"---"<<endl;
        for (auto  i : pair.second)
        {
            cout<<i<<endl;
        }
        
   }
   
     
}