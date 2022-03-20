#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;
    string s;
    cin>> s;
    int cnt=0;
    char a=s[0];
    for(int i=1;i<s.length();i++){
        if(s[i]==a){
            cnt++;

        }
        a=s[i];

    }
    cout<<cnt;
    return 0;
}