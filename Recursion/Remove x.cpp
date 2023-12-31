/*
Given a string, compute recursively a new string where all 'x' chars have been removed.

Input format :
String S
Output format :
Modified String

Constraints :
1 <= |S| <= 10^3
where |S| represents the length of string S. 

Sample Input 1 :
xaxb
Sample Output 1:
ab

Sample Input 2 :
abc
Sample Output 2:
abc

Sample Input 3 :
xx
Sample Output 3:
*/
#include <iostream>
using namespace std;

// Change in the given string itself. So no need to return or print anything

void removeX(char input[]) 
{
    if(input[0]=='\0')
    {
        return;
    }
    if(input[0]!='x')
    {
        removeX(input+1);
    }
    else
    {
        int len=0;
        while(input[len]!='\0')
        {
            len++;
        }
        int i=0;
        while(i<len)
        {
            input[i]=input[i+1];
            i++;
        }
        removeX(input);
    }
}
int main() 
{
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}
