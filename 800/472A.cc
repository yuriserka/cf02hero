// https://codeforces.com/problemset/problem/472/A

#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long n) {
  if (n == 1) return false;
  for (long long a = 2; a * a <= n; ++a) {
    if (!(n % a)) {
      return false;
    }
  }
  return true;
}

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  for (auto i = 4; i <= n / 2; ++i) {
    if (!isPrime(i) and !isPrime(n - i)) {
      cout << i << ' ' << n - i << '\n';
      break;
    }
  }

  return 0;
}
