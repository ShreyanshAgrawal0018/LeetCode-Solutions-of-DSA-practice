class Solution {
public:
    int reverse(int x) {
        long int n=0;
        while (x != 0){
            int pop = x % 10;
            n = (n*10) + pop;
            x = x / 10;
        }

        //check for positve limit
        if ((n > INT_MAX) || (n < INT_MIN)) return 0;

        return (int)n;
    }
};