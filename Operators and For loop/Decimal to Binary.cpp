/*
Given a decimal number (integer N), convert it into binary and print.

Note: The given input number could be large, so the corresponding binary number can exceed the integer range. 
So you may want to take the answer as long for CPP and Java.
Note for C++ coders: Do not use the inbuilt implementation of "pow" function. 
The implementation of that function is done for 'double's and it may fail when used for 'int's, 'long's, or 'long long's. 
Implement your own "pow" function to work for non-float data types.

Detailed explanation ( Input/output format, Notes, Images )
Input format :
Integer N
Output format :
Corresponding Binary number (long)

Constraints :
0 <= N <= 10^5

Sample Input 1 :
12
Sample Output 1 :
1100

Sample Input 2 :
7
Sample Output 2 :
111
*/
#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin>>n;
	long long int ans=0;
	for(long int i=1;n>=1;i*=10)
	{
		long int rem=n%2;
		ans=ans+(rem*i);
		n=n/2;
	}cout<<ans;
}
