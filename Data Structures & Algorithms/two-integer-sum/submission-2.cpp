class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std:map<int, int> numsMap;

        for (int i = 0; i<nums.size(); i++){
            numsMap.insert_or_assign(nums[i], i);
        }

        for (int i = 0; i<nums.size(); i++){
            int diff = target - nums[i];
            if (numsMap.contains(diff)){
                if (numsMap[diff] != i) return {i, numsMap[diff]};
            } 
        }
    }
};
