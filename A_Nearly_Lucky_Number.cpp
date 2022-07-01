#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long cnt=0;
    string s=to_string(n);
    for(long long i=0;i<s.length();i++){
        if(s[i]=='4'|| s[i]=='7'){
            cnt++;
        }
    }
    if(cnt==7 || cnt==4){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}