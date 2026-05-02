//find smallest in array
#include <iostream>
using namespace std;
int main(){
    int arr[]={8,3,5,9,6};
    int n=sizeof(arr)/sizeof(int); 
    int min=arr[0];
    for(int i=0;i<n;i++){
       if(arr[i]<min){
        min=arr[i];
       }
    }
    cout<<"smallest="<<min<<endl;
    return 0;
}