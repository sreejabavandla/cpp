#include <bits/stdc++.h>

using namespace std;

void pairs()
{
  pair<int, int> p = {1, 2};
  cout << p.first << " and " << p.second << endl;

  pair<pair<int, int>, pair<int, int>> pai = {{1, 4}, {9, 6}};
  cout << pai.first.second << " and " << pai.second.first << endl;
}

void vectors()
{
  vector<int> v1;
  v1.push_back(1);
  v1.emplace_back(2); // faster than push_back

  vector<pair<int, int>> vectPair;
  vectPair.push_back({3, 6});
  vectPair.emplace_back(5, 7);

  vector<int> v2(5, 100); // [100, 100, 100, 100, 100]

  vector<int> v3;
  v3.push_back(34);
  v3.push_back(61);


  // iterator
  vector<int>::iterator it = v3.begin();
  it++;
  cout << *(it) << " "; // v3.begin() points to the memory address, so *(it)
}

int main()
{
  pairs();
  vectors();
}
