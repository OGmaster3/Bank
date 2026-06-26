#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
public:
    Account(const std::string &name, double balance);

    std::string getName() const;
    double getBalance() const;

    void setBalance(double newBalance);
    void deposit(double amount);
    void withdraw(double amount);

private:
    std::string name;
    double balance;
};

#endif // ACCOUNT_H