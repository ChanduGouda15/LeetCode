// class Solution {
// public:
//     char findTheDifference(string s, string t) {
//     sort(s.begin(),s.end());
//     sort(t.begin(),t.end());
//     for(int i=0;i<s.size();i++){
//         if(s[i]!=t[i]) return t[i]; //using sorting
//     }
//     return t[t.size()-1]; 
//     }
// };


class Solution {
public:
    char findTheDifference(string s, string t) {
    char ans;
    unordered_map<char,int>m;
    for(auto it:s){
        m[it]++;
    }
    for(auto it:t){
        if(m[it]==0) m[it]++; //using hashmap
        else m[it]--;
    }
    for(auto &it:m){
        if(it.second==1){
            ans=it.first;
            break;
        }
    }
    return ans; 
    }
};