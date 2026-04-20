/* create income tax calculator 
income<5L-->0% tax
income 5-10L-->20%
income >10L-->30% */
#include <iostream>
using namespace std;
int main(){
    int income=200000;
    if(income<=500000){
        cout<<"tax 0%"<<endl;
    }else if(income<=1000000){
        cout<<"tax 20%"<<" "<< 0.2*income<<endl;
        }
    else{
            cout<<"tax 30%"<<" "<<0.3*income<<endl;
        }
        return 0;
}