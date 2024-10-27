#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void maxSumOfAdjacent(vector<int> arr, int sum, int i, int& maxi){
    //base case
    if(i>=arr.size()){
        //maxi update
        maxi = max(maxi, sum);
        return;
    }

    
    //ek case hm solve krenge

    //include
    maxSumOfAdjacent(arr, sum+arr[i], i+2, maxi); 

    //exclude
    maxSumOfAdjacent(arr, sum, i+1, maxi);

}

int main()
{
vector<int> arr = {1,4,5,6,8,11};
int i =0;
int sum=0;
int maxi = INT_MIN;
maxSumOfAdjacent(arr,sum,i, maxi);

cout<<maxi;
return 0;
}