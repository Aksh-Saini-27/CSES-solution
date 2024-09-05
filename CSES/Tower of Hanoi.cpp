#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;


void solve(int n, int l, int m, int r) {
    if (n == 0) return;
    // Move n-1 disks from l (source) to m (auxiliary) using r (target) as auxiliary
    solve(n - 1, l, r, m);
    // Move the nth disk from l (source) to r (target)
    cout << l << " " << r << endl;
    // Move n-1 disks from m (auxiliary) to r (target) using l (source) as auxiliary
    solve(n - 1, m, l, r);
}

int main() {
    int n;
    cin >> n;

    vector<int> dp(n+1);

    dp[0]=0;
    for(int i=1;i<=n;i++){
        dp[i]=pow(2,i-1) + dp[i-1];
    }
    
    cout <<dp[n]<<endl;

    solve(n, 1, 2, 3);  // Solve the problem with 1 as source, 2 as auxiliary, and 3 as target
    return 0;
}


