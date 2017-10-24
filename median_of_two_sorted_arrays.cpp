//
// Created by houmeng on 17-10-24.
//
/*
Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).

Example 1:
nums1 = [1, 3]
nums2 = [2]

The median is 2.0
Example 2:
nums1 = [1, 2]
nums2 = [3, 4]

The median is (2 + 3)/2 = 2.5

 */
#include <vector>
#include <iostream>
using std::vector;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        int total = m + n;
        if (total & 1) {
            return findKthVale(nums1, nums2, total/2-1);
        } else {
            return (findKthVale(nums1, nums2, total/2) +
                   findKthVale(nums1, nums2, total/2 - 1))/2;
        }
    }
};

double findKthVale(vector<int>& nums1, vector<int>& nums2, int k) {
    size_t m = nums1.size(), n = nums2.size();
    if (m > n) {
        return findKthVale(nums2, nums1, k);
    }
    if (m == 0) {
        return nums2[k-1];
    }

    int pl = min(k/2, m), pr = k - pl;

    if (nums1[pl - 1] < nums2[pr - 1] ) {
        vector<int> newNums1(nums1.begin() + pl, nums1.end());
        return findKthVale(newNums1, nums2, k - pl);
    } else if (nums1[p1 - 1] > nums2[pr - 1]) {
        vector<int> newNums2(nums2.begin() + pr, nums2.end());
        return findKthVale(nums1, newNums2, k - pr);
    } else {
        return nums1[pl-1];
    }
}



