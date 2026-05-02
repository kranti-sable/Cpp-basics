#include<iostream>
#include<vector>
using namespace std;
vector<int>pairsum(vector<int> arr,int target){
    int maxsum=INT_MIN;
    for(int start=0;start<arr.size();start++){
       for(int end=start;end<arr.size();end++){
        int currsum=0;
        for(int i=start;i<=end;i++){
            currsum+=arr[i];
        }
        cout<<currsum<<",";
        maxsum=max(maxsum,currsum);
       }
       cout<<endl;
    }
    cout<<maxsum<<endl;
}
int main(){
    vector<int>vec={2,7,11,15};
    int target=9;
    vector<int>ans=pairsum(vec,target);
    cout<<ans[0]<<","<<ans[1]<<endl;
    return 0;
}