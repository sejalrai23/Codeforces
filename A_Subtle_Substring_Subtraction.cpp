#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>> s;
        if(s.length()==1){
            cout<<"Bob"<<" "<<int(s[0])-96<<endl;
        }else if(s.length()%2==0){
            int sum=0;
            for(int i=0;i<s.length();i++){
                sum+=int(s[i])-96;
            }
            cout<<"Alice"<<" "<<sum<<endl;
        }else{
            int sum=0;
            for(int i=0;i<s.length();i++){
                sum+=s[i]-96;
            }
            int mini=min(s[0]-96,s[s.length()-1]-96);
            cout<<"Alice"<<" "<<sum-2*mini<<endl;
        }
    }
}