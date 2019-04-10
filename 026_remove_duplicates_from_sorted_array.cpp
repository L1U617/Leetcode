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

/* 2nd version */
/*
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int pre, length = nums.size(), i = 1, j, cnt = 1;
        if(nums.size() == 0) return 0;
        pre = nums[0];
        while(i < length){
            if(pre == nums[i]){
                for(j = i + 1; j < length; j++){
                    if(nums[j] != pre){                        
                        nums[cnt++] = nums[j];
                        pre = nums[j];
                        i = j + 1;
                        break;
                    }
                }
                if(j == length) break;
            }
            else{                
                nums[cnt++] = nums[i];
                pre = nums[i];
                i++;
            }
        }        
        return cnt;
    }
};
*/
