#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    map<string , int> ump;
    ump["."]=0;
    ump["-."]=1;
    ump["--"]=2;

    for(int i=0;i<s.length();i++){
        string res= s.substr(i,i+1);
        cout<<res<<endl;
    }

}