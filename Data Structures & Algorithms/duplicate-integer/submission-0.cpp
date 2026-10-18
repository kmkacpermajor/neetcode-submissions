class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::map<int, int> numsMap;

        for (int i = 0; i < nums.size(); i++){
            if (numsMap.contains(nums[i])) return true;

            numsMap.insert(std::make_pair(nums[i], 1));
        }

        return false;
    }
};