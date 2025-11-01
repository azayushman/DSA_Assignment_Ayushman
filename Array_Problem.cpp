/*
Problem: Intersection Values between Two Arrays
Platform: LeetCode
Link: https://leetcode.com/problems/find-common-elements-between-two-arrays

Explanation:
- Count how many elements from nums1 appear in nums2 and vice versa.
- Used nested loops and simple comparisons.
- Time Complexity: O(n*m)

#include <iostream>
using namespace std;
class Solution {
public:
    void findIntersectionValues(int nums1[], int n, int nums2[], int m) {
        int answer1 = 0, answer2 = 0;
        for (int i = 0; i < n; i++) {
            int found = 0;
            for (int j = 0; j < m; j++) {
                if (nums1[i] == nums2[j]) {
                    found = 1;
                    break;
                }
            }
            if (found) answer1++;
        }
        for (int i = 0; i < m; i++) {
            int found = 0;
            for (int j = 0; j < n; j++) {
                if (nums2[i] == nums1[j]) {
                    found = 1;
                    break;
                }
            }
            if (found) answer2++;
        }
        cout << "Result: [" << answer1 << ", " << answer2 << "]" << endl;
    }
};
