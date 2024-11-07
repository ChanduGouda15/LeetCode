class Solution {
public:
    int perfectSum(int arr[], int n, int sum) {
        return perfectSumHelper(arr, n, sum, 0, 0);
    }

private:
    int perfectSumHelper(int arr[], int n, int sum, int index, int current_sum) {
        if (index == n) {
            return current_sum == sum ? 1 : 0; 
        }
        
        
        int left = perfectSumHelper(arr, n, sum, index + 1, current_sum + arr[index]);
        
       
        int right = perfectSumHelper(arr, n, sum, index + 1, current_sum);
        
        return left + right; 
    }
};