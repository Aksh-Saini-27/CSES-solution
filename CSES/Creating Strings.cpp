#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

void solve(string s, int size, string psf, set<string> &p){
    if(size==1){
        psf+=s[0];
        p.insert(psf);
        return;
    }
    for(int i=0;i<size;i++){
        solve(s.substr(0,i) + s.substr(i+1,size), size-1, psf + s[i], p);
    }
}

int main(){
    
    string s;
    cin>>s;
    int n = s.size();
    set<string> p;
    solve(s,n,"",p);
    cout << p.size() << endl;
    for(auto it : p){
        cout << it << endl;
    }
    
    return 0;
}