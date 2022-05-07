class Solution {
public:
    bool isSameAfterReversals(int num) {
            int onum = num;
            int r1num=0;
            int r2num=0;
            while(onum){
                int j = onum%10;
                r1num = r1num * 10 + j;
                onum = onum / 10;
            }
            while(r1num){
                int j = r1num%10;
                r2num = r2num * 10 + j;
                r1num = r1num / 10;
            }
            if(r2num == num){
                return true;
            }
            else{
                return false;
            }
            
        
    }
        
    
};