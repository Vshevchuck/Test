#include <iostream>
#include <math.h>
#include "q_calculation.h"
using namespace std;

int main()
{
    setlocale (LC_CTYPE, "ukr");
    float S=0;
    float x=0;
    float z=0;
    float y=0;
    cout<<"������ x"<<endl;
    cin>>x;
    cout<<"������ y"<<endl;
    cin>>y;
    cout<<"������ z"<<endl;
    cin>>z;
    S=z+3,14*(pow(2*z+1, 2)-sqrt(abs(y-z/2))/sqrt(cos(z+y*z)+pow(x,2)));
    cout<<"S- "<<S;
}
