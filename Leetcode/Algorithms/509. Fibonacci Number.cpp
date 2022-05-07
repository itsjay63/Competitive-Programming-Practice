class Solution {
public:
    int fib(int n) {
        if(n<=1)
            return n;
        else 
            return fib(n-1)+fib(n-2);
    }
};
/*-------------------------------------------------
class Solution {
public:
    int fib(int n) {
       double i = pow(((1+sqrt(5))/2),n)/sqrt(5);
       i = (int)round(i);
       return i;
    }
};
*/