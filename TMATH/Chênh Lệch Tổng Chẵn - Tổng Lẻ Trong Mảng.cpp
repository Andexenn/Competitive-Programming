#include<iostream>
#include<vector>
#include<map>
using namespace std;
long long arr[1000005];

int main(){
    int n;cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    long long tong_le,tong_chan;
    tong_le=tong_chan=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0)
            tong_chan+=arr[i];
        else
            tong_le+=arr[i];
    }
    long long ans=abs(tong_le-tong_chan);
    cout<<ans;
    return 0;
}
