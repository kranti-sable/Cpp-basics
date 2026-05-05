// Counting sort--
#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}
void countsort(int arr[],int n){
      int freq[100000]={0};
      int minval=INT_MAX,maxval=INT_MIN;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
        minval=min(minval,arr[i]);
        maxval=max(maxval,arr[i]); 
    }
    for(int i=minval,j=0;i<=maxval;i++){
        while(freq[i]>0){
            arr[j++]=i;
            freq[i]--;
        }
    }
    print(arr,n);
}
int main(){
    int arr[]={3,5,4,5,1};
    int n=5;
    countsort(arr,n);
    return 0;
}