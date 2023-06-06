//@parameter nums: The integer vector.
//@parameter target: Target to Find.
//@return: Any position of target. Position starts from 0.
#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int mySqrt(int x) {
        long start = 1, end = x;
        while(start+1 < end){
            long mid = start + (end-start) / 2;
            if(mid*mid <= x){
                start = mid;
            }
            else{
                end = mid;
            }
        }
        if(end*end <= x){
            return (int) end;
        }
        return (int) start;
    }
};
int main(){
  Solution S;
  int ans = S.mySqrt(10); 
  cout << ans <<endl;
  return 0;
}

