#include<iostream>
#include<vector>
#include<map>
using namespace std;
void solve(int n){
    int cnt=0;
    for(int i=1000;i<=9999;i++){
        int x=i,sum=0;
        while(x>=1){
            sum+=x%10;
            x/=10;
        }
        if(sum==n)  cnt++;
    }
    cout<<cnt<<endl;
}
int main(){
    int T;cin>>T;
    while(T--){
        int n;cin>>n;
        solve(n);
    }
    return 0;
}
