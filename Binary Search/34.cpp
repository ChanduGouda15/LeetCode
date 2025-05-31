class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    vector<int>ans(2,-1);
    int n=nums.size();
    auto lower_bound = std::lower_bound(nums.begin(),nums.end(),target);
    auto upper_bound = std::upper_bound(nums.begin(),nums.end(),target);
    if(lower_bound!=nums.end() && *lower_bound==target ){
        ans[0]=lower_bound-nums.begin();
        ans[1]=upper_bound-nums.begin()-1;
    }
    return ans; 
    }
};