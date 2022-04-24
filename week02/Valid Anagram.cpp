///Tc = O(n)
///SC = O(n)

class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq1[30] = {0},freq2[30] = {0};
        for(auto at: s) freq1[at- 'a']++;
        for(auto at: t) freq2[at- 'a']++;
        for(int i=0; i < 26; i++){
            if(freq1[i] != freq2[i]) return false;
        }
        return true;
    }
};
