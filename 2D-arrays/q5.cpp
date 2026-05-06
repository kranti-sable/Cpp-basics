#include<iostream>
using namespace std;
bool search(int mat[][4],int n,int m,int key){
    int i=0,j=m-1;
    while(i<n && j>=0){
        if(mat[i][j]==key){
            cout<<"("<<i<<","<<j<<")";
            return true;
        }else if(mat[i][j]>key){
            j--;
        }else{
            i++;
        }
    }
    cout<<"not found"<<endl;
    return false;   
}
int main(){
    int arr[4][4]={{10,20,30,40},
                   {15,25,35,45},
                   {27,29,37,48},
                   {32,33,39,50}};
    search(arr,4,4,50);
    return 0;
}
