#include <iostream>
using namespace std;

int main()
{
    float weigth, height, bmi;
    cout<<"Please enter your weight in kg:";
    cin>>weigth;
    cout<<"Please enter your height in Meters:";
    cin>>height;
    bmi=weigth/(height*height);

    if (bmi<18.5)
    {cout<<"You are underweight."<<endl;}
    else if (bmi>25)
    {cout<<"You are overweight."<<endl;}
    else
    {cout<<"You are normal weighted"<<endl;}

    cout<<"BMI = "<<bmi;

}