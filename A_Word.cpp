#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int up=0 , low=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z'){
            up++;
        }else{
            low++;
        }
    }
    // cout<<up<<"-"<<low<<endl;
    if(up>low){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout<<s<<endl;
    }else{
         transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout<<s<<endl;
    }
    return 0;
}