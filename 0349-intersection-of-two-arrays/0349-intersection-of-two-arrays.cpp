class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(), nums1.end()); // store unique elements of nums1
        unordered_set<int> res;  // to store result (unique intersection)

        for (int num : nums2) {
            if (s1.count(num)) {  // if num exists in nums1
                res.insert(num);
            }
        }

        // convert set to vector
        return vector<int>(res.begin(), res.end());
    }
};
