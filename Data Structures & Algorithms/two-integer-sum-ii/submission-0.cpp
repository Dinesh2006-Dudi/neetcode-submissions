class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
       int l=0,r=n-1;
       while(l<r)
       {
            int cursum=numbers[l]+numbers[r];

            if(cursum>target)
            {
                r--;
            }
            else if(cursum<target)
            {
                l++;
            }
            else{
                return {l+1,r+1};
            }
       }
       return {};
    }
};
