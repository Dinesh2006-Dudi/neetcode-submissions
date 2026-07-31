class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int n=nums.size();
        int len=0;
        for(int num :s)
        {
            if(s.find(num-1)==s.end())
            {
                int cur=num;
                int str=1;

        while(s.find(cur+1)!=s.end())
        {
            cur++;
            str++;
        }
        len=max(len,str);
        }
    }
       return len;
    }

};
