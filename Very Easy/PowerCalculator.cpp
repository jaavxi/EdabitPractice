/* Create a function that takes voltage and current and returns the calculated power.

Examples
circuitPower(230, 10) ➞ 2300

circuitPower(110, 3) ➞ 330

circuitPower(480, 20) ➞ 9600
https://edabit.com/challenge/a2D3cva6PKrHyqdXC
 */
#include<iostream>
using namespace std;

int power(int voltage, int current)
{
    return (voltage*current);

}

int main()
{           
    int voltage, current;
    cin>>voltage>>current;
    int result= power(voltage, current);    
    cout<<"Power:"<<result;       
    return 0;
}