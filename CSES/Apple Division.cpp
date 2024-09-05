#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int f(vector<int> &arr, int idx, int num1, int num2){
    if(idx == n) return 0;

    int a = f(arr, idx+1, num1 + arr[idx], num2);
    int b = f(arr, idx+1, num1, num2 + arr[idx]);

    return min()
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout << f(arr, 0, 0,0) << endl;
    return 0;
}