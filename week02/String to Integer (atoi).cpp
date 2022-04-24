///Tc = O(n)
///SC = O(1)

class Solution {
public:
    int myAtoi(string s) {
        if(s.empty()) return 0;
        int n = s.size(), i =0, sign = 1;;

           while(s[i]== ' ' ) i++;

           if(i == n) return 0;
            else if(s[i]== '-') {
                sign = 0 ; i++;
            }
            else if(s[i]== '+')
                i++;


        long long range= 0 ;
        while(s[i]>= '0' && s[i]<= '9'){
            range *= 10;
            if(range<= INT_MIN || range>= INT_MAX) break;
            range += (s[i] - '0');
            i++;
        }

        if(sign == 0){
            range= (-1) * range;
           //cout << range<< "\n";
        }
         if(range<= INT_MIN)
        {return INT_MIN;}
         if(range >= INT_MAX)
           {return INT_MAX;}
           return range;
    }
};
