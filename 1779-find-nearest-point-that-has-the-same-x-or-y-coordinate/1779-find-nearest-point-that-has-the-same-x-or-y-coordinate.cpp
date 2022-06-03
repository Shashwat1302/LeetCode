class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int solution{-1} , min_dist{INT32_MAX};
        for(int i = 0 , size = points.size() ; i < size ; i++ ){
            if(points[i][0] == x || points[i][1] == y) {
                int manhattan_dist = std::abs(points[i][0] - x) + std::abs(points[i][1] - y);
                if(manhattan_dist < min_dist){
                    min_dist = manhattan_dist;
                    solution = i;
                }
            }
        }
        return solution;
    }
};