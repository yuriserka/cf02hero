// https://leetcode.com/problems/top-k-frequent-words/

#include <bits/stdc++.h>

using namespace std;

class OptimalSolution {
  using Node = pair<string, int>;

 public:
  vector<string> topKFrequent(vector<string> &words, int k) {
    unordered_map<string, int> m;
    for (const string &w : words) ++m[w];

    auto cmp = [](const Node &lhs, const Node &rhs) {
      return lhs.second == rhs.second ? lhs.first > rhs.first
                                      : lhs.second < rhs.second;
    };
    using Queue = priority_queue<Node, std::vector<Node>, decltype(cmp)>;

    Queue q(cmp);
    for (const auto &[k, v] : m) q.push({k, v});

    vector<string> ans;
    while (k--) {
      auto node = q.top();
      q.pop();
      ans.push_back(node.first);
    }
    return ans;
  }
};

class NLogNSolution {
 public:
  vector<string> topKFrequent(vector<string> &words, int k) {
    map<string, int> m;
    for (const string &w : words) ++m[w];

    vector<pair<string, int>> v{begin(m), end(m)};
    sort(begin(v), end(v), [](const auto p1, const auto p2) {
      return p1.second == p2.second ? p1.first < p2.first
                                    : p1.second > p2.second;
    });

    vector<string> ans;
    transform(begin(v), begin(v) + k, back_inserter(ans),
              [](const auto p) { return p.first; });

    return ans;
  }
};