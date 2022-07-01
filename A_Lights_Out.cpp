#include<bits/stdc++.h>
using namespace std;

bool isPossible(int i, int j){
    if(i>=0 && i<=2 && j>=0 && j<=2) return true;
    return false;
}

int main(){
    int mat[3][3];
    memset(mat , -1, sizeof(mat));
    for (int i = 0; i <=2; i++)
     for (int j = 0; j <=2; j++)
           mat[i][j] = 1;
    for(int i=0;i<=2 ;i++){
        for(int j=0;j<=2;j++){
            int a;
            cin>>a;
            if(a%2!=0){

                mat[i][j]=1-mat[i][j];
                if(isPossible(i-1, j) ){
                    mat[i-1][j]=1-mat[i-1][j];
                }
                if(isPossible(i+1, j) ){
                    mat[i+1][j]=1-mat[i+1][j];
                }
                if(isPossible(i, j-1) ){
                    mat[i][j-1]=1-mat[i][j-1];
                }
                if(isPossible(i, j+1) ){
                    mat[i][j+1]=1-mat[i][j+1];
                }

            }

        }
    }

    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            cout<<mat[i][j];
        }
        cout<<endl;
    }
    return 0;
}