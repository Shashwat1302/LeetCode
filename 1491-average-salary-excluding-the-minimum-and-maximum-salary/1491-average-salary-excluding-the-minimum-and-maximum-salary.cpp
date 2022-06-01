class Solution {
public:
    double average(vector<int>& salary) {
        
        double sum=0;
        sort(salary.begin(), salary.end());
            for(int i=1;i<=salary.size()-2;i++){
                sum = sum + salary[i];
            }
        double average = sum/(salary.size()-2);
        return average;
    }
};