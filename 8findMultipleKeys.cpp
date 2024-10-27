#include<iostream>
#include<string>
#include<vector>
using namespace std;

//max possible parameters ko by reference krne ki koshish kro 
//ise nya variable create nhi hoga aur purane main ke hi variable se kaam chal jayega
//hmara space complexity km ho jayega


void findkey(string& s, char& key, int& i, vector<int>& keyvec){
    //base case
    if(s[i]=='\0') return;

    //processing
    if(s[i]==key)
        keyvec.push_back(i);

    //recursive relation
    return findkey(s, key, ++i, keyvec); //yaha pe i++ aur i=i+1 kaam nhi krega
                        //i++ ek infinite loop dega, i= i+1 reference me nhi hota
}

int main()
{
string s = "lovebabbar";
int i=0;
char key='b';
vector<int> keyvec;
findkey(s, key, i, keyvec);


cout<<"keys found at following locations"<<endl;
//printing vector
for(int i=0; i<keyvec.size(); i++){
    cout<<keyvec[i]<<" ";
}

return 0;
}