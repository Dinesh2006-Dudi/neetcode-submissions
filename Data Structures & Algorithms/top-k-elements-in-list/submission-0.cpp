class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;

        int n=nums.size();
        vector<int> ans;

        for(int i=0;i<n;i++)
        {
            freq[nums[i]]++;
        }
          vector<pair<int,int>> mapp;

          for(auto p:freq)
          {
            mapp.push_back({p.second,p.first});
          }

          sort(mapp.rbegin(),mapp.rend());

          vector<int> res;
          for(int i=0;i<k;i++)
          {
            res.push_back(mapp[i].second);
          }
          return res;
    }
};
