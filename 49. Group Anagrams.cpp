class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        vector<vector<string>> ans; // Resulting vector to store grouped anagrams
        vector<pair<string, int>> temp; // Temporary vector to store sorted strings and their original indices
        string k; // Temporary string variable
        
        // Iterate over the input vector
        for (int i = 0; i < strs.size(); ++i) {
            k = strs[i]; // Get the current string
            sort(k.begin(), k.end()); // Sort the string in alphabetical order
            temp.push_back(make_pair(k, i)); // Store the sorted string and its original index in temp
        }
        
        sort(temp.begin(), temp.end()); // Sort temp based on the sorted strings
        
        string pivot = temp[0].first; // Initialize pivot with the first sorted string
        vector<string> ins; // Vector to store the current group of anagrams
        
        // Iterate over temp
        for (auto i : temp) {
            // Check if the current sorted string is different from the pivot
            if (pivot != i.first) {
                ans.push_back(ins); // Add the current group of anagrams to ans
                pivot = i.first; // Update pivot with the new sorted string
                ins.clear(); // Clear ins to start a new group
            }
            
            ins.push_back(strs[i.second]); // Add the original string to the current group
        }
        
        ans.push_back(ins); // Add the last group of anagrams to ans
        return ans;
    }
};
