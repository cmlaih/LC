//@parameter nums: The integer vector.
//@parameter target: Target to Find.
//@return: The first position of target. Position starts from 0.
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int col = matrix[0].size();
        int left = 0;
        int right = matrix.size()*matrix[0].size() - 1;

        while(left + 1 < right){
        	int mid = left + (right - left) /2;
        	int num = matrix[mid / col][mid % col];
        	if(num == target){
        		return true;
        	}
        	else if (num < target){
        		left = mid;
        	}
        	else{
        		right = mid;
        	}
        }
        if(matrix[left/col][left%col] == target){
        	return true;
        }
        else if (matrix[right/col][right%col] == target){
        	return true;
        }
        return false;
    }
};
int main(){
  vector <vector <int>> v = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
  int target = 3;
  Solution S;
  bool ans = S.searchMatrix(v,target); 
  cout << ans <<endl;
  return 0;
}

