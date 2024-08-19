#include <iostream>
using namespace std;


class BankAccount {
    double balance;
    const string accountNumber;
public:
    BankAccount(const string accountNumber, double balance): accountNumber(accountNumber) {
        this->balance = balance;
    }
    string getAccountNumber() {
        return accountNumber;
    }
    void deposite (double amount) {
        balance += amount;
    }
    void withdraw(double amount) {
        if(amount > balance) {
            cout << "Insufficient balance" << endl;
            return;
        }
        balance -= amount;
    }
};
class Person {
    int age;
    string name;
    BankAccount account;

public:
    static int counter;


    Person(int age, string name, BankAccount account): account(account) {
        this->age = age;
        this->name = name;
        counter++;
    }
    Person(int age, string name): account(account) {
        this->age = age;
        this->name = name;
        counter++;
    }

    void display() {
        cout << "Name: " << name << " Age: " << age << endl;
    }
};

int Person::counter = 0;

int main() {
    const string accountNumber;
    BankAccount account("1234", 1000);
    Person p1(20, "Ali", account);
    cout << account.getAccountNumber() << endl;
    return 0;
}


// Output: 1234
