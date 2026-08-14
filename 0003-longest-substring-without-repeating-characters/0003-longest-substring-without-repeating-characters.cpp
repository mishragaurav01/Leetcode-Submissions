class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if (n <= 1) return n;

        unordered_map<char, int> freq;
        int maxi = 0, i = 0;

        for (int j = 0; j < n; j++) {
            freq[s[j]]++;
            while (freq[s[j]] > 1) {
                freq[s[i]]--;
                i++;
            }
            maxi = max(maxi, j - i + 1);
        }

        return maxi;
    }
};
