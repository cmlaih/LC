// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1;
        int end = n;
        int ans = n;
        while(start + 1 < end){
            int mid = start + (end - start) / 2;
            if(isBadVersion(mid) == true){
                end = mid;
            }
            else{
                start = mid;
            }
        }
        if(isBadVersion(start)){
            ans = start;
        }
        else{
            ans = end;
        }
        return ans;
    }
};