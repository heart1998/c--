#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		for (int i = 0; i < nums.size() - 1; ++i) {
			for (int j = i + 1; j < nums.size(); ++j) {
				if (nums[i] + nums[j] == target)
					return { i,j };
			}
		}
		return {};
	}
};

int main() {
	Solution solution;
	vector<int> position;
	vector<int> arr = {1,2,3,4,5,6,7,8,9};
	int target = 5;
	position = solution.twoSum(arr,target);
	for(auto i : position)
		cout << i << endl;
	return 0 ;
}