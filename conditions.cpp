#include <iostream>
using namespace std;
int main()
{

    int age;

    string NAME, CRIMINAL, W;

    cout << "ENTER YOUR AGE:";
    cin >> age;
    if (age >= 18)
    {

        cout << "YOU ARE ELIGIBLE FOR LISENCE \n";
        cout << "DO YOU HAVE ANY CRIMINAL HISTORY(Y/N):";
        cin >> CRIMINAL;

        if (CRIMINAL == "N" || CRIMINAL == "n")
        {
            cout << "ENTER YOUR NAME:";
            cin >> NAME;
            cout << "YOUR ENTERD NAME IS " << NAME;
        }
        else if (CRIMINAL == "Y" || CRIMINAL == "y")
        { cout << "you are not eligible\n";}
        else if (CRIMINAL == "PARAULLA" || CRIMINAL == "paraulla")
        {
            cout<<"ATHENNA NINAK PARANJA \n  ";
        }
        
        else
        {cout << "YOU HAVE ENTERED WRONG INPUT PLEASE TRY AGAIN -_-";}
    }
        return 0;
        
        }