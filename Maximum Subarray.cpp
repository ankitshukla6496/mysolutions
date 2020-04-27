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

/* Using Divide and conquer 

class Solution { 
public:
    
    int divideandconquer(vector<int>&nums, int left, int right)
    {            
        //conquer 
        if (left==right)
        {
            return nums.at(left);
        }
        int mid = (left + right) / 2;    
        // divide
        int leftMax = divideandconquer(nums, left, mid);
		int rightMax = divideandconquer(nums, mid+1, right);         
        // merge
        int ml= -1e6,  mr = -1e6;
        for (int i=mid+1, sum=0;i<=right;i++)
        {
            sum += nums.at(i);  
            if (sum > mr) mr = sum;
        }
        for (int i=mid, sum=0;i>=left;i--)
        {
            sum += nums.at(i);
			if (sum > ml) ml = sum;
        }
        
        int crossMax = ml + mr;
        int maximum = max(max(leftMax, rightMax), crossMax);
        return maximum;
    }
    int maxSubArray(vector<int>& nums) {       
        return divideandconquer(nums, 0, nums.size()-1);   
    }
};
*/