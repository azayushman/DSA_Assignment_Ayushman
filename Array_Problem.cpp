/*
Problem: Intersection Values between Two Arrays
Platform: LeetCode
Link: https://leetcode.com/problems/find-common-elements-between-two-arrays

Explanation:
- Count how many elements from nums1 appear in nums2 and vice versa.
- Used nested loops and simple comparisons.
- Time Complexity: O(n*m)

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int answer1 = 0;
        int answer2 = 0;
        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    answer1++;
                    break; 
                }
            }
        }
        for (int i = 0; i < nums2.size(); i++) {
            for (int j = 0; j < nums1.size(); j++) {
                if (nums2[i] == nums1[j]) {
                    answer2++;
                    break;
                }
            }
        }
        return {answer1, answer2};
    }
};

