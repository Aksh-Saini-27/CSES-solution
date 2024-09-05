#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
    string s;
    cin >> s;

    int maxi=1;
    int curr = 1;
    for(int i=1; i<s.size();i++){
        if(s[i] == s[i-1]){
            curr++;
            maxi = max(maxi,curr);
        }else{
            curr = 1;
        }
    }
    cout << maxi;

    return 0;
}