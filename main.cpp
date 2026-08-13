// Main function of the program
#include <iostream>
#include <string>
#include <vector>

#include "Account.h"
#include "Expense.h"
#include "FileManager.h"


using namespace std;



int main(){
    //Account object
    Account account1("Default", 0.0);

    cout << "Account name:" << account1.getName() << endl;

    double initialBalance;
    cout << "Enter initial balance: ";
    cin >> initialBalance;
    account1.setBalance(initialBalance);

    cout << "Account balance: $" << account1.getBalance() << endl;

    // Expense object
    Expense expense1("Groceries", 150.0);
    cout << "Expense descripion: " << expense1.getDescription() << endl;

    double expenseAmount;
    cout << "Enter expense amount: ";
    cin >> expenseAmount;
    expense1.setAmount(expenseAmount);

    cout << "Expense amount: $" << expense1.getAmount() << endl;

    // ExpenseManager object
    ExpenseManager expenseManager;
    expenseManager.addExpense("Groceries", 150.0);
    expenseManager.addExpense("Utilities", 100.0);
    expenseManager.addExpense("Gas", 50.0);

    expenseManager.displayExpenses();
    cout << "Total expenses: $" << expenseManager.getTotalExpenses() << endl;

    // File manager object
    FileManager fileManager;

    // Save date
    fileManager.saveToFile("expenses.txt", "Groceries: 150.0\nUtilities: 100.0\nGas: 50.0");

    // Load data
    string fileContent = fileManager.loadFromFile("expenses.txt");
    cout << "\nFile content:\n" << fileContent << endl;
    
   return 0;
}
