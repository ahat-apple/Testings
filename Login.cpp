#include<iostream>
using namespace std;

int main(){
    int firstPin, loginPin, errorCounter=0;
    
    
    cout<<"Please create a new Pin:";
        cin>>firstPin;
        system("cls");

    do{
        cout<<"Please enter your Pin:";
        cin>>loginPin;

        if (loginPin!=firstPin)
            errorCounter++;
            system("cls");
            
    }while (errorCounter<3&&loginPin!=firstPin);

    if (errorCounter<3)
        cout<<"Login Authorised";
    
        else cout<<"You have been blocked!";

}