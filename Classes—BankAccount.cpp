#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string owner;
    double balance;

public:
    BankAccount(string name, double amount) {
        owner = name;
        balance = amount;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful." << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful." << endl;
        } else {
            cout << "Insufficient balance or invalid amount." << endl;
        }
    }

    void print() {
        cout << "\nAccount Owner: " << owner << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account1("Ali", 1000);
    BankAccount account2("John", 2000);

    account1.print();
    account1.deposit(500);
    account1.withdraw(200);
    account1.print();

    account2.print();
    account2.deposit(1000);
    account2.withdraw(500);
    account2.print();

    return 0;
}
