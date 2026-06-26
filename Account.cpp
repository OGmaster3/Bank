// Account.cpp 
#include "Account.h"

Account::Account(const std::string &name, double balance)
    : name(name), balance(balance > 0.0 ? balance : 0.0)
    {
    }

std::string Account::getName() const {
    return name;
}

double Account::getBalance() const{
    return balance;
}

void Account::setBalance(double newBalance){
    if (newBalance >= 0.0){
        balance = newBalance;
    }
}

void Account::deposit(double amount){
    if (amount > 0.0){
        balance += amount;
    }
}

void Account::withdraw(double amount){
    if (amount > 0.0 && amount <= balance){
        balance -= amount;
    }
}