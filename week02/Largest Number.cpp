class Solution {
public:
    bool static cmp(string &a, string &b){
        return (a+b) > (b+a);
    }
    string largestNumber(vector<int>& nums) {
        string ans = "";
        vector<string> res;
        for(auto it: nums){
            res.push_back(to_string(it));
        }

        sort(res.begin(), res.end(), cmp);

        //for(auto it: res) cout << it<< "\n";


        for(auto it: res) ans += it;

        while(ans[0]=='0' && ans.size() > 1){
            ans.erase(0, 1);
        }
        return ans;
    }
};
