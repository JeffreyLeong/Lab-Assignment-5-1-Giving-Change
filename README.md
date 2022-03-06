# Lab Assignment 5 1
 CIS-054



Lab Description
Write a program that tells what coins to give out as the change from 1 cent to 99 cents. Use coin denominations of 25 cents (quarters), 10 cents (dimes), and 1 cent (pennies) only. You can add nickels (5 cents) if you'd like, but it is not required. Include a loop that lets the user repeat this computation for new input values until the user says he or she wants to end the program.

And finally, we are going to do some form of data validation! Assume the user will at least enter numbers, the program will check their input and give an appropriate prompt if their number is not what the program is expected.

To get bonus points for this assignment, we will work on making our code tight and tidy! 

    Demo
    Hello I am the coin machine! I will give you the least number of coins for your change. 

    How many cents of change do you need? (Please enter from 1 to 99) 
    -10
    You are welcome to give me money! Otherwise please enter a number from 1 to 99.

    How many cents of change do you need? (Please enter from 1 to 99) 
    0
    We are even!

    How many cents of change do you need? (Please enter from 1 to 99) 
    200
    Sorry I can only give out less than 1 dollar of change.

    How many cents of change do you need? (Please enter from 1 to 99) 
    86

    86 cents can be given as:
    3 Quarters
    1 Dime
    1 Penny

    Want to get change again?
    y

    How many cents of change do you need? (Please enter from 1 to 99) 
    25

    25 cents can be given as:
    1 Quarter

    Want to get change again?
    n

    
Requirements
Your program will behave exactly as the Demo above.
If user input is invalid, prints appropriate message and ask them to enter another number (i.e. they do not need to confirm they want another chance. Do you prefer this UX choice if you were the user?). 
Assume they will always input an integer, appropriate message for different types of invalid inputs will be different (e.g. when input < 0, input ==0, and input > 99).
Exact coins are output. Do not include the coin denomination if 0 of them is needed. For example, do not include something like 0 Dime.
Use correct singular and plural noun forms. For example, 3 Pennies and not 3 Penny.
Implement at least one function with pass-by-reference parameters.
Comments for all functions (including main()) will follow the format as shown in suggested functions compute_coins & output_coins.
Loop until the user decides they want to stop the program.