//check if the num is power of two or not
#include<iostream>
using namespace std;
bool ispowerOf2(int num){
    if(!(num&(num-1))){
        return true;
    }else{
        return false;
    }
}
int main(){
    cout<<ispowerOf2(4)<<endl;
    cout<<ispowerOf2(13)<<endl;
    return 0;
}