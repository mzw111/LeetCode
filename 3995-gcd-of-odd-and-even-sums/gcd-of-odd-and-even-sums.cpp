class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd= 0;
        for(int i=1;i<=2*n-1;i=i+2){
            sumOdd+=i;
        }
        int sumEven = 0;
        for(int i=2;i<=2*n;i=i+2){
            sumEven+=i;
        }
        return gcd(sumOdd, sumEven);
    }
};