class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = nums.size();
        int i = 0, j = len - 1;
        int cnt = 0, flag = 0;
        while(i < j){
            if(nums[i] == val){
                if(nums[j] == val){
                    j--;
                }
                else{
                    swap(nums[i], nums[j]);
                    i++;
                    j--;
                }
            }
            else i++;
        }
        for(i = 0; i < len; i++){
            if(nums[i] == val) break;
            else cnt++;
        }
        return cnt;
    }
};
