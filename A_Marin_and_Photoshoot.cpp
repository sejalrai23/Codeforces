#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        string s;
        cin>>s ;
        int ans=0;
        for(int i=0;i<k;i++){
            int j=i;
            if(s[i]=='0' && i!=k-1){
                j=i+1;
                int cnt=0;
                while(true ){
                    if(s[j]=='0'){
                        break;
                    }else{
                        cnt++;
                    }
                    j++;
                }
                cnt==0 ? ans+=2 : cnt==1 ?ans++ : ans;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}