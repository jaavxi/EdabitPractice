/* Problem statement : Create a function that takes two numbers as arguments and return their sum.
Examples
addition(3, 2) ➞ 5

addition(-3, -6) ➞ -9

addition(7, 3) ➞ 10

Probelm Link : https://edabit.com/challenge/SFzHtm63XT6EYNHWY */

#include<iostream>
using namespace std;

int addition(int a, int b)
{
    return (a+b);                   //return the value of a+b
}

int main()
{
    int a,b;
    cin>>a>>b;                      //getting the value of a and b from the user
    int sum = addition (a,b);       //setting sum as the value returned by the function
    cout<<sum;                      //printing the addition of the inputed values
    return 0;
}