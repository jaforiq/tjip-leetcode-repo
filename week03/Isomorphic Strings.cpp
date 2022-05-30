///TC: O(n+n)
///SC: O(n)

class Solution {
public:
    bool isIsomorphic(string s, string t, int countOpreration= 0) {
        unordered_map<char, char>freq;
        for(int i= 0; i < s.size(); i++){
            if(freq.count(s[i]) && freq[s[i]] != t[i])
                return false;
            freq[s[i]] = t[i];
        }
        if(countOpreration== 0) return isIsomorphic(t, s, 1);
        return true;
    }
};


/// Hash table

/**
// old version
unsigned long long getHash(string &str)
{
    unsigned long long hash = 1;
    for (auto c : str)
    {
        hash = (hash * (257 + (c - 'a')));
    }
    return hash;
}

// better version
long long getHash(string &str)
{
    long long hash = 1, MOD = 202206214218227LL;
    for (auto c : str)
    {
        hash = (hash * (257 + c)) % MOD;
    }
    return hash;
}



MOD value ta ektu boro holeo, jodi somehow mone rakhte paren, it will come handy
These small details will help you stand out from the crowd.
unsigned long long o widely used, kintu eta 2^64 modulo calculate kore always. MOD value jehetu prime na, tar upor 2 er power, collision er rate beshi hoy ekhane
A safe prime is far more better choice in this case.
Mojar bepar: 10^9 + 7 ekta safe prime. Ejonnei eta eto beshi dekhen apnara bivinno problem e

*/
/**
class Solution {
public:
    const static long long MOD = 202206214218227LL;   /// mod 10^9 + 7 dile WA khabe;

    long long getHash(string &str) {
        long long h = 0;
        for (auto &c : str) {
            h = (h * 257) + c;
            while (h >= MOD) h %= MOD;
        }
        return h;
    }

    bool differByOne(vector<string>& dict) {
        unordered_set<long long> hashedStrings;
        int L = dict[0].size();
        for (auto &curr : dict) {
            long long h = getHash(curr);
            long long mult = 1;
            for (int i = L - 1; i >= 0; i--) {
                for (char c = 'a'; c <= 'z'; c++) {
                    if (curr[i] == c) continue;
                    int diff = c - curr[i];
                    long long newHash = h + (1LL * diff * mult % MOD) + MOD;
                    if (newHash >= MOD) newHash %= MOD;
                    if (hashedStrings.count(newHash)) {
                        return true;
                    }
                }
                mult = (mult * 257) % MOD;
            }
            hashedStrings.insert(h);
        }
        return false;
    }
};
*/
