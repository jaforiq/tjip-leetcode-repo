///Tc = O(n)
///SC = O(n)

class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int n= s.size();
        for(int i = 0; i < n; i++){  //cout << i<< "  i\n";
            if(s[i]== '(' || s[i]== '{' || s[i]== '[')
                st.push(s[i]);
            else {

                if(st.empty())return false;
                else {
                    char c = st.top(); st.pop();
                    if((c == '(' && s[i]== ')') || (c == '{' && s[i]== '}')  || (c == '[' && s[i]== ']')){

                    }
                    else return false;
                }
            }

        }
        if(st.empty()) return true;
            else return false;
    }
};
