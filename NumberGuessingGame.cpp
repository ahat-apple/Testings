#include<iostream>
using namespace std;

int main(){

    int hostNumber, guessNumber;
    cout<<"Please enter the number to be guessed: ";
    cin>>hostNumber;
    system("cls");
    cout<<"Enter your guess number: ";
    cin>>guessNumber;

    (hostNumber==guessNumber)? cout<<"Correct!":cout<<"Failed!";
}