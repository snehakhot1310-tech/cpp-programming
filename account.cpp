#include <iostream>
using namespace std;

// Saving Account Class
class SavingAccount
{
private:
    int accountNumber;
    double balance;
    double interestRate;

public:

    // Constructor
    SavingAccount(int accNo, double amount, double rate)
    {
        accountNumber = accNo;
        balance = amount;
        interestRate = rate;
    }

    void deposit(double amount)
    {
        if(amount > 0)
        {
            balance = balance + amount;
            cout << "Deposited: " << amount << endl;
        }
    }

    void withdraw(double amount)
    {
        if(amount > 0 && amount <= balance)
        {
            balance = balance - amount;
            cout << "Withdrawn: " << amount << endl;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }

    void applyInterest()
    {
        double interest = balance * interestRate / 100;
        balance = balance + interest;

        cout << "Interest Applied: " << interest << endl;
    }

    void display()
    {
        cout << "\n[Savings Account]" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};


// Checking Account Class
class CheckingAccount
{
private:
    int accountNumber;
    double balance;
    double transactionFee;

public:

    // Constructor
    CheckingAccount(int accNo, double amount, double fee)
    {
        accountNumber = accNo;
        balance = amount;
        transactionFee = fee;
    }

    void deposit(double amount)
    {
        if(amount > 0)
        {
            balance = balance + amount;
            cout << "Deposited: " << amount << endl;
        }
    }

    void withdraw(double amount)
    {
        if(amount > 0 && amount + transactionFee <= balance)
        {
            balance = balance - amount - transactionFee;

            cout << "Withdrawn: " << amount << endl;
            cout << "Transaction Fee: " << transactionFee << endl;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }

    void display()
    {
        cout << "\n[Checking Account]" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Transaction Fee: " << transactionFee << endl;
    }
};


// Main Function
int main()
{
    int accNo;
    double balance, rate, fee;
    double amount;

    // Saving Account Input
    cout << "Enter Saving Account Number: ";
    cin >> accNo;

    cout << "Enter Initial Balance: ";
    cin >> balance;

    cout << "Enter Interest Rate: ";
    cin >> rate;

    SavingAccount savings(accNo, balance, rate);

    savings.display();

    cout << "\nEnter Deposit Amount: ";
    cin >> amount;
    savings.deposit(amount);

    cout << "Enter Withdrawal Amount: ";
    cin >> amount;
    savings.withdraw(amount);

    savings.applyInterest();
    savings.display();


    // Checking Account Input
    cout << "\nEnter Checking Account Number: ";
    cin >> accNo;

    cout << "Enter Initial Balance: ";
    cin >> balance;

    cout << "Enter Transaction Fee: ";
    cin >> fee;

    CheckingAccount checking(accNo, balance, fee);

    checking.display();

    cout << "\nEnter Deposit Amount: ";
    cin >> amount;
    checking.deposit(amount);

    cout << "Enter Withdrawal Amount: ";
    cin >> amount;
    checking.withdraw(amount);

    checking.display();

    return 0;
}