#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

class Bank {
    public:

    string name;
    long long accountNumber;
    char type[10];
    long long amount = 0;
    long long total = 0;

    void setValue()
    {
        cout<<"Enter name:\n";
        cin.ignore();
        getline(cin, name);

        cout<< "Enter Account number:\n";
        cin>> accountNumber;

        cout<<"Enter Account type:\n";
        cin>>type;

        cout<<"Enter Balance:\n";
        cin>>total;
    }

    void showdata()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Account Type: "<<type<<endl;
        cout<<"Balance: "<<total<<endl;
    }

    void deposit()
    {
        cout<<"\nEnter the amount to be Deposited\n";
        cin>>amount;
    }

    void showbalance()
    {
        total = total + amount;
        cout<<"\nTotal Balance: "<<total;
    }

    void withdrawl()
    {
        int withdrawAmount, availableBalance;
        cout<<"Enter the amount to withdraw\n";
        cin>>withdrawAmount;
        availableBalance = total - withdrawAmount;
        cout<<"Available Balance: "<<availableBalance;
    }
};

int main()
{
    Bank bank;
    int choice;
    while(1)
    {
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~"<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< "~~~WELCOME~~~~~~~~~~~~~~~~~~"<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< "~~~~~~~~~\n\n";
        cout<<"Enter your choice\n";
        cout<<"\t1. Enter Name, Account Number, Account Type\n";
        cout<<"\t2. Balance Enquiry\n";
        cout<<"\t3. Deposit Money\n";
        cout<<"\t4. Show Total Balance\n";
        cout<<"\t5. Withdraw Money\n";
        cout<<"\t6. Cancel\n";

        cin>>choice;

        switch (choice)
        {
        case 1:
            bank.setValue();
            break;
        
        case 2:
            bank.showdata();
            break;

        case 3:
            bank.deposit();
            break;

        case 4:
            bank.showbalance();
            break;

        case 5:
            bank.withdrawl();
            break;

        case 6:
            exit(1);
            break;

        default:
            cout<<"\nInvalid Choice\n";
            break;
        }
    }
}