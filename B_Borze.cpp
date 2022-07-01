#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    map<string , char> ump;
    ump["."]='0';
    ump["-."]='1';
    ump["--"]='2';
    string ans;
    
    int i=0, j=0;
    while(j<s.length()){
        if(ump[s.substr(i , j-i+1)]){
            // cout<<s.substr(i , j-i+1)<<endl;
            ans+=ump[s.substr(i , j-i+1)];
            j++;
            i=j;
            
        }else{
             j++; 
        }
       
    }
    cout<<ans<<endl;
    return 0;

}