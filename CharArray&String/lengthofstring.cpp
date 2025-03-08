// # find the length of string
#include<iostream>
#include<cstring>
using namespace std;

int findLength(char ch[], int size)
{
    int length = 0;

    for ( int i = 0; i<size; i++){
        if (ch[i] == '\0')
        {
            break;
        }
        else{
            length++;
        }

        
    }
    return length;
}

int main()
{
    char ch[100] = {0};
    cout<<"Enter the string "<<endl;
    cin.getline(ch,100); // space is also count 
    

   int len = findLength(ch,100);

   cout<<"Length of string is :"<<len<<endl;
   // also find the length of string using inbuild function
   cout<<"Length of string using inbuild function :"<<strlen(ch)<<endl;
    return 0;
}