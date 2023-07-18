// BudgetBuckets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Variables
int incomeArray[1];
int expenceArray[1];
int choice;
int expenseCurrent = 0;
int incomeCurrent = 0;
int incomeTally = 0;
int expenseTally;

void incomeTotal()
{
    for (int incomeTally = 0; incomeCurrent < incomeTally; incomeTally)
    {
        cout << "testing " << endl;
        cout << incomeTally << endl;
    }
}

void expensesTotal()
{

}


void finalResults()
{

}


int main()
{


    cout << "H\t\tWelcome to Budget Buckets\n";
    cout << "lets start with entering your first income amount (weekly)\n";
    cout << "my 1st income's weekly amount is:    ";
    cin >> incomeArray[0];

    i:
    cout << "Press 1 when ready to add income otherwise press 2 to finish entering income";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Please enter an additional income value:    ";
        cin >> incomeArray[incomeCurrent];
        cout << "Additional income added";
        incomeTally++;
        goto i;

    case 2:
        cout << "Preparing to add expenses" << endl;
        //break;
    }
    e:
    cout << "Press 1 when ready to enter expenses otherwise press 2 to go to results" << endl;
    cin >> choice;


    switch (choice)
    {
    case 1:
        cout << "Please enter an Expense:    " << endl;
        cin >> expenceArray[expenseCurrent];
        expenseCurrent++;
        cout << "Additional expense added" << endl;
        goto e;


    case 2:
        cout << "Compiling Results" << endl;
        incomeTally = incomeCurrent;
        expenseTally = expenseCurrent;
        //incomeTotal();
        //expensesTotal();

        break;
    }



    cout << "Total Income is :  ";
    for (size_t i = 0; i < incomeTally; i++)
    {
        cout << "testing " << endl;
        cout << incomeArray[incomeTally] << endl;
    }
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
