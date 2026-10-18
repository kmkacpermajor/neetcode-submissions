class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std:unordered_map<int, int> diffMap;

        for (int i = 0; i<nums.size(); i++){
            if (diffMap.contains(nums[i])) {
                return {diffMap[nums[i]], i};
            }else{
                int diff = target - nums[i];
                diffMap.insert_or_assign(diff, i);
            }
        }
    }
};
