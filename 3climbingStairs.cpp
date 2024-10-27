#include<iostream>
using namespace std;

int climbStairs(int n) {
    if(n==0 || n==1) return 1;

    //we have two ways to climb nth stair : from (n-1)th stair + from (n-2)th stair
    //like fibonacci series f(n) = f(n-1) + f(n-2) but with some minor change
    // 1 1 2 3 5 8  

    return climbStairs(n-1) + climbStairs(n-2);
}

int main()
{
cout<<climbStairs(33);
return 0;
}