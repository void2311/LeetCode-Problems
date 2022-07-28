class Solution {
public:
    bool isAnagram(string s, string t) {
        
        vector<int> freq(26,0);
        if(t.size()<s.size())
            return false;
        
        for(char c: s)
        {
            freq[c-'a']++;
        }
        for(char c: t)
        {
            if(freq[c-'a']==0)
                return false;
            freq[c-'a']--;
        }
        return true;
    }
};