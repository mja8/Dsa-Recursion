#include<iostream>
using namespace std;

void print(int n){
    if(n==0) return;  //base case
    cout<<n<<" ";     //processing
    print(n-1);       //recursion relation
}

int main()
{
print(5);
return 0;
}