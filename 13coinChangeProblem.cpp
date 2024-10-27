#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int solve(vector<int> arr, int target){
    //base case
    if(target==0) return 0;
    if(target<0) return INT_MAX;

    int mini = INT_MAX;

    //ek case hm solve krenge baaki recursion sambhal lega
    //hm tree ke first layer ke saare calls ko solve kar dete h
    //baki niche ke layer for recursion sambhal lega

    for(int i =0; i<arr.size(); i++){
        int ans = solve(arr,target-arr[i]);

        if(ans!=INT_MAX)
        mini = min(mini, ans+1);
    }    
    return mini;
}

int main()
{
vector<int> arr = {1,2,3,4};
int target = 11;

cout<<solve(arr,target);

return 0;
}