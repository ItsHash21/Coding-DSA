/*
You have been given two binary strings ‘A’ and ‘B’. Your task is to find the sum of both strings in the form of a binary string.
Binary strings are the representation of integers in the binary form. For example, the binary strings of 9 and 16 are “1001” and “10000” respectively.
Input Format:
The first line contains a single integer ‘T’ representing the number of test cases. 

The second line contains two space-separated integers ‘N’ and ‘M’ which are the length of strings ‘A’ and ‘B’ respectively. 

The third line of each test case will contain two space-separated binary strings ‘A’ and ‘B’ as described above.
Output Format:
For each test case, print the sum of the given binary strings in a binary form.

Output for every test case will be printed in a separate line.


Constraints:
1 <= T <= 5
1 <= N, M <= 5000

‘A’ and ‘B’ consist only of '0' or '1' characters.

Each string does not contain leading zeros except for the zero itself.

Time limit: 1 sec


Sample Input 1:
2
2 2
10 01
3 2
111 10
Sample Output 1:
11
1001
Explanation of sample input 1:
In the first test case, the first string is “10” which is 2 in the decimal format, and the second string is “01” which is 1 in the decimal format. 
So, 2 + 1 = 3, which is represented as “11” in binary form.

In the first test case, the first string is “111” which is 7 in the decimal format, and the second string is “10” which is 2 in the decimal format. 
So, 7 + 2 = 9, which is represented as “1001” in binary form.


Sample Input 2:
2
3 1
111 0
1 1
1 1
Sample Output 2:
111
10
Explanation for sample input 2:
In the first test case, the first string is “111” which is 7 in the decimal format, and the second string is “0” which is 0 in the decimal format. 
So, 7 + 0 = 0, which is represented as “111” in binary form.

In the first test case, the first string is “1” which is 1 in the decimal format and the second string is “1” which is 1 in the decimal format. 
So, 1 + 1 = 2, which is represented as “10” in binary form.
*/

#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;
string addBinaryString(string &a, string &b, int n, int m)
{
   string result = "";
    int carry = 0;      
    int i = n - 1, j = m - 1;
    while (i >= 0 || j >= 0 || carry > 0) {
      int bitA = (i >= 0) ? a[i] - '0' : 0;
      int bitB = (j >= 0) ? b[j] - '0' : 0;

      int sum = bitA + bitB + carry;
      carry = sum / 2;
      int currentBit = sum % 2;

      result = to_string(currentBit) + result;
      i--;
      j--;
    }
    return result;
}

class Runner
{
    int t;
    vector<pair<string, string>> binaryString;
    vector<pair<int, int>> stringLength;

public:
    void takeInput()
    {
        cin >> t;

        binaryString.resize(t);
        stringLength.resize(t);

        for (int l = 0; l < t; l++)
        {
            cin >> stringLength[l].first >> stringLength[l].second;

            cin >> binaryString[l].first >> binaryString[l].second;
        }
    }

    void execute()
    {
        for (int i = 0; i < t; i++)
        {
            string a = binaryString[i].first;
            string b = binaryString[i].second;
            int n = stringLength[i].first;
            int m = stringLength[i].second;

            addBinaryString(a, b, n, m);
        }
    }

    void executeAndPrintOutput()
    {
        for (int i = 0; i < t; i++)
        {
            string a = binaryString[i].first;
            string b = binaryString[i].second;
            int n = stringLength[i].first;
            int m = stringLength[i].second;

            cout << addBinaryString(a, b, n, m) << endl;
        }
    }
};

int main()
{
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();

    return 0;
}
