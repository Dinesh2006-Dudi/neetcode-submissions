class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
       int n=nums.size();

       unordered_map<int,int> prefix;

       for(int i=0;i<n;i++)
       {
            int diff=target-nums[i];
            if(prefix.find(diff)!=prefix.end())
            {
                return {prefix[diff],i};
            }
            prefix.insert({nums[i],i});
       }
       return {};
    }
};
