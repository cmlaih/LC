class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        int target = nums[nums.size()-1];

        while (start + 1 < end){
            int mid = start + (end - start) / 2;
            if (nums[mid] <= target){
                end = mid;
            }
            else{
                start = mid;
            }
        }
        if (nums[start] <= target){
            return nums[start];
        }
        else{
            return nums[end];
        }
    }
};