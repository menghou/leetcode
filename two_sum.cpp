//
// Created by houmeng on 17-10-19.
//

#include <vector>
#include <iostream>

using std::vector;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        for (vector<int>::size_type ix = 0; ix != nums.size(); ix ++ ) {
            int vix = nums[ix];
            for (vector<int>::size_type jx = ix + 1; jx != nums.size(); jx ++) {
                int vjx = nums[jx];
                if (vix + vjx == target){
                    res.push_back(ix);
                    res.push_back(jx);
                    return res;
                }
            }
        }
    }
};


int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    Solution solution;
    vector<int> res = solution.twoSum(nums, target);

    using std::cout;
    using std::endl;

    for (vector<int>::size_type ix = 0; ix != res.size(); ix ++ ) {
            cout << res[ix] << endl;
    }

    return 0;
}
