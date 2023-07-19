// BudgetBuckets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//Variables

int incomeArray[10];
int expenceArray[20];
int choice;
int expenseCurrent = 0;
int incomeCurrent = 0;
int incomeTally = 0;
int expenseTally = 0;
int incomeArraySize = sizeof(incomeArray) / sizeof(incomeArray[0]);
int totalIncome;
int totalExpenses;
int finalResultDifference;

void incomeTotal()
{
    for (int i = 0; i < incomeTally; i++)
    {
        totalIncome += incomeArray[i];
    }
}


void expensesTotal()
{
    for (int i = 0; i < expenseTally; i++)
    {
        totalExpenses += expenceArray[i];
    }
}


void finalResults()
{
    finalResultDifference = totalIncome - totalExpenses;
}


int main()
{
    cout << "\t\tWelcome to Budget Buckets\n";
    cout << "lets start with entering your income amount (weekly)\n";

    i:
    cout << "Press 1 when ready to add income otherwise press 2 to finish entering income";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Please enter an additional income value:    " << endl;
        cin >> incomeArray[incomeTally];
        cout << "Additional income added" << endl;
        incomeTally++;
        cout << "income tally is now  " << incomeTally << endl;
        goto i;

    case 2:
        cout << "Preparing to add expenses" << endl;
    }
    e:
    cout << "Press 1 when ready to enter expenses otherwise press 2 to go to results" << endl;
    cin >> choice;


    switch (choice)
    {
    case 1:
        cout << "Please enter an Expense:    " << endl;
        cin >> expenceArray[expenseTally];
        expenseTally++;
        cout << "Additional expense added" << endl;
        goto e;


    case 2:
        cout << "Compiling Results" << endl;
        break;
    }



    incomeTotal();
    expensesTotal();
    finalResults();
    cout << "Your total income is " << totalIncome << endl;
    cout << "Your total Expenses are " << totalExpenses << endl;
    cout << "Your total Spare is " << finalResultDifference << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
