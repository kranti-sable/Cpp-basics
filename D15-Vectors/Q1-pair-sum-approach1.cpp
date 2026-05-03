#include<iostream>
#include<vector>
using namespace std;
vector<int>pairsum(vector<int> vec,int target){
    int currsum=0;
    for(int i=0;i<vec.size();i++){
        for(int j=i+1;j<vec.size();j++){
            currsum=vec[i]+vec[j];
            if(currsum=target){
                return {i+1,j+1};
            }
        }
    }
    return {};
}
int main(){
    vector<int>vec={2,7,11,15};
    int target=13;
    vector<int>ans=pairsum(vec,target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}