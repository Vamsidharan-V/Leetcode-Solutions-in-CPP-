class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // Disable synchronization of input/output streams for faster execution
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        // If the input vector is empty, return 0 as there are no elements
        if (nums.size() == 0) return 0;
        
        // Create a set to store unique elements from the input vector
        set<int> s;
        for (auto i : nums) {
            s.insert(i);
        }
        
        // Create a temporary vector to store the unique elements from the set
        vector<int> temp;
        for (auto i : s) {
            temp.push_back(i);
        }
        
        // Initialize a count to keep track of the current consecutive sequence length
        int count = 1;
        
        // Initialize the maximum consecutive sequence length as 0
        int maxi = 0;
        
        // Iterate over the temporary vector to find the longest consecutive sequence
        for (int i = 0; i < temp.size() - 1; ++i) {
            // If the current element and the next element are not consecutive
            if (temp[i] + 1 != temp[i + 1]) {
                // Update the maximum consecutive sequence length if the current count is greater
                maxi = max(maxi, count);
                // Reset the count to 1 for the next potential consecutive sequence
                count = 1;
            } else {
                // If the current element and the next element are consecutive, increment the count
                count++;
            }
        }
        
        // Check if the last sequence is longer than the previous maximum
        if (count != 0) {
            maxi = max(maxi, count);
        }
        
        // Return the maximum consecutive sequence length
        return maxi;
    }
};
