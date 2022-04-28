/// TC: O(n)
/// SC: O(n)

class Solution {
public:
    string decodeString(string s) {
        int n= s.size(), number = 0, num;
        string word = "", hold = "", temAns= "";
        stack<int>numStack; stack<string>wordStack;
        for(int i = 0; i < n; i++){
            if(s[i] >= '0' && s[i] <= '9')
                number = number * 10 + (s[i] - 48);
            else if(s[i] >= 'a' && s[i] <= 'z')
                word += s[i];
            else if(s[i] == '['){
                numStack.push(number);
                wordStack.push(word);
                number = 0; word = "";
            }
            else if(s[i] == ']'){  //cout << word<< "  "<< ansString<< "\n";
                num = numStack.top(); numStack.pop();
                hold = wordStack.top(); wordStack.pop();
                while(num--) temAns += word;
                hold += temAns;  temAns = "";
                word = hold;
                //cout << word<< "\n";
            }
        }
        return word;
    }
};
