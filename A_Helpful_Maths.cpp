#include<iostream>
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string res="";
    for(int i=0;i<s.length();i++){
        if(s[i]!='+'){
            res+=s[i];
        }
    }
    sort(res.begin(),res.end());
    cout<<res[0];
    for(int i=1;i<res.length();i++){
        cout<<'+';
        cout<<res[i];
    }
    
    return 0;

}