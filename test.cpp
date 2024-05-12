// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
#include <vector>
int main() {
	int t; 
	scanf("%d", &t);
	while (t--) {
		int n, k;
		scanf("%d%d", &n, &k); 
		vector <pair<int, int> >v;
		for (int i = 0; i < n; ++i) {
			int num; 
			scanf("%d", &num);
			v.push_back(make_pair(num, i));
		}
		sort(v.begin(), v.end());
		int ans = 0; 
		for (int i = 1; i < v.size(); ++i) {
		//	if (i)
		//		cout<<v[i]<<" "<<v[i-1]<<" "<<v1[i]<<" "<<v1[i-1]<<endl; 
			if (v[i].second-1 != v[i-1].second)
					ans++;
		}
		ans++;
		if (ans > k)
			puts("No");
		else 
			puts("Yes"); 
			
		v.clear();

	}
	return 0;
}