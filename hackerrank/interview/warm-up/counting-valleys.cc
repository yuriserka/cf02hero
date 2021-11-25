// https://www.hackerrank.com/challenges/counting-valleys/

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'countingValleys' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER steps
 *  2. STRING path
 */

int countingValleys(int steps, string path) {
  int valleys = 0;
  int lvl = 0;
  for (int i = 0; i < steps;) {
    int factor = path[i++] == 'U' ? 1 : -1;
    if (!lvl && factor < 0) {
      lvl += factor;
      do {
        factor = path[i++] == 'U' ? 1 : -1;
        lvl += factor;
      } while (i < steps && lvl);
      if (!lvl) ++valleys;
    } else {
      lvl += factor;
    }
  }
  return valleys;
}
