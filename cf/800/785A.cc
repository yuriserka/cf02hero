// https://codeforces.com/problemset/problem/785/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  map<string, int> lookup = {{"Tetrahedron", 4},
                             {"Cube", 6},
                             {"Octahedron", 8},
                             {"Dodecahedron", 12},
                             {"Icosahedron", 20}};
  vector<string> v(n);
  for (auto &p : v) cin >> p;

  auto ans = accumulate(begin(v), end(v), 0, [&lookup](auto acc, auto p) {
    return acc + lookup[p];
  });

  cout << ans << '\n';

  return 0;
}
