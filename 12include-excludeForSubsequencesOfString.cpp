#include<iostream>
using namespace std;
//find all the subsequences for a substring (2^n) also known as power set
//is ko hm include/exclude se kr skte hai

void printSubsequences(string s, string ans, int i){
    //base case
    if(i>=s.size()){
        //ek case hm solve krenge
        cout<<ans<<endl;
        return;
    }

    //baki recursion sambhal lega
    printSubsequences(s, ans+s[i], i+1);  //ye include wala case hai 
    printSubsequences(s,ans,i+1); //ye exclude wala case hai
}


int main()
{
string s = "abc";
string ans = "";
int i =0;

printSubsequences(s,ans,i);
return 0;
}