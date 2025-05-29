class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int l=0,r=1,i=0;
        int n=nums.size();
        vector<int>result(n,0);
        while(i<nums.size()){
            if(nums[i]>0){
                result[l]=nums[i];
                l+=2;
            }
            else{
                result[r]=nums[i];
                r+=2;
            }
            i++;
        }
        return result;
    }
};