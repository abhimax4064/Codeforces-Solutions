/*****author: maxifier******/
#include <algorithm>
#include <array>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <stack>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
#include <unordered_set>
using namespace std;
#define int    long long
#define emp    emplace_back
#define pb     push_back
#define ppb    pop_back
#define mp     make_pair
#define all(v) v.begin(),v.end()
#define mod    1000000007
#define inf    1e18
#define lb     lower_bound
#define ub     upper_bound
void maxifier() {
	int a, b;
	cin >> a >> b;

	int ans = a;
	while (true) {
		if (a < b) break;
		ans += a / b;
		a = a / b + a % b;
	}

	cout << ans << "\n";
}
int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int tc, t = 0;
	tc = 1;
	//cin >> tc;
	while (tc--) {
		++t;
		//cout << "Case" << " " << "#" << t << ":" << " ";
		maxifier();
	}
	return 0;
}