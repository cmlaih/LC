class Solution {
public:
int findPeakElement(vector<int>& nums) {
    
    int start = 0;
    int end = nums.size()-1;
    int mid;
    
    while(start + 1 < end){
        int mid = start + (end-start)/2;
        if (nums[mid-1] < nums[mid] && nums[mid+1] < nums[mid]){
            return mid;
        }
        else if(nums[mid] > nums[mid+1]){
            end = mid;
        }
        else{
            start = mid;
        }
    }
    if(end == 0)
        return 0;
    if(nums[start+1] < nums[start]){
        return start;
    }
    else{
        return end;
    }
  }
};