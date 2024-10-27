#include<iostream>
#include<string>
using namespace std;


void printString(string& s, int i){
    //base case
    if(s[i] == '\0') return;

    //processing
    cout<<s[i];

    //recursive relation
    printString(s, i+1);
}

int main()
{
string s = "lovebabbar";
int i=0;
printString(s, i);
return 0;
}