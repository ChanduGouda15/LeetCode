class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
    set<int>st(begin(arr),end(arr));
    int rank=1;
    unordered_map<int,int>r;
    for(auto it:st){
        r[it]=rank++;
    }
    for(auto &it:arr){
        it=r[it];
    }
    return arr;
    }
};