#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;
int main(){
    int n;cin>>n;
    int cnt=1;
    while(n>=1){
        cnt*=n%10;
        n/=10;
    }
    cout<<cnt;
    return 0;
}
