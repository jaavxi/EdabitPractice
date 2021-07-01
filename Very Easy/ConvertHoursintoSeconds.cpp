/* Write a function that converts hours into seconds.

Examples
howManySeconds(2) ➞ 7200

howManySeconds(10) ➞ 36000

howManySeconds(24) ➞ 86400
https://edabit.com/challenge/y9Jhs33vdts5GPMW7
 */
#include<iostream>
using namespace std;

int Convert(int hours)
{
    return (hours*60*60);
}

int main()
{         
    int hours;
    cin>>hours;
    cout<<"Seconds are:"<<Convert(hours);             
    return 0;
}