#include<iostream>
using namespace std;


int main()
{
    // variables
    char again;
    int number;

    // do-while loop
    do {
        // Intro
        cout << "Hello, I am the coin machine! I will give you the least number of coings for your change.\n\n";
        // Prompt for user input
        cout << "How many cents of change do you need? (Please enter a number from 1 to 99) ";
        cin >> number;
    } while ((again == 'Y') || (again == 'y'));
 return 0;
}