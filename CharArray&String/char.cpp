# include<iostream>
using namespace std;
int main()
{
    // creatiion of char array 
    char arr[20] = {0};
// taking input of char Haarray 
// cout<<"Enter the char array"<<endl;
// cin>>arr;

// printing the char array
// get line -> 
cin.getline(arr, 20);
cout<<"Printing the char array"<<endl;
cout<<arr<<endl;


// printing each caracter of char array
// for ( int i =0; i<10; i++)
// {
//     cout<<"At indes ;-> "<<i<<" "<<arr[i]<<endl;
// }


    return 0;
}

// this program does not print if there is space in the given input
// to print the space we have to use getline() function
