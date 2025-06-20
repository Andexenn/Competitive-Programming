#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
 
int main(){
    long long n;cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n%2==1){
            n*=3;
            n++;
            cout<<n<<" ";
        }
        else{ 
            n/=2;
            cout<<n<<" ";
        }
    }
    return 0;
}