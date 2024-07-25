// https://leetcode.com/problems/minimum-size-subarray-sum/description/
// 中国区：https://leetcode.cn/problems/minimum-size-subarray-sum/

# include <iostream>
# include <vector>
using namespace std;

/*
// version 1: Sliding Window approach 
// (a kind of Two-pointer (fast-slow) approach)
// O(n)

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int result = INT_MAX;
        int sum = 0;
        int subLength = 0;
        int slowIndex = 0;
        for (int fastIndex = 0; fastIndex < nums.size(); fastIndex++) {
            sum+=nums[fastIndex];
            while (sum >= target) {
                subLength = fastIndex - slowIndex + 1;
                result = min(result, subLength);
                sum -= nums[slowIndex++];
            }
        }
        if (result == INT_MAX) {
            return 0;
        }
        return result;
    }
};
*/


// version 2: Binary search & sliding window
// O(nlog(n))

class Solution {
public:
    int lengthEnough(int length, vector<int>nums, int target) {
        int sumMax = 0;
        int sum = 0;
        int slowIndex = 0;
        for (int fastIndex = 0; fastIndex < nums.size(); fastIndex++) {
            sum += nums[fastIndex];
            if (fastIndex - slowIndex + 1 == length) {
                sumMax = max(sum, sumMax);
                sum -= nums[slowIndex++];
            }
        }
        if (sumMax >= target) {
            return true;
        }
        return false;
    }
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int right = nums.size() + 1; // Consider the case of just equal
        int result = 0;
        while (left < right) {
            int middle = left + ((right - left) / 2);
            if (lengthEnough(middle, nums, target)) {
                right = middle;
                result = middle;
            } else {
                left = middle + 1;
            }
        }
        return result;
    }
};


int main()
{
    vector<int> nums;
    int target;
    int i;
    cout << "Enter a positive integer target: ";
    cin >> target;
    cout << "Enter an array of positive integers nums: ";
    while (cin >> i) {
        nums.push_back(i);
        if (cin.get() == '\n') {
            break;
        }
    }
    Solution obj;
    cout << "The minimal length of a subarray whose sum is greater than or equal to target: " << obj.minSubArrayLen(target, nums) << endl;
}