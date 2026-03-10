//print sum of odd digit of a number using while loop.
#include <iostream>
using namespace std;
int main(){
    int i=1,n=10;
    int sum=0;
    while(i<=n){
        if(i%2!=0){
        sum=i+sum;
        }
        i++;
    }
    cout<<sum<<endl;
    return 0;

}