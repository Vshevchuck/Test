#include <iostream>
#include <cmath>
#include <string>
using namespace std;
double q_calculation(double x,double y,double z)
{
    return log1p(abs(x - z)) + sqrt(3.14 * pow(x, 3) / sqrt(2 * x + 2 * pow(y, (abs(z - 2)))));
}
double s_calculation(double x,double y,double z)
{
    return z+3,14*(pow(2*z+1, 2)-sqrt(abs(y-z/2))/sqrt(cos(z+y*z)+pow(x,2)));
}
