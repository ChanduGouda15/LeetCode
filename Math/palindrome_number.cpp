class Solution {
public:
    bool isPalindrome(int x) {
    long long rev=0;
    long long original = x;
    while(x>0){
        int digits = x%10;
        x = x/10;
        rev = rev*10+digits;
    }
    if(rev == original) return true;
    else return false;
    }
};