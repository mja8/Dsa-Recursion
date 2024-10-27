#include<iostream>
using namespace std;

void findMax(int arr[], int n, int& maxi, int i){
    //base case
    if(i>n-1) return;

    //processing
    if(arr[i]>maxi){
        maxi = arr[i];
    }
    findMax(arr, n, maxi, i+1);
}

int main()
{
int arr[] = {10,30,21,44,32,17,19,66};
int n = 8;
int maxi = INT32_MIN;
int i=0;
findMax(arr,n,maxi, i);

cout<<maxi;
return 0;
}