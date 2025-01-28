#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n, x, k;
        cin >> n >> x >> k;
        string s; 
        cin >> s;
        int one=0;
        long long inv=0;
        for(int i=0; i<n; i++){
            if(s[i]=='1') one++;
            else{
                inv+=one;
            }
        }
        if(inv<=x && inv%k==0){
            cout << 1 << endl;
        }
        else cout << 2 << endl;
    }

}
