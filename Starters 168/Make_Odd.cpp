#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string a, b;
	    cin >> a >> b;
	    int on=0, onzero=0;
	    for(int i=0; i<n; i++){
	        if(a[i]=='1' && b[i]=='1') on++;
	        else if(a[i]=='1' && b[i]=='0') onzero++;
	        else if(a[i]=='0' && b[i]=='1') onzero++;
	    }
	    
	    if(on%2==1 or onzero>=1){
	        cout << "YES" << '\n';
	    }
	    else {
	        cout << "NO" << '\n';
	    }
	}

}
