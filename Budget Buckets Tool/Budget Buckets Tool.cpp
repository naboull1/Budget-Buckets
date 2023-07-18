// BudgetBuckets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Variables
int incomeArray[1];
int expenceArray[1];
int choice;

void incomeTotal()
{

}

void expensesTotal()
{

}


int main()
{


    cout << "H\t\tWelcome to Budget Buckets\n";
    cout << "lets start with entering your first income amount (weekly)\n";
    cout << "my 1st income's weekly amount is:    ";
    cin >> incomeArray[0];


    cout << "If you have additonal income to add press 1 otherwise press any other key to finish entering income";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Please enter an additional income value:    ";
        cin >> incomeArray[1];
        cout << "Additional income added";
        break;
    }
    else
        cout << "test";
        break;

        cout << "finished";
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
