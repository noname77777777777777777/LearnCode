#include "iostream"
#include "stdlib.h"
using namespace std;
int cmp(const void* a,const void* b){
    return (*(int*)a - *(int*)b);
}
int find_binary(int a[],int l,int r,int k){
    if (r>=l)
    {
        int mid =l + (r-l)/2;
        if(a[mid] == k){
            return mid;
        }
        if (a[mid]>k)
        {
            return find_binary(a,l,mid-1,k); 
        }if (a[mid]<k){
        return find_binary(a,mid+1,r,k);
        }
    }   
    return -1;
}
int main(){
    int n;
    cin>>n;
       int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i] = a[i];
    }
     qsort(b,n,sizeof(int),cmp);
        for(int i=0;i<n;i++){
            int k = find_binary(b,0,n-1,a[i]);
            //  cout<<k;
            if(b[k]!=b[k-1]&&b[k]!=b[k+1]){
                cout<<a[i]<<" ";
            }
        }
}