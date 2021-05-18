// https://codeforces.com/problemset/problem/228/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  set<int> si;
  int s;
  for (int i = 0; i < 4; ++i) {
    cin >> s;
    si.insert(s);
  }

  cout << 4 - si.size() << '\n';

  return 0;
}
