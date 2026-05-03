#include<iostream>
#include<vector>
using namespace std;
vector<int>pairsum(vector<int>vec,int target){
    int st=0,end=vec.size()-1;
    int currsum=0;
    vector<int>ans;
    while(st<end){
        currsum=vec[st]+vec[end];
        if(currsum==target){
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
        else if(currsum>target){
            end--;
        }else{
            st++;
        }
    }
    return ans;
}
int main(){
    vector<int>vec={2,7,11,15};
    int target=13;
    vector<int>ans=pairsum(vec,target);
    cout<<ans[0]<<","<<ans[1]<<endl;
    return 0;
}