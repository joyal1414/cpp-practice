#include <iostream>
using namespace std;
int main()
{

    int x = 10, y = 30;
    int z = x + y;
    string a = "10", b = "30";
    string c = a + b;
    cout << c << endl;
    cout << z << endl;

    string v = "joyal";
    cout << v.size() << endl;
    cout << v.length() << endl;
    cout << "\t" << v[0] << endl;
    cout << "\t" << v[1] << endl;
    cout << "\t" << v[2] << endl;
    cout << "\t" << v[3] << endl;
    cout << "\t" << v[4] << endl;
    cout << "\t" << v[5] << endl;
    cout << endl
         << v<< endl;                    
 
 
 
 
    string fullname;

    cout<<"ENTER YOUR FULL NAME: ";
    getline(cin,fullname);
cout<<fullname;

    return 0;
}