#include<iostream>
using namespace std;

int main(){
    string s;
    int n , t;
    cin>> n >> t ;
    cin>>s;

    while(t){
        for(int i=1;i<n ;i++){
            if(s[i-1]=='B' && s[i]=='G'){
                swap(s[i-1], s[i]);
                i++;
            }
        }
        t--;
    }
    cout<<s<<endl;
    return 0;
}