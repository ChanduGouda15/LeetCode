class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a=0,b=0,c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) a++;
            else if(nums[i]==1) b++;
            else c++;
        }
        for(int i=0;i<nums.size();i++){
            if(i<a) nums[i]=0;
            if(i>=a && i<a+b) nums[i]=1;
            if(i>=a+b && i<nums.size()) nums[i]=2;
        }
    }
};