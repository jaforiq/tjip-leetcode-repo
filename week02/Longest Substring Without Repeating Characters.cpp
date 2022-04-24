///Tc = O(n)
///SC = O(1)

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int mx=0,start = -1; vector<int>freq(258, -1);
        int n= s.size();
        for(int i=0; i < n; i++){
           if(freq[s[i]] > start)
               start = freq[s[i]]; //cout << i<< " "<< freq[s[i]]<< "\n";}

            freq[s[i]] = i;
            mx = max(mx, i-start);
        }
        return mx;
    }
};
