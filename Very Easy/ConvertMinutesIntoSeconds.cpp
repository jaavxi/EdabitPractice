/* Write a function that takes an integer minutes and converts it to seconds.

Examples
convert(5) ➞ 300

convert(3) ➞ 180

convert(2) ➞ 120 

Question Link: https://edabit.com/challenge/MtNAJmJZ49i5Xf3AW

*/

#include<iostream>
using namespace std;

int Convert(int minutes)
{
    int seconds;
    seconds=60*minutes;
    return seconds;                   
}

int main()
{
    int minutes;
    cin>>minutes;                      
    int result = Convert(minutes);     
    cout<<result;                      
    return 0;
}