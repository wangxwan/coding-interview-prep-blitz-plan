// https://leetcode.com/problems/squares-of-a-sorted-array/description/
// 中国区：https://leetcode.cn/problems/squares-of-a-sorted-array/

# include <iostream>
# include <vector>
using namespace std;

// Two-pointer method
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result(nums.size(), 0);
        int resultRight = nums.size() - 1;
        // The maximum must be generated at the left or right ends
        for (int left = 0, right = nums.size() - 1; left <= right;) {
            if (nums[left] * nums[left] < nums[right] * nums[right]) {
                result[resultRight--] = nums[right] * nums[right];
                right--;
            } else {
                result[resultRight--] = nums[left] * nums[left];
                left++;
            }
        }
        return result;
    }
};


int main()
{
    vector<int> nums;
    int i;
    cout << "Enter an array of integers nums sorted in non-decreasing order(nums): ";
    while (cin >> i) {
        nums.push_back(i);
        if (cin.get() == '\n') {
            break;
        }
    }
    Solution obj;
    vector<int> result = obj.sortedSquares(nums);
    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;
}