#include <iostream>

using namespace std;

/*  Problem
    * Write a C++ program to create a class BankAccount with private data members accountNumber
    and balance. Provide public methods for deposit, withdrawal (only if sufficient balance is
    available), and displaying the balance.
*/

// Bank class

class Bank 
{
    private:
        int account_number;
        double balance;  
    
    

    public:
        Bank()
        {
            int previous_account_number = 10000;    // to be updated in future, should be read from a database/textfile.
            account_number = previous_account_number;
            previous_account_number += 1;
        }

        void setBalance(double bal)
        {
            if (bal >= 0)
            {
                balance = bal;
            }
            else{
                cout << "\nBalance must be greater than 0\n";
            }
        }


        double getBalance()
        {
            return balance;
        }

        int getAccountNumber()
        {
            return account_number;
        }

        void deposit(double amount)
        {
            if (amount > 0)
            {
                balance += amount;
                cout << "\nYou have deposited $" << amount << " to your account " << getAccountNumber() << ". Your new balance is " << getBalance() << ".\n";
            }
            else
            {
                cout << "\nAmount to deposit must be greater than 0\n";
            }
        }

        void withdraw (double amount)
        {
            if (amount > 0)
            {
                if (balance >= amount)
                {                    
                    balance -= amount;
                    cout << "\nYou have withdrawm amount $" << amount << " from you account " << getAccountNumber() << ". Your new balance is " << getBalance() << ".\n";
                }
                else
                {
                    cout << "\nYou have insufficient balance to withdraw $" << amount << ".Your balance is $" << getBalance() << ".\n";
                }
            }
            else
            {
                cout << "\nAmount to withdraw must be grater thn 0\n";
            }
        }

        void displayBalance()
        {
            cout << "\nYou balance on account " << getAccountNumber() << " is $" << getBalance() << ".\n";
        }
};

int main()
{

    Bank account_one;

    cout <<"Account Number: "<< account_one.getAccountNumber() << endl;
    account_one.deposit(67.89);
    account_one.withdraw(56.67);
    account_one.withdraw(78.54);
    account_one.displayBalance();
    account_one.deposit(45.67);

    Bank account_two;

    cout <<"Account Number: "<< account_two.getAccountNumber() << endl;
    account_two.deposit(67.89);
    account_two.withdraw(56.67);
    account_two.withdraw(78.54);
    account_two.displayBalance();
    account_two.deposit(45.67);

    Bank account_three;

    cout <<"Account Number: "<< account_three.getAccountNumber() << endl;
    account_three.deposit(67.89);
    account_three.withdraw(56.67);
    account_three.withdraw(78.54);
    account_three.displayBalance();
    account_three.deposit(45.67);

    Bank account_four;

    cout <<"Account Number: "<< account_four.getAccountNumber() << endl;
    account_four.deposit(67.89);
    account_four.withdraw(56.67);
    account_four.withdraw(78.54);
    account_four.displayBalance();
    account_four.deposit(45.67);

    return 0;
}