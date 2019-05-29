class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int length = nums.size();
        int l = 0, r = length - 1;
        int mid;
        while(l <= r){
            mid = (l + r) / 2;
            if(target < nums[mid])
                r = mid - 1;
            else if(target > nums[mid])
                l = mid + 1;
            else if(target == nums[mid]){
                return mid;
                
            }
        }
        return l;
    }
};
