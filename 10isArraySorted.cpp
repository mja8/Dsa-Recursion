#include<iostream>
using namespace std;

bool checkSort(int arr[], int& n, int i){
    //base case
    if(i==n-1) return true;

    //processing
    if(arr[i] > arr[i+1])
        return false;

    //recursive relation
    checkSort(arr,n,i+1);
}

int main()
{
int arr[] = {2,4,6,8,10};
int n = sizeof(arr)/sizeof(int);
int i =0;
cout<<checkSort(arr,n,i);
return 0;
}