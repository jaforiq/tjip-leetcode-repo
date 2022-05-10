///TC: O(n)
///SC: O(1);

class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();

        map<char, int>roman;
        roman['I'] = 1, roman['V']= 5, roman['X'] =10, roman['L']= 50, roman['C']=           100, roman['D']= 500, roman['M']= 1000;
        int result = roman[s[n-1]];
        for(int i = n-2; i >= 0; i--){
           if(roman[s[i]] < roman[s[i+1]]){
               result -= roman[s[i]];
           }
            else if(roman[s[i]] >= roman[s[i+1]]){
                result += roman[s[i]];
            }
        }
        return result;
    }
};
