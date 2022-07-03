#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='H') cnt++;
        else if(s[i]=='Q') cnt++;
        else if(s[i]=='9') cnt++;
    }

    if(cnt>=1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}