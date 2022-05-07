class Solution {
public:
    string interpret(string command) {
        int l = command.size();
        string s;
        for(int i=0;i<l;i++){
            if(command[i]=='G'){
                s.push_back('G');
            }
            else if(command[i]=='(' and command[i+1]==')'){
                s.push_back('o');
                
            }
            else if(command[i]=='(' and command[i+1]=='a' and command[i+2]=='l' and command[i+3]==')'){
                s.push_back('a');
                s.push_back('l');
                
            } 
        }
        cout<<s<<endl;
        return s;
            
    }
};