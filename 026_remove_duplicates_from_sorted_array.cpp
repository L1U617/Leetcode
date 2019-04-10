class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int pre, length = nums.size(), i, cnt = 1;
        if(nums.size() == 0) return 0;
        pre = nums[0];
        for(i = 1; i < length; i++){
            if(pre != nums[i]) cnt++;
            pre = nums[i];
        }        
        pre = nums[0];
        vector<int>::iterator it;
        i = 1;
        while(i < cnt){
            if(pre == nums[i]){
                it = nums.begin() + i - 1;
                nums.erase(it);
            }
            else{
                pre = nums[i];
                i++;
            } 
        }
        return cnt;
    }
};
