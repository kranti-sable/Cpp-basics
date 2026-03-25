//max subarray sum approch 2
#include <iostream>
using namespace std;
void maxsubarrsysum(int arr[],int n){
    int maxsum=INT_MIN;
    for(int start=0;start<n;start++){
        int currsum=0;
        for(int end=start;end<n;end++){
            currsum+=arr[end];
            maxsum=max(maxsum,currsum);
        }
    }
    cout<<"max subarry sum ="<<maxsum<<endl;
}
int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n =sizeof(arr)/sizeof(int);
    maxsubarrysum[arr,n];
    return 0;
}