#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n], b[n];
		for(int i=0; i<n; ++i)
			cin >> a[i];
		for(int i=0; i<n; ++i)
			cin >> b[i];
		sort(a, a+n);
		for(int i=0; i<n; ++i)
			cout << a[i] << " ";
		cout << "\n";
		sort(b, b+n);
		for(int i=0; i<n; ++i)
			cout << b[i] << " ";
		cout << "\n";
	}
}
