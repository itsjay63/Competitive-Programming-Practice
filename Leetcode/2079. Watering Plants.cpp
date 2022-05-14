class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int k = capacity;
        int sum=0;
        for(int i=0;i<plants.size();i++){
            if(capacity>=plants[i]){
                capacity=capacity-plants[i];
                sum = sum + 1;
            }
            else{
                sum = sum + i+i+1;
                capacity = capacity + (k-capacity);
                capacity = capacity - plants[i];
                
            } 
        }
        return sum;
        
    }
};