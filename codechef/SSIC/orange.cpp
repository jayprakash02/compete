#include<bits/stdc++.h>
using namespace std;
int main(){
int n,num;cin>>n>>num;
int A[n],B[n]={0},sum=0;
for(int i=0;i<n;i++){
        cin>>A[i];
        sum+=A[i];
}
if(sum>=num){
   for(int i=0;i<n;i++){
    if(num!=0){
            if(num>A[i]){
                num=num-A[i];
                B[i]=A[i];
            }else{
                B[i]=num;
                num-=num;
            }
    }
}
for(int i=0;i<n;i++){
        cout<<A[i]<<" "<<B[i]<<" "<<A[i]-B[i]<<endl;
}
}else{
cout<<"Sorry, we can only supply "<<sum-1<<" oranges";
}
}
