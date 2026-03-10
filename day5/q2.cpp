//print sum of first n natural number 
#include<iostream>
using namespace std;
int main(){
    int i,n=5;
    int sum=0;
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<sum<<endl;
}