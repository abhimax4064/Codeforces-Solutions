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
	string str;
	cin >> str;

	for (int i = 0; i < str.size() - 1; i++) {
		if ((str[i] - str[i + 1]) == 0 && str[i] != '?') {
			cout << "-1\n";
			return;
		}
	}

	if (str.size() == 1) {
		if (str[0] == '?') {
			cout << 'a' << "\n";
			return;
		}
	}
	stack<char> st;

	for (int i = 0; i < str.size(); i++) {
		if (st.empty()) {
			st.push(str[i]);
		}
		else {
			char ch1 = st.top();

			if (ch1 == '?') {
				if (str[i] == '?') {
					if (str[i + 1] == 'a' && i <= str.size() - 2) {
						str[i - 1] = 'b';
						str[i] = 'c';
					}
					else if (str[i + 1] == 'b' && i <= str.size() - 2) {
						str[i - 1] = 'a';
						str[i] = 'c';
					}
					else if (str[i + 1] == 'c' && i <= str.size() - 2) {
						str[i - 1] = 'a';
						str[i] = 'b';
					}
					else {
						str[i] = 'a';
						str[i - 1] = 'b';
					}
				}
				else if (str[i] == 'a') {
					str[i - 1] = 'b';
				}
				else if (str[i] == 'b') {
					str[i - 1] = 'a';
				}
				else if (str[i] == 'c') {
					str[i - 1] = 'a';
				}
			}
			else if (ch1 == 'a') {
				if (str[i] == '?') {
					if (str[i + 1] == 'b' && i <= str.size() - 2) str[i] = 'c';
					else if (str[i + 1] == 'c' && i <= str.size() - 2) str[i] = 'b';
					else if (str[i + 1] == 'a' && i <= str.size() - 2) str[i] = 'b';
					else str[i] = 'b';
				}
			}
			else if (ch1 == 'b') {
				if (str[i] == '?') {
					if (str[i + 1] == 'c' && i <= str.size() - 2) str[i] = 'a';
					else if (str[i + 1] == 'a' && i <= str.size() - 2) str[i] = 'c';
					else if (str[i + 1] == 'b' && i <= str.size() - 2) str[i] = 'a';
					else str[i] = 'c';
				}
			}
			else if (ch1 == 'c') {
				if (str[i] == '?') {
					if (str[i + 1] == 'b' && i <= str.size() - 2) str[i] = 'a';
					else if (str[i + 1] == 'c' && i <= str.size() - 2) str[i] = 'b';
					else if (str[i + 1] == 'a' && i <= str.size() - 2) str[i] = 'b';
					else str[i] = 'a';
				}
			}
			st.push(str[i]);
		}
	}

	if (str[str.size() - 1] == '?') {
		if (str[str.size() - 2] == 'a') str[str.size() - 1] = 'b';
		else if (str[str.size() - 2] == 'b') str[str.size() - 1] = 'a';
		else if (str[str.size() - 2] == 'c') str[str.size() - 1] = 'b';
	}

	cout << str << "\n";
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
	cin >> tc;
	while (tc--) {
		++t;
		//cout << "Case" << " " << "#" << t << ":" << " ";
		maxifier();
	}
	return 0;
}