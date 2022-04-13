class Solution {
public:
    int sum(int num1, int num2) {
         int add=0;
         if((num1>= -100 && num1<=100)&&(num2>= -100 && num2<=100)){
            add = num1+num2;
        }
        return add;
    }
};