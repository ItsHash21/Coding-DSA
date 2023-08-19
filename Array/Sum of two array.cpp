/*
You are given two numbers 'arr1' and 'arr2' in the form of two arrays (arr1[] and arr2[]) both of lengths 'N'. You have given a third array 'arr3' also with length 'N'. You have store the corresponding sum of elements from arr1 and arr2 in arr3 corresponding element.
Note:
You will be given a function with N, arr1 and arr2 and arr3 as parameters. You just have to fill the arr3 as required.

Input Format:
First line of input contains the length 'N' of arrays.
Next 2 Lines contains N elements separated by space
Line 1: arr1
Line 2: arr2
Output Format:
N space integer denoting the elements in arr3.

constraints:
1<=N<=1000
1<=arr1[i],arr2[i]<=1000

Input 1:
4
1 2 3 4
6 2 4 5
Output 1:
7 4 7 9
*/
#include<iostream>
using namespace std;

void sumOfTwoArrays(int arr1[],int arr2[],int n,int arr3[]){
   for(int i=0;i<n;i++)
   {
       arr3[i]=arr1[i]+arr2[i];
   }
}

int main(){

    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    int arr3[n];
    
    for(int i = 0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i = 0;i<n;i++){
        cin>>arr2[i];
    }
    sumOfTwoArrays(arr1,arr2,n,arr3);
    for(int i = 0;i<n;i++){
        cout<<arr3[i]<<" ";
    }
    
    return 0;
}
