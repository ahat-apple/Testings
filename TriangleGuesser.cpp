#include <iostream>
using namespace std;

int main(){

float a,b,c;
cout<<"Please enter the sides of the your triangle "<<"A B C:";
cin>>a>>b>>c;
if (a==b&&b==c)
    cout<<"Equilateral Triangle";

    else
    {
        if (a!=b && a!=c&&b!=c)
        {
        cout<<"Scalene Triangle";
        }
    else
    cout<<"Isoceles Triangle";
    }
}