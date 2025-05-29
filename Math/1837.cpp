class Solution {
public:
    int sumBase(int n, int k) {
        int num=Base(n,k);
        int sum=0;
        while(num!=0){
            sum+=num%10;
            num/=10;
        }
        return sum;
    }
private:
    int Base(int n,int k){
        string str="";
        while(n!=0){
            str+=to_string(n%k);
            n=n/k;
        }
        reverse(str.begin(),str.end());
        return stoi(str);
    }
};