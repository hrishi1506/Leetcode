// class Solution {
//     long long getLCM(long long a, long long b) {
//         long long maxNum = max(a, b);

//         for (long long i = maxNum; ; i += maxNum) {
//             if (i % a == 0 && i % b == 0) {
//                 return i;
//             }
//         }

//     }

//     long long getGCD(long long a, long long b) {
//         long long minNum = min(a, b);
//         for (long long i = minNum; i >= 1; i--) {
//             if (a % i == 0 && b % i == 0) {
//                 return i;
//             }
//         }
//         return 1;
//     }

//     long long solve1(vector<int>& arr, int st, int end) {
//         long long res = arr[st];
//         for (int k = st + 1; k <= end; k++) {
//             res = getLCM(res, arr[k]);
//         }
//         return res;
//     }

//     long long solve2(vector<int>& arr, int st, int end) {
//         long long res = arr[st];
//         for (int k = st + 1; k <= end; k++) {
//             res = getGCD(res, arr[k]);
//         }
//         return res;
//     }

// public:
//     int maxLength(vector<int>& nums) {
//         int n = nums.size();
//         int ans = 0;

//         for (int i = 0; i < n; i++) {

//            unsigned long long p = 1; 
            
//             for (int j = i; j < n; j++) {
//                 p *= nums[j];
    
//                 long long l = solve1(nums, i, j);
//                 long long g = solve2(nums, i, j);

//                 if (p == l * g) {
//                     ans = max(ans, j - i + 1);

//                 }
//             }
//         }

//         return ans;
//     }
// };
class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;

        for(int i=0;i<n;i++){

            long long pro=1,g=0,l=1,maxLcm = 100000000000;
            for(int j=i;j<n;j++){

                pro *=nums[j];
                if(pro > maxLcm) break;

                g=gcd(g,nums[j]);
                l=lcm(l,nums[j]);
                
                if(pro== g*l) maxi=max(maxi,j-i+1);

            } 
        }
        return maxi;
    }
};