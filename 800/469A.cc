// https://codeforces.com/problemset/problem/469/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  set<int> s;
  int p;
  for (int i = 0; i < 2; ++i) {
    cin >> p;

    int a;
    for (int j = 0; j < p; ++j) {
      cin >> a;
      s.insert(a);
    }
  }

  cout << (s.size() == n ? "I become the guy." : "Oh, my keyboard!") << '\n';

  return 0;
}
