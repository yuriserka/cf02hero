// https://codeforces.com/problemset/problem/749/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> ans;

  for (int i = 0; i < n / 2; ++i) {
    ans.push_back(2);
  }

  if (n % 2) {
    ans.pop_back();
    ans.push_back(3);
  }

  auto l = ans.size();
  cout << l << '\n';
  for (int i = 0; i < l; ++i) {
    cout << ans[i] << (i < l - 1 ? ' ' : '\n');
  }

  return 0;
}
