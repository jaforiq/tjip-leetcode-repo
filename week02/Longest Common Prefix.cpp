

///Brute force
/**class Solution {
public:
    string commonPrefix(string s1, string s2){
          int n1 = s1.size(), n2 = s2.size();
          string res= "";
        for(int i=0,j=0; i<n1 && j<n2; i++,j++){
            if(s1[i] != s2[i]){
                break;
            }
            res += s1[i];
        }
        return res;

    }
    string longestCommonPrefix(vector<string>& strs) {
           string s= strs[0],ss= "";
          for(int i=1; i < strs.size(); i++){
              s = commonPrefix(s, strs[i]);
          }

        //if(s== strs[0] )return ss;
        return s;
    }
};*/
