#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

// # ITERATIVE SOLUTION


int main(){
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;

        if (a > b) swap(a, b);  // Ensure a <= b

        if ((a + b) % 3 == 0 && 2 * a >= b) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}



// # RECURSIVE SOLUTION

// int solve(int a, int b, vector<vector<int>> &dp) {
//     if (a < 0 || b < 0) return 0;
//     if (a == 0 && b == 0) return 1;

//     if (dp[a][b] != -1) return dp[a][b];

//     bool n = solve(a-2, b-1, dp);
//     bool m = solve(a-1, b-2, dp);

//     return dp[a][b] = static_cast<int>(n || m);
// }

// int solve_dp(int a, int b) {
//     vector<vector<int>> dp(a + 1, vector<int>(b + 1, 0));
//     dp[0][0] = 1;

//     for (int i = 0; i <= a; i++) {
//         for (int j = 0; j <= b; j++) {
//             if (i == 0 && j == 0) continue;

//             bool n = (i >= 2 && j >= 1) ? dp[i-2][j-1] : 0;
//             bool m = (i >= 1 && j >= 2) ? dp[i-1][j-2] : 0;

//             dp[i][j] = static_cast<int>(n || m);
//         }
//     }

//     return dp[a][b];
// }

// int main(){
//     int t;
//     cin >> t;
//     while (t--) {
//         int a, b;
//         cin >> a >> b;
//         vector<vector<int>> dp(a + 1, vector<int>(b + 1, -1));

//         //int ans = solve(a, b, dp);

//         int ans = solve_dp(a,b);

//         if (ans == 1) cout << "YES" << endl;
//         else cout << "NO" << endl;
//     }
    
//     return 0;
// }
