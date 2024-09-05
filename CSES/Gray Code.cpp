#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;


vector<string> generateGrayCode(int n) {
    vector<string> grayCodes;
    int total = 1 << n;  // Total number of Gray codes (2^n)

    for (int i = 0; i < total; i++) {
        int gray = i ^ (i >> 1);  // Generate the Gray code using the formula
        string binary = bitset<32>(gray).to_string();  // Convert to binary string
        grayCodes.push_back(binary.substr(32 - n));  // Keep only the n bits
    }

    return grayCodes;
}

int main() {
    int n;
    cin >> n;  // Input number of bits

    vector<string> grayCodes = generateGrayCode(n);

    for (const string &code : grayCodes) {
        cout << code << endl;  // Print each Gray code
    }

    return 0;
}

// string getBinary(int n){
//     string ans="";
//     while(n!=0){
//         string += to_string(n%2);
//         n=n/2;
//     }
//     return reverse(ans.begin(), ans.end());
// }

// void solve(vector<int> &bits, int &idx){
//     if(bits.empty()) return;

//     int n = bits.size();
//     for(int i=0;i<n;i++){
//         int mask = (idx ^ bits[i]);
//         if(__builtin_popcount(mask) == 1){
//             cout << getBinary(bits[i]) << endl;
//             idx=bits[i];
//             bits.erase(bits.begin() + i);
//             break;
//         }
//     }
//     solve(bits, idx);
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int> bits(pow(2,n)-1);
//     for(int i=1;i<pow(2,n);i++){
//         //bits.push_back(getBinary(i));
//         bits.push_back(i);

//     }
//     for(int i=0;i<n;i++){
//         cout << '0';
//     }
//     cout <<endl;
//     solve(bits,0);
    

//     return 0;
// }