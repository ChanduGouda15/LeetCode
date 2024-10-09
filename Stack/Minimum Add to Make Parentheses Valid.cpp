class Solution {
public:
    int minAddToMakeValid(string s) {
    stack<int>st;
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') st.push(s[i]);
        else{
            if(st.empty()) count++;
            else st.pop();
        }
    }
    return count+st.size();
    }
};

// Normal method-

// class Solution {
// public:
//     int minAddToMakeValid(string s) {
//     int m=0,n=0;
//     for(int i=0;i<s.size();i++){
//         if(s[i]=='(') m++;
//         else{
//             if(m>0) m--;
//             else n++;
//         }
//     }
//     return m+n;
//     }
// };