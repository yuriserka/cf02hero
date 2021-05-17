// https://codeforces.com/problemset/problem/110/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  string s;
  cin >> s;

  map<char, int> m;
  for (auto c : s) ++m[c];

  auto sum = to_string(m['7'] + m['4']);

  cout << (sum.find_first_not_of("47") != std::string::npos ? "NO" : "YES")
       << '\n';

  return 0;
}