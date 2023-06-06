//@parameter nums: The integer vector.
//@parameter target: Target to Find.
//@return: The first position of target. Position starts from 0.
#include <iostream>
#include <vector>
using namespace std;

class Solution{
  public:
  vector<int> searchRange(vector<int>& nums, int target){
    if (nums.size()==0)
      return {-1,-1};
    vector<int> v;
    int first = firstPos(nums,target);
    int last = lastPos(nums, target);
    v.push_back(first);
    v.push_back(last);
    return v;
  }
  int firstPos(const vector<int>& nums, int target){
    int left = 0, right = nums.size() - 1;
    int first;
    while (left + 1 < right) {
      int mid = left + (right - left) / 2;
      if (nums[mid] == target){
        right = mid;
      } 
      else if (nums[mid] < target){
        left = mid;
      }
      else{
        right = mid;
      }
    }
   if(nums[left] == target){
     first = left;
   }
   else if (nums[right] == target){
     first = right;
   }
   else{
     first = -1;
   }
   return first;
  } // end firstPos

  int lastPos(const vector<int>& nums, int target){
    int left = 0, right = nums.size() - 1;
    int last;
    while (left + 1 < right) {
      int mid = left + (right - left) / 2;
      if (nums[mid] == target){
        left = mid;
      } 
      else if (nums[mid] < target){
        left = mid;
      }
      else{
        right = mid;
      }
    }
   if(nums[right] == target){
     last = right;
   }
   else if (nums[left] == target){
     last = left;
   }
   else{
     last = -1;
   }
   return last;
   // end lastPosPos
   }  
};
int main(){
  vector<int> v = {-1,0,3,5,9,9,9,9,9,12};
  int target = 9;
  Solution S;
  vector<int> ans = S.searchRange(v,target); 
  for (size_t i = 0; i < ans.size(); i++) {
        cout << ans.at(i) << "; ";
    }
  return 0;
}
