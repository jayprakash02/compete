#include<bits/stdc++.h>
using namespace std;

void heapify(int A[],int n,int i){
    int largest=i;
    int l=i*2+1;
    int r=i*2+2;

    if(l<n && A[l]>A[largest])largest=l;
    if(r<n && A[r]>A[largest])largest=r;

    if(largest != i){
        swap(A[largest],A[i]);
        heapify(A,n,largest);
    }
}
void buildheap(int A[],int n){
    for(int i=(n/2)-1;i>=0;i--)heapify(A,n,i);
}
int main(){
    int A[]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    buildheap(A,n);
    for(int i=0;i<n;i++)cout<<A[i];
}
