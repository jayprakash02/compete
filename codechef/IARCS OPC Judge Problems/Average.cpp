#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;cin>>n;
   int seq[n];
   for(int i=0;i<n;i++)cin>>seq[i];
   int flag=0;
   sort(seq,seq+n);
   for(int i=0;i<n;i++){
       int l=i-1;
       int u=i+1;
       if(seq[i]==seq[l]||(seq[i]==seq[u]&&u<n)){
           flag++;
       }
       else{
        while(l>0&&u<n){
           if(2*seq[i]==seq[l]+seq[u]){
               flag++;
               break;
           }
           if(2*seq[i]<seq[l]+seq[u]){
               l=l-1;
           }
           else u=u+1;
       }   
       }
       
   }
   cout<<flag;
   return 0;
}