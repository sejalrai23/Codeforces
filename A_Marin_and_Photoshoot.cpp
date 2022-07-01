#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
		int k;
		cin >> k;
		string s;
		cin >> s ;
		int ans = 0;
		for (int i = 1; i < k; i++) {
			if (s[i] == '0' && s[i - 1] == '0') ans += 2;
			else if (i > 1 && s[i] == '0' && s[i - 1] == '1' && s[i - 2] == '0') ans += 1;
		}
		cout << ans << endl;
	}
	return 0;
}