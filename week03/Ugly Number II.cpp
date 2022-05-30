class Solution {
public:
    int nthUglyNumber(int n) {
        int ugly[n+2]; ugly[0] = 1;

        int multipleOf2 =  2;
        int multipleOf3 =  3;
        int multipleOf5 =  5;
        int i2 =0, i3 =0, i5 = 0;

        int minUgly = 1;
        for(int i = 1; i < n; i++){
             minUgly = min(multipleOf2, min(multipleOf3,multipleOf5));

            ugly[i] = minUgly;

            if(minUgly == multipleOf2){
                i2++;
                multipleOf2 = ugly[i2] * 2;
                //cout << ugly[i] << " "<< i<< " i2\n";
            }
             if(minUgly == multipleOf3){
                i3++;
                multipleOf3 = ugly[i3] * 3;
                //cout << ugly[i] << " "<< i<< " i3\n";
            }
             if(minUgly == multipleOf5){
                i5++;
                multipleOf5 = ugly[i5] * 5;
                //cout << ugly[i] << " "<< i<< " i5\n";
            }
            //cout << ugly[i]<< " ";
        }
        return minUgly;
    }
};
