// problem link
// https://leetcode.com/contest/weekly-contest-397/problems/permutation-difference-between-two-strings/


class Solution {
public:
    int findPermutationDifference(string s, string t) {
        map<char, int> mp;

        for(int i = 0;i < s.length();i++){
            mp[s[i]] = i;
        }
        int res = 0;
        for(int i =0;i < t.length();i++){
            int a = i;
            int b = mp[t[i]];

            res += abs(a - b);
        }

        return res;

    }
};
