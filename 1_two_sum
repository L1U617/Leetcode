class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(2);
        unordered_map<int, int> m;
        for(int i = 0; i < nums.size(); i++){
            if(m.find(target - nums[i]) == m.end()){
                m.insert(map<int, int>::value_type(nums[i], i));
            }
            else{
                result[0] = m[target - nums[i]]; result[1] = i;
                
            }
        }
        return result;
    }
};
