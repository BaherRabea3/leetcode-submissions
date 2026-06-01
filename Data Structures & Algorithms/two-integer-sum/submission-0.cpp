class Solution {
public:
 vector<int> twoSum(vector<int>& nums, int target) 
{
    unordered_map<int,int> current;
    for(int i = 0; i < nums.size(); i++)
            current[nums[i]] = i;
    
    for(int i = 0; i < nums.size(); i++)
    {
        int diff = target - nums[i];
        if(current.count(diff) && current[diff] != i)
                return {i, current[diff]};
    }
    return {};
}
};
