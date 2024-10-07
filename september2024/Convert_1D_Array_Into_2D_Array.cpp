#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    static vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        const int sz = original.size();
        if (sz != m * n) return {};
        vector<vector<int>> ans(m);
        for(int i = 0; i < m; i++) {
            ans[i].assign(original.begin() + i * n, original.begin() + (i + 1) * n);
        }
        return ans;
    }
};

int main() {
    vector<int> original = {1, 2, 3, 4, 5, 6};
    int m = 2, n = 3;

    Solution sol;
    vector<vector<int>> result = sol.construct2DArray(original, m, n);

    if(result.empty()) {
        cout << "Cannot construct a 2D array with the given dimensions.\n";
    } else {
        for (const auto& row : result) {
            for (int val : row) {
                cout << val << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
