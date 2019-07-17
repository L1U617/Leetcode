class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0], temp = nums[0], preSum = nums[0];
        int i, length = nums.size();
        for(i = 1; i < length; i++){
            if(preSum < 0 && nums[i] < 0){
                temp = max(preSum, nums[i]);
                maxSum = max(temp, maxSum);
                preSum = temp;
            }
            else if(preSum < 0 && nums[i] >= 0){
                temp = nums[i];
                maxSum = max(temp, maxSum);
                preSum = temp;
            }
            else if(preSum >= 0){
                temp += nums[i];
                preSum = temp;
                if(temp > maxSum) maxSum = temp;
            }
            
        }
        return maxSum;
    }
};
