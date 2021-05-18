// https://codeforces.com/problemset/problem/486/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  long long n;
  cin >> n;

  auto k_odd = ((n - 1L) / 2L) + 1L;
  auto k_even = n - k_odd;

  auto even_sum = k_even * (k_even + 1);
  auto odd_sum = k_odd * k_odd;

  cout << even_sum - odd_sum << '\n';

  return 0;
}
