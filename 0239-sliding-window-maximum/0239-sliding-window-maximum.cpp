class Solution {
public:
vector<int> maxSlidingWindow(vector<int> &nums, int k)
{
    vector<int> result;
    deque<int> deq;

    for(int r = 0 ; r < nums.size() ; r++){
        if(!deq.empty() && deq.front() <= r - k)
            deq.pop_front();
        
        while(!deq.empty() && nums[deq.back()] <= nums[r])
            deq.pop_back();
        
        deq.push_back(r);

        if(r >= k - 1)
            result.push_back(nums[deq.front()]);
    }
    
    return result;
}
};