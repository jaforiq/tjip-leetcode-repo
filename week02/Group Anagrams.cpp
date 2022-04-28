

class Solution {
public:
    unsigned long long getHash(string &str){
        unsigned long long h = 1;
        for(auto c: str){
            h = h * (257 + (c - 'a'));
        }
        return h;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> buckets;
        for(auto &str : strs){
            auto key = str;
            sort(key.begin(), key.end());
            buckets[key].push_back(str);
        }
        vector<vector<string>> anagrams;
        for(auto &iter : buckets){
            anagrams.push_back(iter.second);
        }
        return anagrams;
    }
};
