#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale (LC_CTYPE, "ukr");
    float Q=0;
    float x=0;
    float z=0;
    float y=0;
    cout<<"������ x"<<endl;
    cin>>x;
    cout<<"������ y"<<endl;
    cin>>y;
    cout<<"������ z"<<endl;
    cin>>z;
    Q=log1p(abs(x-z))+sqrt(3.14*pow(x,3)/sqrt(2*x+2*pow(y,(abs(z-2)))));
    cout<<"Q ����- "<<Q;

}
