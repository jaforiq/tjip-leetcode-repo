/// TC: O(n)
/// SC:

class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        vector<vector<int>>charIndex(26);
        int n = s.size(), count = 0;
        for(int i = 0; i < n; i++){
            charIndex[s[i] - 'a'].push_back(i);
        }
        bool subSeq = true;

        for(int i = 0; i < words.size(); i++){
            subSeq= true; int lastIndex = -1;
            for(char ch: words[i]){
                auto it = upper_bound(charIndex[ch - 'a'].begin(), charIndex[ch - 'a'].end(), lastIndex);
                if(it == charIndex[ch - 'a'].end()){
                    subSeq = false; break;
                }
                else lastIndex = *it;
            }
            if(subSeq) count++;
        }
        return count;
    }
};
