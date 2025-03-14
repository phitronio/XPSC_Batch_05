#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>x(n);
        vector<int>y(n);
        for(int i=0; i<n; i++){
            cin >> x[i];
        }
        for(int i=0; i<n; i++){
            cin >> y[i];
        }

        bool found = false;

        for(int i=0; i<n; i++){
            int pivot = x[i];
            vector<pair<int,int>>v;
            for(int j=0; j<n; j++){
                v.push_back({abs(x[j]-pivot), x[j]});
            }
            sort(v.begin(), v.end());

            vector<int>temp(n);
            for(int j=0; j<n; j++){
                temp[j] = v[j].second;
            }
            if(temp==y){
                cout << i+1 << endl;
                found = true;
                break;
            }
        }
        if(found==false){
            cout << -1 << endl;
        }
        
    }
}
