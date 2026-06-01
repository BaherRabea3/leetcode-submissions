public class Solution {
  public bool hasDuplicate(params int[] nums)
{
    Dictionary<int, int> duplicates = new Dictionary<int, int>();
    for(int i = 0; i < nums.Length; i++)
        duplicates[nums[i]] = 0;
    for (int i = 0; i < nums.Length; i++)
    {
        
        duplicates[nums[i]]++;
        if (duplicates[nums[i]] > 1)
            return true; 
    }
    return false;
}
}
