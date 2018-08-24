#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>
#include <map>
using namespace std;
  
  int main() {
        int n;
        cin >> n;
        map <int, vector <int>> mp;
        vector <int> used(n + 1, 0);
        
        for (int i = 0; i < n; i++) {
              int a;
              cin >> a;
              nums.push_back(a);
              
              for (int j = 0; j < n; j++) {
                    if (nums[i] == nums[j] && !used[j]) {
                          mp[i].push_back(j);
                    }
              }
        }
        
        int k;
        cin >> k;
        
        for (int i = 0; i < k; i++) {
              int a, b, c;
              cin >> a >> b >> c;
              
              if (mp[c] != null) {
                    cout << mp[c][a] - mp[c][b];
              }
        }
        
        return 0;
  }