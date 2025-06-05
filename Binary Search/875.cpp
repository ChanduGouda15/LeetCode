class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=*max_element(piles.begin(),piles.end());
        int left=1;
        int right=maxi;
        int ans=INT_MAX;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(calculation(piles,mid)<=h){
                ans=mid;
                right=mid-1;
            }
            else left=mid+1;
        }
        return ans;
    }
private:
    long long calculation(vector<int>& piles,int num){
        long long total=0;
        for(int i=0;i<piles.size();i++){
            total += (piles[i] + num - 1) / num; 
        }
        return total;
    }
};