// Write a Program to make a full pyramid using stars.
#include<iostream>
using namespace std;
int main ()
{
    int n ; 
    cout << "Enter the number of rows to make a pyramid: "<<endl;
    cin >> n;

   //traverse through full loop  
   for( int row = 0; row < n; row++)
   {
         for ( int col = 0; col<n-row-1; col++)
         // here this loop is for printing the space in front of stars.
         {
             cout<<" ";
         }

         for ( int col = 0; col<row+1; col++)
         {
            cout<<"* ";
         }
         cout<<endl;
   }
   return 0;
}