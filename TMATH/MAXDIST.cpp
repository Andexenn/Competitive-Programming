#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;
int arr[100000];
int main(){
    int n;cin>>n;
    for(int i = 0; i < n; i++)  cin>>arr[i];
    
    sort(arr, arr + n);
    cout<<arr[n-1] - arr[0];
    return 0;
}
