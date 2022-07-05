class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int c,t;
        
        for(int i=0;i<arr.size();i++){
            c=0;
            for(int j=i;j<arr.size();j++){   
                if((arr[j]%2)!=0){
                    c++;  
                }
                if(arr[j]%2==0){
                t++;     
                c=0;
                }
                if(c==3){
                    return true;
                }
            }
        }
        return false;  
    }
};