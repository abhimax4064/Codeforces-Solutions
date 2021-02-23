#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef map<int, int> mii;
typedef map<char, int> mci;
typedef set<int> si;
#define rep1(i,n) for(ll i=1; i<=n; i++)
#define rep(i,n) for(ll i=0; i<n; i++)
#define emp emplace_back
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define mod 1000000007
bool CPT(ll n) {
	return !(n & (n - 1));
}
int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
int lcm(int a, int b)
{
	return (a / gcd(a, b)) * b;
}
ll nC2(ll n) {
	return n * (n - 1) / 2;
}
int countSquares(int a, int b)
{
	return (floor(sqrt(b)) - ceil(sqrt(a)) + 1);
}
bool mycmp(pair<int, int> &a, pair<int , int> &b) {
	return (a.second < b.second);
}
void solve() {
	ll n; cin >> n;
	vi v(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	sort(all(v));
	ll currGranies = 1;
	ll totalGranies = 1;
	ll idx1 = 0, idx2 = -1;
	for (int i = 0; i < n; i++) {
		if ((currGranies) >= v[i]) {
			currGranies += 1;
			totalGranies += 1;
			idx1 = i + 1;
		}
		if (currGranies < v[i]) {
			while (i < n) {
				if (currGranies >= v[i]) idx2 = i + 1;
				currGranies += 1;
				i++;
			}
		}
	}
	if (idx2 < 0) idx2 = idx1;
	//cout << idx1 << " " << idx2 << "\n";
	cout << totalGranies + (idx2 - idx1) << "\n";
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int tt;
	cin >> tt;
	while (tt--)
		solve();
	return 0;
}