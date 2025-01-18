#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        for(int i=0; i<n; i++){
            if(s[i] == '0') s[i] = '1';
            else s[i] = '0';
        }
        cout << s << '\n';
    }
}
