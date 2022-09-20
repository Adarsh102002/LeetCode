class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int i=0;
        vector<int>ans;
        int n=nums.size()-2;
        sort(nums.begin(),nums.end());
        while(i<=n)
        {
            if(nums[i]==nums[i+1])
            {
            ans.push_back(nums[i]);
            i++;
            }
            else
                i++;
        }
        return ans;
    }
};