// Finance Tracker
// Design a tool to help users manage their personal finances by tracking income,
// expenses, and calculating their current balance. The app should include options to
// add transactions, view summaries, and possibly categorise spending.


//declare variables(expences,currentBalance,deposit,withdraw,summmary)


#include <iostream>
#include <string>
using namespace std;
//---------------------------Global variables--------------------------------------------


double currentBalance = 0.0;// Stores the user's current balance

double monthlyIncome = 0.0;// Stores the user's monthly income

const int MaxTransactions = 100;//max number of transactions app can store

//arrays for transactions
string transCategory[MaxTransactions];// Category of each transaction
string transType[MaxTransactions];// "deposit" or "withdraw"
double transAmount[MaxTransactions];// Amount of each transaction

int transactionCount = 0;//Transaction count to be recorded

//------------------------------------------------------------------------

//welcome message
void welcomeMessage()
{
    cout << "|---------------------| \n";
    cout << "|Welcome to my program| \n";
    cout << "|---------------------| \n";
    cout << "\nTo begin managing your balance please enter your average monthly income (in pounds):\n£ ";
}

//display menu funciton(without logic so far)
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

// gettin input
void userInsertIncome()
{
    cin >> monthlyIncome;
    
    //validation if its a positive number
    while (monthlyIncome <= 0) 
    {
        cout << "Please enter a valid income amount (greater than 0): £ ";
        cin >> monthlyIncome;
    }
    // setting current ballance same as income
    currentBalance = monthlyIncome;
    cout << "\nYour initial balance has been set to: £" << currentBalance << endl;
}

void deposit()
{
   //making able to deposit money to the ballance and save transaction
   cout << "\n === DEPOSIT ===" << endl;
   cout << "Enter deposit amoutn (£): ";
   double amount;
   cin >> amount;


   //validation check if amount is more then 0
   if (amount <= 0)
   {
      cout << "Invalid amount.Please enter a positive value" << endl;
      return;//stop deposit if wrong value
   } 

   cout << "Enter category (e.g, Salary, Bonus, Gift): ";
   
   //clean input buffer before using getline
   cin.ignore();
   string category;
   getline(cin, category);

    //checking if we still have space for new transaction
    if (transactionCount >= MaxTransactions) 
    {
        cout << "Transaction limit reached! Cannot add more transactions." << endl;
        return;
    }
    //add money to current ballance
    currentBalance += amount;

    //save info about this deposit in arrays
    transCategory[transactionCount] = "Deposit - " + category;
    transType[transactionCount] = "deposit";
    transAmount[transactionCount] = amount;
    transactionCount++;

    cout << "Deposit of £" << amount << " added successfully!" << endl;
    cout << "New balance: £" << currentBalance << endl;
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

//-----------------------------------------------------------------------------
int main()
{
    welcomeMessage();
    userInsertIncome();
    
    int choice = 0; //user menu choice

    //main loop to keep program running until user choose exit
    do
    {
        viewMenu();      //show menu
        cin >> choice;   //get user option
        
        switch (choice)
        {
            case 1:
                deposit(); //call deposit function
                break;

            case 2:
                //here later will be withdraw function
                cout << "Withdraw feature not added yet." << endl;
                break;

            case 3:
                //here later will be view balance function
                cout << "View balance feature not added yet." << endl;
                break;

            case 4:
                //here later will be transaction summary
                cout << "Transaction summary not added yet." << endl;
                break;

            case 5:
                //here later will be spending by category
                cout << "Spending by category not added yet." << endl;
                break;

            case 6:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid option. Please choose 1-6." << endl;
                break;
        }

    } while (choice != 6); //repeat until user chooses exit
   
   return 0;
}