class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        if(nums.size()==0) return 0;
        set<int> s;
        for(auto i:nums) s.insert(i);
        vector<int> temp;
        for(auto i:s) temp.push_back(i);
        int count =1,maxi=0;
        for(int i=0;i<temp.size()-1;++i)
        {
            if(temp[i]+1!=temp[i+1])
            {
                maxi = max(maxi,count);
                count = 1;
            }
            else
            {
                count++;
            }
        }
        if(count!=0) maxi = max(maxi,count);
        return maxi;
    }
};