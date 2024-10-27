#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int s, int e, int key){
    //base case
    if(s>e) return -1;

    //ek case hm handle krenge
    int mid = (s+e)/2;
    if(arr[mid] == key) return mid;

    if(arr[mid] > key) //hm left me search krenge
        return binarySearch(arr,s, mid-1, key);

    else //hm right me search krenge
        return binarySearch(arr, mid+1, e, key);

}

int main()
{
vector<int> arr = {10,20,30,40,50,60,70,80};
int n = arr.size();
int s =0;
int e = n-1;
int key = 70;
cout<<binarySearch(arr,s,e,key);
return 0;
}