#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, p;
        cin >> n >> p;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        vector<int>l(n);
        vector<int>r(n);
        int h = 1e9;
        for(int i=0; i<n; i++){
            if(a[i] == 0){
                h=0;
                l[i] = 0;
            }
            else if(a[i] < h){
                l[i] = h;
            }
            else{
                l[i] = a[i];
                h = a[i];
            }
        }

        for(int i=n-1; i>=0; i--){
            if(a[i] == 0){
                h=0;
                r[i] = 0;
            }
            else if(a[i] <h){
                r[i] = h;
            }
            else{
                r[i] = a[i];
                h = a[i];
            }
        }


        for(int i=0; i<n; i++){
            int mn = min(l[i], r[i]);

            cout << (mn + p -1)/p << " ";
        }
        cout << '\n';

    }
}
