class Solution {
public:
    int minimumPushes(string word) {
        vector<int>freq(26,0);

        for(char c : word){
            freq[c -'a']++;
        }

        vector<pair<int,int>> arr;

         for (int i = 0; i < 26; i++) {
            arr.push_back({freq[i], i}); 
        }
       
        sort(arr.begin(),arr.end() , greater<pair<int,int>>());

        int c = 0;

        for(int i = 0 ; i < 26 ; i++){
            if(i < 8){
                c += arr[i].first;
            }
            else if(i < 16){
                c += arr[i].first*2;
            }
            else if(i < 24){
                c += arr[i].first* 3;
            }
            else{
                c += arr[i].first * 4;
            }
        }
        return c;
    }
};