// https://codeforces.com/problemset/problem/339/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  string s;
  cin >> s;

  auto mut_s = s.data();
  auto it = strtok(mut_s, "+");
  vector<int> v;

  while (it) {
    v.push_back(stoi(it));
    it = strtok(NULL, "+");
  }

  sort(begin(v), end(v));

  for (int i = 0; i < v.size(); ++i) {
    cout << v[i] << (i < v.size() - 1 ? "+" : "\n");
  }

  return 0;
}
