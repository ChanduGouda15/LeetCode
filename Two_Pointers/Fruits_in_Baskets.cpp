class Solution {
public:
    int totalFruit(vector<int>& fruits) {
    unordered_map<int,int>mpp;
    int n = fruits.size();
    int l=0;
    int r=0;
    int len_max=0;
    while(r<n)
    {
        mpp[fruits[r]]++;
        whil(mpp.size()>2)
        {
            mpp[fruits[l]]--;
            if(mpp[fruits[l]]==0)
            {
                mpp.erase(fruits[l]);
            }
           l++; 
        }
        if(mpp.size()<=2)
        {
            len_max = max(len_max,r-l+1);
        }
        r++;
    }
    return len_max;
    }
};