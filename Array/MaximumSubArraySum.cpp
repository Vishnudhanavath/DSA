class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int currSum = nums[0];
        for(int i =1;i<nums.size();i++){
            currSum = max(nums[i],currSum+nums[i]);
            maxSum = max(maxSum,currSum);
        }
        return maxSum;
    
    }
};

// The problem of finding the maximum subarray sum can be efficiently solved using Kadane's Algorithm, which has a time complexity of 
// O(n) and uses 
// O(1) space. Below is the optimal solution.??
// url: https://leetcode.com/problems/maximum-subarray/description/



