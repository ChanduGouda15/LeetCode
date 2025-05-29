class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x=0;
        for(int i=0;i<nums.size();i++){ // bit manipulation
            x^=nums[i];
        }
        return x;
    }
};