// https://codeforces.com/problemset/problem/1560/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  array<int, 1000> tb;
  for (int i = 0, k = 1; i < tb.size(); ++i) {
    for (; !(k % 3) || (k % 10) == 3; ++k)
      ;
    tb[i] = k++;
  }

  int t;
  cin >> t;

  while (t--) {
    int k;
    cin >> k;
    cout << tb[k - 1] << '\n';
  }

  return 0;
}