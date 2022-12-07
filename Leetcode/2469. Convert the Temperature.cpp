class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> vd;
        double k = celsius + 273.15;
        vd.push_back(k);
        double f = celsius * 1.80 + 32.00;
        vd.push_back(f);
        return vd;
        
    }
};