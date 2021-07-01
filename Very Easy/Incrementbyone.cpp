/* Create a function that takes a number as an argument, add one to the number, and return the result.

Examples
addition(0) ➞ 1

addition(9) ➞ 10

addition(-3) ➞ -2  */

#include<iostream>
using namespace std;

int addition(int value)
{
    return ++value;                   //value+1
}

int main()
{
    int value;
    cin>>value;                      
    int result = addition (value);   
    cout<<result;                      
    return 0;
}