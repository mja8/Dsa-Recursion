#include<iostream>
#include<limits.h>
using namespace std;

int solve(int n, int x, int y, int z){
    //base case
    if(n==0) return 0;  //valid base case
    if(n<0) return INT_MIN;  //invalid base case (rod length can't be -ve)


    //ek case hm krlenge baaki recursion sambhal lega
    int a = solve(n-x,x,y,z)+1; // x ke liye
    int b = solve(n-y,x,y,z)+1; //y ke liye
    int c = solve(n-z, x,y,z)+1; //z ke liye

    //saare calls ka maximum sum
    int maxi = max(a, max(b,c));

    return maxi;
}

int main()
{
int n = 8;
int x = 3;
int y = 3;
int z = 3;

int ans = solve(n,x,y,z);
if(ans<0) 
ans = 0;

cout<<ans;

return 0;
}