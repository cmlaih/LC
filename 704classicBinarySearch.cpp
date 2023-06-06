//@parameter nums: The integer vector.
//@parameter target: Target to Find.
//@return: Any position of target. Position starts from 0.
#include <iostream>
#include <vector>
using namespace std;


class Solution {
  public:
  int search(vector<int>& nums, int target) {
    int pivot, left = 0, right = nums.size() - 1;
    while (left <= right) {
      pivot = left + (right - left) / 2;
      if (nums[pivot] == target) return pivot;
      if (target < nums[pivot]) right = pivot - 1;
      else left = pivot + 1;
    }
    return -1;
  }
};
int main(){
  vector<int> v = {-1,0,3,5,9,12};
  int target = 9;
  Solution S;
  int ans = S.search(v,target); 
  cout << ans <<endl;
  return 0;
}