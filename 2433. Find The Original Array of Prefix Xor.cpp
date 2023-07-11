class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        // Disable synchronization of input/output streams for faster execution
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        // If the size of the given prefix array is less than or equal to 1, 
        // return the array itself as there are no operations to perform.
        if (pref.size() <= 1) {
            return pref;
        }
        
        // Create a vector to store the elements of the original array
        vector<int> ans;
        
        // Take the first element of the prefix array as the pivot
        int pivot = pref[0];
        
        // Add the pivot to the answer vector
        ans.push_back(pivot);
        
        // Iterate over the remaining elements of the prefix array
        for (int i = 1; i < pref.size(); ++i) {
            // XOR the pivot with the current element and add it to the answer vector
            ans.push_back(pivot ^ pref[i]);
            
            // Update the pivot to the current element
            pivot = pref[i];
        }
        
        // Return the resulting vector containing the elements of the original array
        return ans;
    }
};
