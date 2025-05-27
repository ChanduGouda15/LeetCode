class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sum_1=0;
        int sum_2=0;
        for(int i=1;i<=n;i++){
            if(i%m!=0) sum_1+=i;
            else sum_2+=i;
        }
        return sum_1-sum_2;
    }
};