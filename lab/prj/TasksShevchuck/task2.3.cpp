#include <iostream>
#include "calculation.h"
using namespace std;

void developerInfo()
{
    cout<<"��������� �� ������ ��������� ʲ-19 �"<<endl;
}
void charOperation(char a,char b)
{

    if(a+1>=b)
    {
        cout<<"true"<<endl;
    }
    else
        cout<<"false"<<endl;
}
int main()
{
    double x;
    double y;
    double z;
    setlocale (LC_CTYPE, "ukr");
    char a;
    char b;
    cout<<"������ a"<<endl;
    cin>>a;
    cout<<"������ b"<<endl;
    cin>>b;
    cout<<"������ x"<<endl;
    cin>>x;
    cout<<"������ y"<<endl;
    cin>>y;
    cout<<"������ z"<<endl;
    cin>>z;
    cout<<s_calculation(x,y,z)<<endl;
    cout<<q_calculation(x,y,z)<<endl;
    cout << "x : oct : "<<oct<< int(x) << " | hex : " << hex << int(x) << endl;
    cout << "y : oct : "<<oct<< int(y) << " | hex : " << hex << int(y) << endl;
    cout << "z : oct : "<<oct<< int(z) << " | hex : " << hex << int(z) << endl;
    charOperation(a,b);
}
