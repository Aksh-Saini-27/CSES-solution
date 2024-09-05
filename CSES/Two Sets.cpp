#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

bool solve(vector<int> &arr, int idx, vector<int> &first, vector<int> &second, int sum, int target) {
    if (sum == target) return true;
    
    if (idx == arr.size()) return false;

    bool a = false;
    if (sum + arr[idx] <= target) {
        first.push_back(arr[idx]);
        a = solve(arr, idx + 1, first, second, sum + arr[idx], target);
        if (a) return true;
        first.pop_back();  // Backtrack
    }
    
    bool b = solve(arr, idx + 1, first, second, sum, target);
    
    return a || b;
}

int main() {
    int n;
    cin >> n;
    int sum = 0;
    vector<int> arr;
    
    for (int i = 1; i <= n; i++) {
        arr.push_back(i);
        sum += i;
    }
    
    vector<int> first;
    vector<int> second;

    if (sum % 2 != 0) {
        cout << "NO" << endl;
    } else {
        int target = sum / 2;
        if (solve(arr, 0, first, second, 0, target)) {
            cout << "YES" << endl;

            cout << first.size() << endl;
            for (int i : first) {
                cout << i << " ";
            }
            cout << endl;

            for (int i : arr) {
                if (find(first.begin(), first.end(), i) == first.end()) {
                    second.push_back(i);
                }
            }
            cout << second.size() << endl;
            for (int i : second) {
                cout << i << " ";
            }
            cout << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
