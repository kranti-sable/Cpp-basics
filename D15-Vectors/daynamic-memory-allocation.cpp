#include<iostream>
using namespace std;
int main(){
    int size=10;
    int *arr =new int [size];
    int x=1;
    for(int i=0;i<size;i++){
        arr[i]=x;
        cout<<arr[i]<<" ";
        x++;
    }
    cout<<endl;
    return 0;
}