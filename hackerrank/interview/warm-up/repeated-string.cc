// https://www.hackerrank.com/challenges/repeated-string/

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'repeatedString' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. LONG_INTEGER n
 */

long repeatedString(string s, long n) {
  long long len = s.length();
  long long whole = (n / len) * count(begin(s), end(s), 'a');
  long long frac = count(begin(s), begin(s) + (n % len), 'a');
  return whole + frac;
}
