#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n ;
    for(int m=0;m<n;m++){
        int k;
        cin>>k;
        char a[2*k][2*k];
         int uh0 =0 , uh1=0, lh0=0, lh1=0, leh0=0, leh1=0 , rih0=0, rih1=0;
        for(int i=0;i<2*k;i++){
            for(int j=0;j<2*k;j++){
                cin>>a[i][j];
                if(i>=0 && i <k) {
                    a[i][j]=='I' ? uh1++ : uh0++;
                }else{
                    a[i][j]=='I' ? lh1++ : lh0++;
                }
                if(j>=0 && j<k){
                    a[i][j]=='I'? leh1++ : leh0++;
                }else{
                    a[i][j]=='I' ? rih1++ : rih0++;
                }

            }
        }

        // int up = abs(uh0-lh0);
        int bot = abs( uh1-lh1);
        // int left = abs(leh0-rih0);
        int right= abs(leh1-rih1);
        // cout<<up << " "<<bot <<" "<<left <<" "<<right<<endl;
        int ans= max( bot,right);
        cout<<"Case "<<"#"<<m+1 <<":"<<" "<<ans<<endl;

    }
}