class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         map<int, int> table;

        for (int i = 0; i < nums.size(); ++i)
        {
            if (table.count(target - nums[i]))
            {
                return {table[target - nums[i]], i};
            }

            table[nums[i]] = i;
        } 

        return {-1, -1};
    }
};