// 2.slight optimal approch for sorted arr 
#include<iostream>
using namespace std;
bool search(int arr[][4],int n,int key){
    for(int i=0;i<n;i++){
        int start=0,end=n-1;
         while(start<=end){
        int mid =(start+end)/2;
        if(arr[i][mid]==key){
            cout<<"("<<i<<","<<mid<<")";
            return true;
        }else if(arr[i][mid]<key){
            start=mid+1;
        }else{
           end=mid-1;
        }
    }
}
    cout<<"key not found"<<endl;
    return false;
}
int main(){
    int arr[4][4]={{10,20,30,40},
                   {15,25,35,45},
                   {27,29,37,48},
                   {32,33,39,50}};
    search(arr,4,33);
    return 0;
}
