#include<iostream>
#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){

    int n;
    cin >> n;
    vector<int> arr(n-1);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    vector<bool> vis(n + 1,false);
    vis[0]=true;
    for(int i : arr){
        vis[i] = true;
    }
    for(int i=0; i<=n; i++){
        if(!vis[i]){
            cout << i;
            break;
        }
    }

    return 0;
}