# include <iostream>
# include <vector>
using namespace std;

/*
// version 1: target in [left, right]

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right) {
            int middle = left + ((right - left) / 2);  //prevent overflow
            if (nums[middle] > target) {
                right = middle - 1;
            } else if (nums[middle] < target) {
                left = middle + 1;
            } else {
                return middle;
            }
        }
        // no target value found
        return -1;
    }
};

*/


//version 2: target in [left, right)

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();  // no minus
        while (left < right) {
            int middle = left + ((right - left) / 2);  //prevent overflow
            if (nums[middle] > target) {
                right = middle;  // then no plus
            } else if (nums[middle] < target) {
                left = middle + 1;
            } else {
                return middle;
            }
        }
        // no target value found
        return -1;
    }
};


int main()
{
    vector<int> nums;
    int i;
    int target;
    cout << "Enter an array of integers with ascending order(nums): ";
    while (cin >> i) {
        nums.push_back(i);
        if (cin.get() == '\n') {
            break;
        }
    }
    cout << "Enter an integer(target): ";
    cin >> target;
    Solution obj;
    int result = obj.search(nums, target);
    if (result == -1) {
        cout << "No such value in your input array!";
    } else {
        cout << "Index: " << result;
    }
}