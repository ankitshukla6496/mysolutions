//O(n)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max=0;
        int ans = INT_MIN;
        
        for(int i=0;i<nums.size();i++){
            max += nums[i];
            ans = ans>max?ans:max;
            max = max<0?0:max;
        }
        return ans;
    }
};