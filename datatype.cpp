#include <iostream>
using namespace std;
int main () {
    int r;
    int a,b,c;           //whole numbers 
    string rollnumber;
    string fname;
    string Lname;
    string fLname;
    
   cout<<"enter your roll number:";
   cin>>rollnumber;


   cout<<"enter your first name :";
   cin>>fname;
    cout<<"enter your last name :";
   cin>>Lname;
   fLname=fname+ Lname;

   cout<<"your entered rollnumber is "<<rollnumber<<"\nyour entered full name is\\ \""<<fLname<<"\\\"";
   

    cout<<"\nENTER YOUR FIRST VALUE:"; //first value
    cin>>a;
    cout<<"ENTER UR SECOND VALUE:";//second value 
    cin>>b;
    
     cout<<"\nSUM OF ALL VALUE IS  "<<a+b;          //sum
     cout<<"\nPRODUCT OF ALL NUMBERS IS  "<<a*b;       // product


     cout<<"\nQUOTIENT:"<<a/b;           //ans
     r=a % b;
     cout<<"\nReminder:"<<r;     // reminder
    
    cout<<"\nsubract is"<<a-b;
            //thanks mesage 

     cout<<"\nTHANK YOU \n OPERATION SUCESSFULL\n";

    return 0;
}