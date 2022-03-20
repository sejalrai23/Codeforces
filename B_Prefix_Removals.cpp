#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>> s;
        map<char,int> m;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        int cnt=0;
        for(int i=0;i<s.length();i++){
            // cout<<s[i]<<"-"<<m[s[i]]<<endl;
            if(m[s[i]]>1){
                m[s[i]]--;
                cnt++;
            }else{
                break;
            }
        }
        s.erase(0,cnt);
        cout<<s<<endl;
        // cout<<"*"<<endl;
    }
    return 0;
}