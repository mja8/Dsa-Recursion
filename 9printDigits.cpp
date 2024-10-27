#include<iostream>
#include<vector>
using namespace std;

void printDigits(int num){
    //base case
    if(num==0) return;

    //recursive call
    printDigits(num/10);

    //processing
    cout<<num%10<<" ";  //this is example of head recursion
}

int main()
{
printDigits(647);
return 0;
}