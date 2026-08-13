class Solution {
    public boolean checkInclusion(String s1, String s2) {
        if(s1.length()>s2.length())
        return false;

        int s1freq [] =new int [26];
        int wdwfreq [] =new int[26];
        
        for(char c:s1.toCharArray())
        {
            s1freq[ c - 'a']++;
        }

        int wdwsize=s1.length();

        for(int right=0;right<s2.length();right++)
        {
            wdwfreq[s2.charAt(right) -'a']++;

        if(right>=wdwsize)
        {
            wdwfreq[s2.charAt(right-wdwsize) - 'a']--;

        }

        if(matches(s1freq,wdwfreq))
        {
            return true;
        }
        }
        return false;
    }

        public boolean matches(int []a ,int []b)
        {
            for(int i=0;i<26;i++)
            {
                if(a[i]!=b[i])
                return false;
            }
            return true;
        }

        
    }

