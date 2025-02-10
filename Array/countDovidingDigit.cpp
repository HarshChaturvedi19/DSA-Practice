// write a program that takes an array of integers and returns the count of the number of integers that are divisible by their own digits.

#include<iostream>
using namespace std;

int countDividingDigit(int n)
{
    int count =0;
    int temp =n;
    while(temp>0)
    {
        int digit = temp%10; // get the last digit of the number
        if(digit!=0 && n%digit == 0){
            count++;
        }
        temp/=10; // remove the last digit from the number

    }
    return count;
}

int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"Number of Dividing Digits: "<<countDividingDigit(n)<<endl;
    return 0;
}