class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int>s;
    unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++)
    {
        if(mp.find(target-nums[i])!=mp.end())
        {
            s.push_back(mp[target-nums[i]]);
            s.push_back(i);
        }
        mp[nums[i]]=i;
    }
    return s;
    }
};