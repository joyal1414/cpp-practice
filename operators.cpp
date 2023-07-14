#include<iostream>
using namespace std;
int main () {
int a=10,b=2,d=222;
//arithametuc operators
//+,-,/,*,%(modulos reminter),--,++

a++;
cout<<a++<<endl;


//assiment operator
//=,-=,+=,%=
//a-=10(a=a-10)





/*Comparison operator 
>,<,<=,>=,!=(not equal),==                        */
int x=10,y=10;

cout<<(x>y)<<endl;                    // true = 1
                                      // false = 0
cout<<(x<y)<<endl;
cout<<(x<=y)<<endl;
cout<<(x>=y)<<endl;
cout<<(x!=y)<<endl;
cout<<(x==y)<<endl;

/*logical operator  
&&,||,!
*/
int num1=10,num2=10;
cout<<"\n\n\n\n\n\n\n\n\n\n\nLOGICAL OPERATOR";
cout<<"\n"<<(num1>=100)<<endl;

cout<<(num1<100&&num1==10)<<endl;
cout<<(num1>100&&num1==10)<<endl;
cout<<(num1<100||num1==10)<<endl;
cout<<(num1>100||num1==100)<<endl;




cout<<!(num1>100||num1==100)<<endl;












return 0;
}