#include<bits/stdc++.h>
using namespace std;
int const n=10;
int A[n];
int bsRecursive(int low,int high,int key){
if(low==high){
    if(A[low]==key)return low+1;
    else return 404;
}else{
int mid=(low+high)/2;
if(key==A[mid])return mid+1;
if(key<mid)return bsRecursive(low,mid-1,key);
else return bsRecursive(mid+1,high,key);
}
}
int main(){
for(int i=0;i<n;i++)cin>>A[i];
int key;cin>>key;
int index = bsRecursive(0,n-1,key);
cout<<index;
}
