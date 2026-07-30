class Solution {
public:

    string encode(vector<string>& strs) {
        string res;

        for(auto s:strs)
        {
            res.append(to_string(s.size()));
            res.push_back('#');
            res.append(s);
        }
            return res;
    }

    vector<string> decode(string s) {

        vector<string> res;

        int i=0;
        while(i<s.size())
        {
            int pos=s.find('#',i);
            int len=stoi(s.substr(i,pos-i));

            string word=s.substr(pos+1,len);
            res.push_back(word);
            i=pos+1+len;
        }
        return res;

    }
};
