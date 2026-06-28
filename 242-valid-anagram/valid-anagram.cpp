class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()) return false;

        vector<int>freq(27,0);

        for(int i = 0 ; i < s.size() ; i++){
            int idx = s[i] - 'a';
            freq[idx]++;
        }
        for(int i = 0 ; i < s.size() ; i++){
            int idx = t[i] - 'a';
            freq[idx]--;
        }

        for(int x : freq){
            if(x != 0) return false;
        }
        return true;
    }
};