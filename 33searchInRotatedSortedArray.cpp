class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int mid;

        while(start + 1 < end){
            mid = start + (end - start) / 2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[start] < nums[mid]){
                if (nums[start] <= target && target <= nums[mid]){
                    end = mid;
                }
                else{
                    start = mid;
                }
            }
            else{
                if (nums[mid] <= target && target <= nums[end]){
                    start = mid;
                }
                else{
                    end = mid;
                }
            }
        }//end while
        if (nums[start] == target){
            return start;
        }
        if (nums[end] == target)
            return end;
        return -1;
    }
};