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

    string v = "jo yal";
    cout << v.size() << endl;
    cout << v.length() << endl;
    cout << "\t" << v[0] << endl;
    cout << "\t" << v[1] << endl;
    cout << "\t" << v[3] << endl;
    cout << "\t" << v[4] << endl;
    cout << "\t" << v[5] << endl;
    cout << endl;

    return 0;
}