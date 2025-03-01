#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        
        int ones1 = 0;
        int ones2 = 0;
        int ones3 = 0;
        int zeroes1 = 0;
        int zeroes2 = 0;
        int zeroes3 = 0;

        for(int i=0; i<n; i++){
            if(s1[i] == '1') ones1++;
            if(s1[i] == '0') zeroes1++;

            if(s2[i] == '1') ones2++;
            if(s2[i] == '0') zeroes2++;

            if(s3[i] == '1') ones3++;
            if(s3[i] == '0') zeroes3++;
        }

        if((zeroes1 + zeroes2 + zeroes3)%n!=0){
            cout << -1 << endl;
            continue;
        }

      int ans1 = min(min(zeroes2, ones2), min(zeroes3, ones3));
      int temp = max(min(zeroes2, ones2), min(zeroes3, ones3));
      int ans2 = min(min(zeroes1,ones1), temp);

      cout << ans1 + ans2 << endl;
    }
}
