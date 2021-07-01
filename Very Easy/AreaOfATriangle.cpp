/* Write a function that takes the base and height of a triangle and return its area.

Examples
triArea(3, 2) ➞ 3

triArea(7, 4) ➞ 14

triArea(10, 10) ➞ 50 

Question Link: https://edabit.com/challenge/HvYiBXgfPtnDHitym
*/

#include<iostream>
using namespace std;

int TriArea(int base, int height)
{
    return (base*height)/2;
}

int main()
{           
    int base, height;
    cin>>base>>height;
    int result = TriArea(base, height);
    cout<<"Area of Triangle: "<<result;           
    return 0;
}