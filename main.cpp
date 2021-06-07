#include <iostream>

using namespace std;
class bank{
    int pin;
    int balance = 0;
    int amount;

public:
    void enquiry()
    {
        cout<<"\nCurrent account balance is: "<<balance;
    }
    void withdrarw()
    {
        cout<<"\nPlease enter amount to withdraw: ";
        cin>>amount;
        if(amount<balance)
        {
            balance -= amount;
            cout<<"\nPlease collect cash";
            cout<<"\nYour available balance: \n"<<balance;
        }
        else{ cout<<"\nYou don't have sufficient balance to withdraw";}
    }
    void deposit()
    {
        cout <<"\nPlease enter amount to deposit: \n";
        cin>>amount;
        balance+=amount;
        cout<<"\nThankyou for depositing,your new balance is: \n"<< balance;
    }
    void exit()
    {
        cout<<"\nThank you for banking with us\n";
    }

};

int main()
{
    bank obj;
    int choice,x,pin;
    cout<<"\n*********** WELCOME TO YOUR BANK *************";
    cout <<"\nPlease enter your pin: ";
    cin>>pin;
    do
    {
        cout<<"\n1.Balance Enquiry \n2.Withdraw \n3.Deposit \n4.Exit\n";
        cout<<"\nPlease enter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            obj.enquiry();
            break;
        case 2:
            obj.withdrarw();
            break;
        case 3:
            obj.deposit();
            break;
        case 4:
            obj.exit();
            exit(1);
            break;
        default:
            cout<<"\nPlease enter a valid choice";
        }
        cout<<"\nDo you want to perform another transaction?";
        cout<<"\nPress 1 to proceed and any other key to exit: ";
        cin>>x;

    }
    while(x==1);
}
