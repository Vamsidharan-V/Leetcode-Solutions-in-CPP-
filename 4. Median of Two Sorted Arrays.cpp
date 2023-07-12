class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        // Combine the two input vectors
        vector<int> merged;
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), back_inserter(merged));
        
        // Calculate the size of the merged vector
        int n = merged.size();
        
        // Calculate the median based on the size of the merged vector
        double median = (n % 2 == 0) ? (merged[n/2 - 1] + merged[n/2]) / 2.0 : merged[n/2];
        
        return median;
    }
};
