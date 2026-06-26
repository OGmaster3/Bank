#include "Expense.h"

Expense::Expense(const std::string &description, double amount)
        : description(description), amount(amount > 0.0 ? amount : 0.0)
{
}

std::string Expense::getDescription() const{
    return description;
}

double Expense::getAmount() const{
    return amount;
}

void Expense::setDescription(const std::string &descripion){
    this->description = descripion;
}

void Expense::setAmount(double amount){
    if(amount > 0.0){
      this->amount = amount;
    }
}