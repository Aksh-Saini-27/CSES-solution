#include<iostream>
#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    cout <<n<<" ";
    while(true){
        if(n==1) break;
        if(n % 2 == 0){
            n=n/2;
            cout<<n<<" ";
        }
        else{
            n=n*3+1;
            cout <<n<<" ";
        }
    }
    return 0;
}