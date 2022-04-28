/// TC: O(n+m) (s+t)
/// SC: O(1)

class Solution {
public:
    string minWindow(string s, string t) {
        vector<int>freq(130, 0);
        for(char ch: t) freq[ch]++;

        int l = 0, r = 0, remChar = t.size();
        int minLen = INT_MAX / 2, stIndex = -1;
        while(r < s.size()){
            if(freq[s[r]] > 0) remChar--;
            freq[s[r]]--;
            r++;

        while(remChar == 0){
                if(minLen > (r-1-l+1)){
                minLen = r-l;
                stIndex = l;
                }
                if(freq[s[l]] == 0) remChar++;
                freq[s[l]]++;
                l++;
            }
        }
        return stIndex == -1? "": s.substr(stIndex, minLen);
    }
};
