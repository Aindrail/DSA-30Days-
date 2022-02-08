class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int i = 0;
        if(arr.size()==0)return i;
  for (int j = 1; j < arr.size(); j++) {
    if (arr[i] != arr[j]) {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
    }
};

//Qlink :-https://leetcode.com/problems/remove-duplicates-from-sorted-array/