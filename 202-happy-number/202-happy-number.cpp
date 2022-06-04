class Solution {
public:
    int sumOfDigits(int n) {
        int sum = 0;
        while(n > 0) {
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        
        return sum;
    }
    
public:
    bool isHappy(int n) {
        
        while(n != 1 && n != 4) {
            n = sumOfDigits(n);
        }
        
        if(n == 1)
            return true;
        else
            return false;
    }
};