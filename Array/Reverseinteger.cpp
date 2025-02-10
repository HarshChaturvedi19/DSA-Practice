// Description: Reverse digits of an integer.

#include<iostream>
#include<limits.h>
using namespace std;

int reverseInteger(int x)
{
    int reversedNum = 0;

    while(x!=0)
    {
        int digit = x%10;

        if(reversedNum > INT_MAX /10 || (reversedNum == INT_MAX /10 && digit > 7))
        {
            return 0; // Overflow condition
        }
        if(reversedNum < INT_MIN /10 || (reversedNum == INT_MIN /10 && digit < -8))
        {
            return 0; // Underflow condition
        }

        reversedNum = reversedNum *10 + digit ;
        x /= 10;
    }

    return reversedNum;
}

int main()
{
int x ;
cout<<"Enter an Integer"<<endl;
cin>>x;

int result = reverseInteger(x);

cout<<"Reversed Integer: "<<result<<endl;
return 0;
}