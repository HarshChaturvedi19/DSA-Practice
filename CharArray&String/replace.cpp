// given string containing @ then replace it with space

#include<iostream>
#include<string>
using namespace std;

void replaceCharacter(char ch[], int n)
{
    int index = 0;
    while(ch[index] != '\0')
    {
         if(ch[index] == '@')
         {
             ch[index] = ' ';
         }
            index++;
    }
}
my@ nam
int main()
{
    char ch[100];
    cout<<"Enter the string: ";
    cin.getline(ch, 100);
    cout<<"Before replacing @ with space: "<<ch<<endl;
    replaceCharacter(ch, 100);
    cout<<"After replacing @ with space: "<<ch;
    return 0;
}