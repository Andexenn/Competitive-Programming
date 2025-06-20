#include<bits/stdc++.h>
using namespace std;
int n;
 
vector<string> gengrayCode(int n){
    if(n==1)
        return{"0","1"};
 
    vector<string>prevCode = gengrayCode(n-1);
    vector<string>reversed = prevCode;
    reverse(reversed.begin(),reversed.end());
 
    int sz=prevCode.size();
 
    for(int i=0;i<sz;i++){
        string app_zero = "0" + prevCode[i];
        prevCode[i] = "1" + reversed[i];
        prevCode.push_back(app_zero);
 
    }
    return prevCode;
 
}
 
int main(){
    cin>>n;
    vector<string>grayCode = gengrayCode(n);
    for(auto code: grayCode)
        cout<<code<<'\n';
    return 0;
 
}