//convert ith bit into set bit or into 1.
#include<iostream>
using namespace std;
int setIthbit(int num,int i){
    int bitmask=1<<i;
    return (num | bitmask);
}
int main(){
    cout<<setIthbit(6,3)<<endl;
    return 0;
}