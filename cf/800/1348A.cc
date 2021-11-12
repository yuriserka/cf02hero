// https://codeforces.com/problemset/problem/1348/A

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

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    cout << fastPow(2, n/2 + 1) - 2 << '\n';
  }

  return 0;
}
