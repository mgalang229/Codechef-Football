#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	int t;
	cin >> t;
	while(t--) {
		int a[150], b[150], n;
		cin >> n;
		for(int i=0; i<n; ++i)
			cin >> a[i];
		for(int i=0; i<n; ++i)
			cin >> b[i];
		int mx=0;
		for(int i=0; i<n; ++i) {
			int tmp=(a[i]*20);
			mx=max(mx, tmp-(10*b[i]));
		}
		cout << mx << "\n";
	}
}
