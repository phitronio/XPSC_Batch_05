#include <bits/stdc++.h>
using namespace std;

bool isAlternating(string s){
    for(int i=0; i<s.size()-1; i++){
        if(s[i]==s[i+1]) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        string s; 
        cin >> s;
        int ones=0;
        int zeroes=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='0') zeroes++;
            else ones++;
        }

        int diff = abs(ones-zeroes);

        if(diff<=1){
            if(isAlternating(s)){
                cout << 0 << endl;
            }
            else cout << 1 << endl;
        }
        else if(diff<=3){
            cout << 2 << endl;
        }
        else cout << 3 << endl;
    }

}
