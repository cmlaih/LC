#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int position;
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
        if(nums[left] >= target){
            position = left;
        }
        else if (nums[left] < target && nums[right] > target){
            position = left + 1;
        }
        else if (nums[right] < target){
            position = right + 1;
        }
        return position;    
    }

};
int main(){
  vector<int> v = {-1,0,3,5,8,12};
  int target = 9;
  Solution S;
  int ans = S.searchInsert(v,target); 
  cout << ans << endl; 
  return 0;
}
