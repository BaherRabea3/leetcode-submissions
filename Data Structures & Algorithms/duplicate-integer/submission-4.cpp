class Solution {
public:
bool hasDuplicate(vector<int>& nums)
{
    map<int,int> duplicate;
    for(int i = 0; i < nums.size(); i++)
    {
        duplicate[nums[i]]++;
        if(duplicate[nums[i]] > 1)
            return true;
    }
    return false;
}
};
