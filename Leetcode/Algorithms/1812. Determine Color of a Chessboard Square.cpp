class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int b;
        if(((int)coordinates[0]) %2 != 0 and ((int)coordinates[1]) %2 !=0){
            b = 0;
        }else if(((int)coordinates[0]) %2 != 0 and ((int)coordinates[1]) %2 ==0){
            b = 1;
        }else if(((int)coordinates[0]) %2 == 0 and ((int)coordinates[1]) %2 ==0){
            b = 0;
        }else if(((int)coordinates[0]) %2 == 0 and ((int)coordinates[1]) %2 !=0){
            b = 1;
        }
        
        return b==0? false : true;
    }
};