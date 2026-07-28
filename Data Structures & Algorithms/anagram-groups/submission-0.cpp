class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> res;
        
        

        for(string word:strs)
        {
            vector<int> freq(26,0);
             for(char c:word)
             {
                freq[c - 'a']++;
             }

                string key="";
             for(int i=0;i<26;i++)
             {
                if(freq[i]>0)
                {
                    key+=char('a' +i);
                    key+=to_string(freq[i]);
                }
             }
             res[key].push_back(word);
        }

        vector<vector<string>> ans;

        for(auto w:res)
        {
            ans.push_back(w.second);
        }
        return ans;

       
    }
};
