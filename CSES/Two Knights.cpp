#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;


int main(){
    ll n;
    cin >> n;
    for(ll i=1; i<=n; i++){
        ll total = ((i*i)*((i*i) - 1))/2;
        ll minus = 4 * (i-1)*(i-2);

        cout << total - minus << endl;
    }

    return 0;
}

// ll check(int n, int i, int j){
//     int a = 0;
//     if(i-2 >= 0 && j-1 >=0) a++;
//     if(i-1 >= 0 && j-2 >=0) a++;
//     if(i-2 >= 0 && j+1 < n) a++;
//     if(i-1 >= 0 && j+2 < n) a++;
//     if(i+1 < n && j+2 < n) a++;
//     if(i+2 < n && j+1 < n) a++;
//     if(i+2 < n && j-1 >= 0) a++;
//     if(i+1 < n && j-2 >= 0) a++;

//     return a;
    
// }

// ll solve(int n){
//     int sub = 0;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             int a = check(n,i,j);
//             sub += (n*n - a - 1); 
//         }
//     }
//     return sub;
// }


// int main(){
    
//     int n;
//     cin >> n;

//     for(int i=1; i<=n; i++){
//         cout << solve(i)/2 << endl;
//     }
    
//     return 0;
// }