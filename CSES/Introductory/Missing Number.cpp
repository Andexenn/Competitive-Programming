#include<bits/stdc++.h>
using namespace std;
int arr[1000005];
int main(){
    int n;cin>>n;
    for(int i=1;i<=n-1;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(int i=1;i<=n;i++){
        if(arr[i]!=arr[i-1]+1){
            cout<<arr[i-1]+1;
            break;
        }
    }
    return 0;
    
}