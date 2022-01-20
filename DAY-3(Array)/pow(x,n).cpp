class Solution {
public:
    double myPow(double x, int n) {
       double ans = 1.0;
  long long nn = n;
  if (nn < 0) nn = -1 * nn;
  while (nn) {
    if (nn % 2) {
      ans = ans * x;
      nn = nn - 1;
    } else {
      x = x * x;
      nn = nn / 2;
    }
  }
  if (n < 0) ans = (double)(1.0) / (double)(ans);
  return ans; 
    }
};

// Qlink :- https://leetcode.com/problems/powx-n/submissions/
// TC :- O(log n) SC :- O(1)
// Approach :- Keep on iterating until nn is greater than zero, now if nn is an odd power then multiply x with ans ans reduce nn by 1. Else multiply x with itself and divide nn by two.