class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, ans = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            if(sum < nums[i] && sum < 0){
                sum = 0;
            }
            sum += nums[i]; // 4
            ans = max(ans , sum);// 6
        }
        return ans;
    }
};