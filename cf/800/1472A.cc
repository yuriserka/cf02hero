// https://codeforces.com/problemset/problem/1472/A

#include <bits/stdc++.h>

using namespace std;

long long fastPow(long long b, long long n, long long MOD = 1000000007) {
  long long r = 1;
  while (n) {
    if (n % 2) {
      r = (r * b) % MOD;
    }
    b = (b * b) % MOD;
    n >>= 1;
  }
  return r;
}

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  const auto count_div = [](int x) {
    long long res = 0;
    while (!(x % 2)) {
      x /= 2;
      ++res;
    }
    return res;
  };

  int t;
  cin >> t;

  while (t--) {
    long long w, h, n;
    cin >> w >> h >> n;

    long long ans = fastPow(2, count_div(w)) * fastPow(2, count_div(h));

    cout << (ans >= n ? "YES" : "NO") << '\n';
  }

  return 0;
}
