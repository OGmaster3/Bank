// Expense.h 
#ifndef EXPENSE_H
#define EXPENSE_H

#include <string>

// Expense class definition
class Expense {
public:
     Expense(const std::string &description, double amount);
     
    std::string getDescription() const;
    double getAmount() const;

    void setDescription (const std::string &description);
    void setAmount(double amount);
   

private:
    std::string description;
    double amount;
};

#endif // EXPENSE_H
