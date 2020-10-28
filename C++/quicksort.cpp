#include<bits/stdc++.h>
using namespace std;
int partition(int A[],int l,int h){
    int i=l,j=h;
    int pivot=A[(l+h)/2];
    while(i<j){
    do{
        i++;
    }while(A[i]>pivot);
    do{
        j--;
    }while(A[j]<pivot);
    if(i<j)swap(A[i],A[j]);
    }
    swap(A[l],A[j]);
    return j;
}
void Quicksort(int A[],int l,int h){
    if(l<h){
        int j=partition(A,l,h);
        Quicksort(A,l,j);
        Quicksort(A,j+1,h);
    }
}
int main(){
    int A[]={2,4,6,8,10,1,3,5,7,9};
    int n=10;
    Quicksort(A,0,n);
    for(int i=0;i<n;i++)cout<<A[i]<<" ";
}
