#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2, s3;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    unordered_map<char , int> ump;

    for(int i=0;i<s1.length();i++){
        ump[s1[i]]++;
    }
    for(int i=0;i<s2.length();i++){
        ump[s2[i]]++;
    }
    for(int i=0;i<s3.length();i++){
        ump[s3[i]]--;
    }
    int flag=0;
    for(auto it: ump){
        if(it.second!=0) {
           flag=1;
        }
    }
    if(flag) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

    return 0;
}