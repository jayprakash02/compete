#include<bits/stdc++.h>
using namespace std;
int binarySearch(int A[],int n,int key){
    int low,high;low=0;high=n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(key==A[mid]) return mid+1;
        if(key<A[mid]){
            high=mid-1;
        }
        else low=mid+1;
    }return 404;
}
int main(){
    int n,A[10];n=10;
    for(int i=0;i<10;i++)cin>>A[i];
    int key;cin>>key;
    int index = binarySearch(A,n,key);
    cout<<index;
    return 0;
}
