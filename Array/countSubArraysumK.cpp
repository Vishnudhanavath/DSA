class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // hashmap 
        unordered_map<int,int>mp; // prefixSum,count;
        mp.insert({0,1});
        int currSum = 0;
        int count = 0;
        for(auto &num: nums){
           currSum += num;
           int rem =  currSum - k;
            count += mp[rem];
            mp[currSum] += 1;
        }
        return count;

    }
};
