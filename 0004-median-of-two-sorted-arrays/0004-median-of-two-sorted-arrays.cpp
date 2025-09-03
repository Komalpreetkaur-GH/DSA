class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1); // Ensure nums1 is smaller
        }

        int m = nums1.size(), n = nums2.size();
        int left = 0, right = m;

        while (left <= right) {
            int i = (left + right) / 2;              // partition for nums1
            int j = (m + n + 1) / 2 - i;             // partition for nums2

            int maxLeft1 = (i == 0) ? INT_MIN : nums1[i-1];
            int minRight1 = (i == m) ? INT_MAX : nums1[i];
            
            int maxLeft2 = (j == 0) ? INT_MIN : nums2[j-1];
            int minRight2 = (j == n) ? INT_MAX : nums2[j];

            if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
                if ((m + n) % 2 == 0) {
                    return (max(maxLeft1, maxLeft2) + min(minRight1, minRight2)) / 2.0;
                } else {
                    return max(maxLeft1, maxLeft2);
                }
            } else if (maxLeft1 > minRight2) {
                right = i - 1; // Move left
            } else {
                left = i + 1; // Move right
            }
        }

        return 0.0; // should never reach here
    }
};
