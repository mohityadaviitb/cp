#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int begin, int mid, int end){
    int leftsize = mid-begin+1;
    int rightsize = end-mid;
    int *leftarray = new int[leftsize];
    int *rightarray = new int[rightsize];
    for(int i=0;i<leftsize;i++){
        leftarray[i] = arr[begin+i];
    }
    for(int i=0;i<rightsize;i++){
        rightarray[i] = arr[mid+i+1];
    }
    int i=0;
    int j=0;
    int pointer = begin;
    while(i<leftsize&&j<rightsize){
        if(leftarray[i]<=rightarray[j]){
            arr[pointer++] = leftarray[i++];
        }
        else{
            arr[pointer++]  = rightarray[j++];
        }
    }
    while(i<leftsize){
        arr[pointer++] = leftarray[i++];
    }
    while(j<rightsize){
        arr[pointer++] = rightarray[j++];
    }
}

void mergesort(int arr[], int begin, int end){
    if(begin>=end){
        return;
    }
    int mid = begin + (end-begin)/2;
    mergesort(arr,begin,mid);
    mergesort(arr,mid+1,end);
    merge(arr,begin, mid, end);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}