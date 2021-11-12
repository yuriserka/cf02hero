// https://codeforces.com/problemset/problem/1371/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int t;
  cin >> t;

  while (t--) {
    long long n;
    cin >> n;

    long long sum = (n * (n + 1)) / 2;
    cout << sum / n << '\n';
  }

  return 0;
}
