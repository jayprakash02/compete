#include<bits/stdc++.h>
using namespace std;

int main(){
int r,c;cin>>r>>c;
int A[r][c];
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>A[r][c];
    }
}
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<A[r][c];
    }cout<<endl;
}
int C[5]={0},k=0;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(A[i][j]==1){
            if(i>=0 || j>=0){
                if(A[i+1][j]!=0){C[k];break;}
                if(A[i+1][j+1]!=0){C[k]++;break;}
                if(A[i][j+1]!=0){C[k]++;break;}
            }else{
                if(A[i-1][j]!=0){C[k]++;break;}
                if(A[i-1][j-1]!=0){C[k]++;break;}
                if(A[i][j-1]!=0){C[k]++;break;}
                else k++;
            }
        }
    }
}
for(int i=0;i<5;i++){
 cout<<C[i];
}
}
