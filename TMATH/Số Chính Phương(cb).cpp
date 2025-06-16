#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;
typedef long long ll;

int main(){
    unsigned long long n;
    cin>>n;
    double res=sqrt(n);
    if(ceil(res)==res)   
        cout<<"yes";
    else    
        cout<<"no";
    return 0;
}
