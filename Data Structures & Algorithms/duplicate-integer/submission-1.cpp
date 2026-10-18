class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> numsSet;

        for (int i = 0; i < nums.size(); i++){
            if (numsSet.contains(nums[i])) return true;

            numsSet.insert(nums[i]);
        }

        return false;
    }
};