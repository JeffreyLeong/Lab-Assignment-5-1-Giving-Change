/*==============================================================================================================
Class:          CIS 054
Assignment:     Lab Assignment 5-1
Name:           Jeffrey Leong
Date:           March 6, 2022

Purpose:        Use Functions to display outputs. Practice writing good comments
Input:          a number between 1 to 99
Output:         coin denominations
===============================================================================================================*/


#include <iostream>
using namespace std;

// ==========================================================================================================
// Function: compute_coins
// Purpose: calculate num (the number of coins of coin_value 
// cents) from amount_left, update amount_left, and print 
// out how many and which coin denomination the decreased 
// amount is changed to.
// Assumptions:
//  (1) coin_value is either 1, 10, or 25
// Parameters:	
//  (1) coin_value - coin denomiation value 
//  (2) num - maximum number of coins of denomination coin_value cents that can be obtained from amount_left
//  (3) amount_left - how many cents are left to be changed
// Calls:
//  output_coins
// ===========================================================================================================
void compute_coins(int coin_value, int& num, int& amount_left);

// ===========================================================================================================
// Function: output_coins
// Purpose: print out num followed by appropriate noun form 
// of pennies, dimes, or quarters 
// Assumptions:
// (1) coin_value is either 1, 10, or 25
// Parameters: 
// (1) coin_value - coin denomiation value 
// (2) num - number of coin_value coins
// ===========================================================================================================
void output_coins(int coin_value, int num);

// ===========================================================================================================
// Function: main
// Purpose: call both functions to display results  
// Assumptions:
// (1) user is going to select input between 1 and 99.
// Parameters:
// ===========================================================================================================
int main(){

char again;

do {
  int quarters, dimes, pennies, cents;
  
  cout << "Hello I am the coin machine! I will give you the least number of coins for your change." << endl<< endl;
  cout << "How many cents of change do you need? (Please enter from 1 to 99)" << endl;
  cin >> cents;

  while (true){
    if(cents<1)
      cout << "We are even!" << endl;  
    else if (cents >99)
      cout << "You are welcome to give me money! Otherwise please enter a number from 1 to 99." << endl;
    else
      break;
  }

  cout << endl;
  cout << cents << " cents can be given as:" << endl;;
  compute_coins(25, quarters, cents);
  compute_coins(10, dimes, cents);
  compute_coins(1, pennies, cents);

  output_coins(25, quarters);
  output_coins(10, dimes);
  output_coins(1, pennies);

  cout << endl;
  cout << "Want to get change again?" << endl;
  cin >> again;
  }while ((again == 'Y') || (again == 'y'));
  return 0;
  } 


void compute_coins(int coin_value, int& num, int& amount_left){
  num = amount_left / coin_value;
  amount_left = amount_left-(num*coin_value);
}
void output_coins(int coin_value, int num){
  if(coin_value == 25 || coin_value == 10 || coin_value == 1)
  {
    if(coin_value == 25)
    {
      if(num == 1)
        cout << num << " Quarter" << endl;
      else if(num >1)
        cout << num << " Quarters" << endl;
    }
    else if(coin_value == 10)
    {
      if(num ==1)
        cout << num << " Dime" << endl;
      else if(num > 1)
        cout<< num << " Dimes" << endl;
    }
    else if(coin_value == 1)
    {
      if(num ==1)
        cout << num << " Penny" << endl;
      else if(num>1)
        cout << num << " Pennies" << endl;
    }
  }
}




/* ===========================================================================================================
Problems I had working on this assignment (and how I overcame these problems)
1. Getting the compute_coins formula correct. Instead of using coin_value, I was using putting in the numbers 
like 25, 10, 1. I wasn't getting the results I wanted to get.
2.
Other Things I wish to share
1. My validation is still not there yet. It works but it loops continously.I ran out of time on trying to figure out 
how to end the never-ending loop.
2. Interesting problem. The output part fuction with the denominations was challenging.
============================================================================================================== */