#include<iostream>
using namespace std;

void printArray(int arr[], int n, int i){
    //base case
    if(i>n-1) return;

    //processing
    cout<<arr[i]<<" ";

    //recursive statement
    printArray(arr, n, i+1);
}

int main()
{
int arr[] = {5,6,7,8,9};
int n = sizeof(arr)/sizeof(int);
int i =0;
printArray(arr,n,i);

return 0;
}