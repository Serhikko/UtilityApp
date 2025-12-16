// Finance Tracker
// Design a tool to help users manage their personal finances by tracking income,
// expenses, and calculating their current balance. The app should include options to
// add transactions, view summaries, and possibly categorise spending.


//declare variables(expences,currentBalance,deposit,withdraw,summmary)


#include <iostream>
#include <string>
using namespace std;


// Global variables
double currentBalance = 0.0;
double monthlyIncome = 0.0;


//welcome message
void welcomeMessage()
{
    cout << "|---------------------| \n";
    cout << "|Welcome to my program| \n";
    cout << "|---------------------| \n";
    cout << "\nTo begin managing your balance please enter your average monthly income (in pounds):\n£ ";
}

//display menu funciton
void viewMenu()
{
    cout << "\n=== MAIN MENU ===" << endl;
    cout << "1. Deposit" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. View Balance" << endl;
    cout << "4. View Transaction Summary" << endl;
    cout << "5. View Spending by Category" << endl;
    cout << "6. Exit" << endl;
    cout << "================" << endl;
    cout << "Select an option (1-6): ";
}


void userInsertIncome()
{
    cin >> monthlyIncome;
    
    // gettin input
    while (monthlyIncome <= 0) 
    {
        cout << "Please enter a valid income amount (greater than 0): £ ";
        cin >> monthlyIncome;
    }
    
    currentBalance = monthlyIncome;
    cout << "\nYour initial balance has been set to: £" << currentBalance << endl;
}

void deposit()
{
   //making able to deposit money to the ballance
   cout << "\n === DEPOSIT ===" << endl;
   cout << "Enter deposit amoutn (£): ";
   double amount;
   cin >> amount;


   //validation
   if (amount <= 0)
   {
      count << "Invalid amount.Please enter a positive value" << endl;
      return;
   } 

   cout << "Enter category (e.g, Salary, Bonus, Gift): "
   cin.ignore();
   string categort

}

// void balanceCalculation()
// {
//    //if user had any expences already proceeed to calculation
// }

// void spendingCategiries()
// {
//    //set number of spending categiries to refer to them in future eg.house,food,vehicles and transport,entertainment.
// }

// void warningMessage()
// {
//    //if spending in some category is higher then some % cout you need to cut the budget in some area
// }


int main()
{
   welcomeMessage();
   userInsertIncome();
    
 

}