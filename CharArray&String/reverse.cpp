// // reverse the string 
// #include<iostream>
// #include<cstring>
// using namespace std;

// void reverseString(char ch[], int n )
// {
//     int i =0;
//     int j = n-1;
//     while(i<j)
//     {
//         swap(ch[i], ch[j]);
//         i++;
//         j--;
//     }

// }

// int main()
// {
 
//     char ch[100];
// cout<<"Enter the string: "<<endl;
//     cin.getline(ch,100);

//     cout<<"Before reversing the string: "<<ch<<endl;

//     reverseString(ch, strlen(ch));
//     cout<<"After reversing the string: "<<ch<<endl;

//     return 0;
// }





// Convert the all character in the upper case
#include<iostream>
#include<cstring>
using namespace std;

void convertToUpperCase(char ch[], int n)
{
    int index = 0;
    while(ch[index] != '\0')
    {
        if(ch[index] >= 'a' && ch[index] <= 'z')
        {
            ch[index] = ch[index] - 'a' + 'A';
        }
        index++;
    }
}

int main()
{
    char ch[100];
    cout<<"Enter the string: "<<endl;
    cin.getline(ch,100);

    cout<<"Before converting the string to upper case: "<<ch<<endl;

    convertToUpperCase(ch, strlen(ch));
    cout<<"After converting the string to upper case: "<<ch<<endl;

    return 0;
}