//1.bruteforce approch for searching key for sorted arr 
#include<iostream>
using namespace std;
bool search(int arr[][4],int n,int key){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==key){
                cout<<"("<<i<<","<<j<<")";
                return true;
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