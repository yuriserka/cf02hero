// https://codeforces.com/problemset/problem/1352/A

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
    string n;
    cin >> n;

    reverse(n.begin(), n.end());

    vector<long long> ns;
    for (int i = 0; i < n.size(); ++i) {
      long long a = (n[i] - '0') * fastPow(10, i);
      if (a) ns.push_back(a);
    }

    cout << ns.size() << '\n';
    for (int i = 0; i < ns.size(); ++i)
      cout << ns[i] << (i < ns.size() - 1 ? ' ' : '\n');
  }

  return 0;
}
