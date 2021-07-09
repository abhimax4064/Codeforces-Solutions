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

#define int         long long int
#define emp         emplace_back
#define pb          push_back
#define ppb         pop_back
#define mp          make_pair
#define all(v)      v.begin(), v.end()
#define uniq(v)     (v).erase(unique(all(v)), (v).end())
#define lb          lower_bound
#define ub          upper_bound

const int inf = 1e18;
const int64_t mm = 1e9 + 7;
const int64_t mmm = 998244353;
const long double eps = 1e-6;

void FCF() {
   int n;
   cin >> n;

   string str = "";
   for (int i = 0; i < 2 * n; i++) {
      int x;
      cin >> x;
      str += (x + '0');
   }

   string str1 = str;
   int ans1 = 0, ans2 = 0;
   for (int i = 0; i < str.size(); i++) {

      int idx = str.rfind(str[i]);

      int val = (2 * n - idx - 1);

      for (int j = idx; j > i + 1; j--) {
         swap(str[j], str[j - 1]);
         ans1++;
      }

      i += 1;

   }

   reverse(str1.begin(), str1.end());

   for (int i = 0; i < str1.size(); i++) {

      int idx = str1.rfind(str1[i]);

      int val = (2 * n - idx - 1);

      for (int j = idx; j > i + 1; j--) {
         swap(str1[j], str1[j - 1]);
         ans2++;
      }

      i += 1;
   }
   
   cout << min(ans1, ans2) << "\n";
}

int32_t main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif

   int tc, t = 0;
   tc = 1;
   //cin >> tc;
   while (tc--) FCF();
   return 0;
}
