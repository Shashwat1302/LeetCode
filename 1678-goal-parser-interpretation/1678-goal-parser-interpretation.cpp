class Solution {
public:
    string interpret(string command) {
        string s="";
        for(char i=0;i<command.length();i++){
            if(command[i]=='G'){
                s = s + command[i];
            }
            else if(command[i]=='(' && command[i+1]==')' ){
                s = s + "o";
                i++;
            }
            else if(command[i]=='(' &&  command[i+1]=='a'){
                s = s + "al";
                i=i+3;
            }
        }
        return s;
    }
};