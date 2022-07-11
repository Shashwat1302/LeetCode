class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int sum =0;
        int value;
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        for(int i=0;i<seats.size();i++){
            value = abs(seats[i]-students[i]);
            sum = sum + value;
        }
        return sum;
    }
};