/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

#include <string>
#include <algorithm>
using std::string;
using std::to_string;
using std::reverse;

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
      if(x < 0) return false;
      string x_str = to_string(x);
      string x_str_cp = x_str;
      reverse(x_str_cp.begin(), x_str_cp.end());
      if(x_str == x_str_cp) return true;
      else return false;
    }
};
// @lc code=end

