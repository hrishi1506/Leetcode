class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int>freq(26,0);
        for(char ch : s){
            freq[ch - 'a']++;
        }

        string left = "";
        string mid = "" ;
        for(int i = 0 ; i < 26 ; i++){
            // int p = freq[i]/2;
            // while(p != 0){
            //     left.push_back(i + 'a');
            //     p--;
            // }
            left += string(freq[i]/2 , i+'a');

            if(freq[i] % 2)
                mid = i+'a';
        }

        string right = left;
        reverse(right.begin(),right.end());

        return left+mid+right;
    }
};