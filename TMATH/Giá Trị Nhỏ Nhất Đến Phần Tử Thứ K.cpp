#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;
const long long MAX=10000000000;
long long arr[1000];

int main(){
    int n;cin>>n;
    for(int i =1 ; i <= n; i++) cin>>arr[i];
    int q;cin>>q;
    while(q--){
        int k;cin>>k;
        long long flag=MAX;
        for(int i = 1; i <= k ; i++){
            flag=min(flag,arr[i]);
        }
        cout<<flag<<endl;
    }
    return 0;
}
