#include<bits/stdc++.h>
using namespaces std;

int checkadj(int A[][],int r,int c){
    A[r][c]=r+1;
    if(r==0){

    }
}
}
int main(){
int r,c;cin>>r>>c;
int A[r][c];
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>A[i][j];
    }
}
int l=0,B[r*c];
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
            if(A[i][j]==1){
                if(checkadj(A,i,j))B[l]++;
                else B[++l]++;
            }
}
}
}
