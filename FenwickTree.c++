#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class FenwickTree {
private:
    int n;
    vector<int> bit;
    vector<int> nums;

    void add(int index, int value) {
        while (index <= n) {
            bit[index] += value;
            index += (index & -index);
        }
    }

    int query(int index) {
        int sum = 0;

        while (index > 0) {
            sum += bit[index];
            index -= (index & -index);
        }

        return sum;
    }

public:
    FenwickTree(vector<int>& nums) {
        this->nums = nums;
        n = nums.size();
        bit.assign(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            add(i , nums[i-1]);
        }
    }

    void update(int index, int val) {
        int diff = val - nums[index];
        nums[index] = val;

        add(index + 1, diff);
    }

    int sumRange(int left, int right) {
        return query(right + 1) - query(left-1+1);
    }
};
