#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int main(){
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    int a=sqrt(x1*x3/x2);
    int b=(int)x1/a;
    int c=(int)x3/a;
    cout<<(a+b+c)*4;
    return 0;
}
