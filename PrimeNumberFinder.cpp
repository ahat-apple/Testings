#include<iostream>
using namespace std;


bool isPrimeNumber(int number){
    for (int i=2;i<number;i++){
        if (number%i==0)
            return false;
}
    return true;
}

int main(){
    int number,counter=0;
    cout<<"This program shows you all the Prime Numbers from 1 upto your entered number and tells you how many prime numbers there are."<<endl;
    cout<<"Please enter your number: ";
    cin>>number;

    for (int i=1;i<=number;i++){
        bool isPrime=isPrimeNumber(i);
        if (isPrime){
        cout<<i<<" is a prime number."<<endl;
        counter++;
        }
    }
    cout<<"There are "<<counter<<" prime numbers between 1 and "<<number;
}