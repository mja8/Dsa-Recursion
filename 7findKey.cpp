#include<iostream>
#include<string>
using namespace std;

//max possible parameters ko by reference krne ki koshish kro 
//ise nya variable create nhi hoga aur purane main ke hi variable se kaam chal jayega
//hmara space complexity km ho jayega


int findkey(string& s, char& key, int& i){
    //base case
    if(s[i]=='\0') return -1;

    //processing
    if(s[i]==key) return i;

    //recursive relation
    return findkey(s, key, ++i); //yaha pe i++ aur i=i+1 kaam nhi krega
                        //i++ ek infinite loop dega, i= i+1 reference me nhi hota
}

int main()
{
string s = "lovebabbar";
int i=0;
char key='e';
int index = findkey(s, key, i);
cout<<index;
return 0;
}