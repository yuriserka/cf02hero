// https://codeforces.com/problemset/problem/977/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;

  for (int i = 0; i < k; ++i) {
    if (!(n % 10))
      n /= 10;
    else
      --n;
  }

  cout << n << '\n';

  return 0;
}
