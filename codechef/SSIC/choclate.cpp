#include<bits/stdc++.h>
using namespace std;
int child_count(int i,int j){
    int count=0;
    while(i!=0 and j!=0){
        count+=1;
        if(i>j){
             i-=j;
        }else{
            j-=i;
        }
    }
   return count;
}
int main(){
    int n;cin>>n;
    while(n--){
        int p,q,r,s;
        cin>>p>>q>>r>>s;
        int c=0;
        for(int i=p;i<q+1;i++){
            for(int j=r;j<s+1;j++){
                c+=child_count(i,j);
            }
        }
        cout<<c;
    }
}
