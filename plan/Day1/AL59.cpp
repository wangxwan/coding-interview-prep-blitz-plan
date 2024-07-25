// https://leetcode.com/problems/spiral-matrix-ii/description/
// 中国区：https://leetcode.cn/problems/spiral-matrix-ii/


# include <iostream>
# include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int> (n, 0));
        int start = 0;
        int loop = n / 2;
        int offset = 1;
        int count = 1;
        int i, j;
        while (loop--) {
            for (j = start; j < n - offset; j++) {
                matrix[start][j] = count++;
            }
            for (i = start; i < n - offset; i++) {
                matrix[i][j] = count++;
            }
            for (; j > start; j--) {
                matrix[i][j] = count++;
            }
            for (; i > start; i--) {
                matrix[i][j] = count++;
            }
            start++;
            offset++;
        }
        if (n % 2) {
            matrix[n / 2][n / 2] = count;
        }
        return matrix;
    }
};

int main()
{
    vector<vector<int>> matrix;
    int n;
    cout << "Enter a positive integer(n): ";
    cin >> n;
    Solution obj;
    matrix = obj.generateMatrix(n);
    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << "[";
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j];
            if (j < n - 1) {
                cout << ",";
            }
        }
        cout << "]";
        if (i < n - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;
}