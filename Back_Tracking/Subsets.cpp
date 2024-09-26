class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums){
    int n=nums.size();
    vector<vector<int>>v;
    vector<int>ans;                      //approach:power - set (Bit manipulation)
    for(int i=0;i<(1<<n);i++){
        ans.clear();                    //TC - O(2^n*n)
        for(int j=0;j<n;j++){           //SC - O(1)
            if(i&(1<<j)) ans.push_back(nums[j]);
        }
        v.push_back(ans);
    }
    return v;
    }
};