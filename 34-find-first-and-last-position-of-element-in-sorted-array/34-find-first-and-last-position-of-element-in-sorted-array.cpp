class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i=0;
        int x=-1,y=-1;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                if(x==-1){
                    x=i;
                }
                    y=i;
            }
        }
        ans.push_back(x);
        ans.push_back(y);
        return ans;
    }
};