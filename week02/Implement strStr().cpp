///Tc = O(1)
///SC = O(n)
class Solution {
public:
     vector<long long>prefixhash,pow;
    int base = 29;
    int M= 1000000007;

    void preprocess(string &str){
        prefixhash[0] = str[0];
        for(int i = 1; i < str.size(); i++){
            prefixhash[i] = (prefixhash[i-1] * base) + str[i];
            if(prefixhash[i] >= M){
                prefixhash[i] %= M;
            }
            pow[i] = (pow[i-1] * base) % M;
        }
    }

    long long rangehash(int la, int lb){
        long long x1 = prefixhash[lb];
        long long x2 = la == 0? 0 : (prefixhash[la-1] * pow[lb-la+1]) % M;
        return (x1 - x2 + M) % M;
    }
    long long hashgenerate(string &str){
        long long hash= 0;
        for(auto it: str){
            hash = (hash * base) + it;
            hash %= M;
        }
        return hash;
    }

    int strStr(string haystack, string needle) {
        int len1 = haystack.size();
        int len2 = needle.size();
        prefixhash.resize(len1+2, 0);
        pow.resize(len2 + 2, 1);

        preprocess(haystack);

        long long needlehash= hashgenerate(needle);

        for(int i= 0; i<=(len1-len2); i++){
            if(rangehash(i, i+len2-1) == needlehash)
                return i;
        }
        return -1;
    }
};

/**
class Solution {
public:
    int strStr(string haystack, string needle) {
        int len1= haystack.size();
        int len2 = needle.size();
        for(int i= 0; i<=(len1-len2); i++){
            if(haystack.substr(i,len2) == needle)
                return i;
        }
        return -1;
    }
};
*/
