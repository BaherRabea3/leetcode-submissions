class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, h = nums.size()-1,mid = 0,res=0;

        while(l <= h){
            if(nums[h] >= nums[l]){
                while(l <= h){
                    mid = (l+h)/2;
                    if(nums[mid] == target)
                        return mid;
                    if(target > nums[mid])
                        l = mid + 1;
                    else
                        h = mid - 1;
                }
            }

            mid = (l+h)/2;
            if(nums[mid] == target)
                return mid;
            
            if(nums[mid] >= nums[l]){
                if(target <= nums[mid] && target >= nums[l])
                    h = mid - 1;
                else
                    l = mid + 1;
            }
            else if(nums[mid] <= nums[h]){
                if(target >= nums[mid] && target <= nums[h])
                    l = mid + 1 ;
                else
                    h = mid - 1;
            }
        }
        return -1;
    }
};
