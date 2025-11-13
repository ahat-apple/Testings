#include<iostream>
using namespace std;

void showMenu(){
    cout<<"Welcome to ATM."<<endl;
    cout<<"**********MENU**********"<<endl;
    cout<<"1. Check Balance"<<endl;
    cout<<"2. Deposit Amount"<<endl;
    cout<<"3. Withdraw Amount"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"*************************"<<endl;
}

int main(){

    int option;
    double balance=0,depositAmount,withdrawAmount;
    
    do{
    showMenu();

    
    cout<<"Please select any option from the menu:";
    cin>>option;
    system("cls");

    switch(option){
        case 1:cout<<"Your available balance is: "<<balance<<endl;
                break;
        case 2:cout<<"Please enter your deposit amount: ";
                cin>>depositAmount;
                balance+=depositAmount;
                cout<<"Your available balance is: "<<balance<<endl;
                break;
        case 3:cout<<"Please enter the amount you want to withdraw: ";
                cin>>withdrawAmount;

                if(withdrawAmount<=balance){
                balance-=withdrawAmount;
                    cout<<"Withdraw successful"<<endl;
                    cout<<"Your available balance is: "<<balance<<endl;
    }
                    else{
                    cout<<"Insufficient balance!"<<endl;
                    break;
                    }
                
    }
                    
}while(option!=4);

}
