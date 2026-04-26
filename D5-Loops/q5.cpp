//print sum of a number using while loop n=10829
#include<iostream>
using namespace std;
int main(){
    int i=1,n=10829;
    int sum=0;
    while(n>0){
        i=n%10;
        sum=sum+i;
        n=n/10; 
    }
    cout<<sum<<endl;
    return 0;
}