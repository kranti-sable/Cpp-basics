#include <iostream>
#include <vector>
using namespace std;
int main(){
    //printing size
    vector<int>vec1={1,2,3,4};
    cout<<vec1.size()<<"\n";//4

    //printing individual valuse of valuse
    vector<int>vec2(10,-1);
    cout<<vec2.size()<<"\n";//10
    for(int i=0;i<vec2.size();i++){
        cout<<vec2[i]<<" ";//-1 ,10 times
    }
    cout<<endl;
    return 0;
}