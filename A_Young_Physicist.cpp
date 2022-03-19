#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    int y1=0,y2=0,y3=0;
    while(n--){
        int a, b,c ;
        cin>>a>>b>>c;
        sum+=(a+b+c);
        y1+=a;
        y2+=b;
        y3+=c;
    }
    if(sum==0 && y1==0 && y2==0 && y3 ==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}