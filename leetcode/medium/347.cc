// https://leetcode.com/problems/top-k-frequent-elements/

#include <bits/stdc++.h>

using namespace std;

class OptimalSolution {
  using Node = pair<int, int>;

 public:
  vector<int> topKFrequent(vector<int> &nums, int k) {
    unordered_map<int, int> m;
    for (const int &n : nums) ++m[n];

    auto cmp = [](const Node &lhs, const Node &rhs) {
      return lhs.second < rhs.second;
    };
    using Queue = priority_queue<Node, std::vector<Node>, decltype(cmp)>;

    Queue q(cmp);
    for (const auto &[k, v] : m) q.push({k, v});

    vector<int> ans;
    while (k--) {
      auto node = q.top();
      q.pop();
      ans.push_back(node.first);
    }
    return ans;
  }
};

class NlogNSolution {
 public:
  vector<int> topKFrequent(vector<int> &nums, int k) {
    map<int, int> m;
    for (const int &n : nums) ++m[n];

    vector<pair<int, int>> v{begin(m), end(m)};
    sort(begin(v), end(v),
         [](const auto p1, const auto p2) { return p1.second > p2.second; });

    vector<int> ans;
    transform(begin(v), begin(v) + k, back_inserter(ans),
              [](const auto p) { return p.first; });

    return ans;
  }
};