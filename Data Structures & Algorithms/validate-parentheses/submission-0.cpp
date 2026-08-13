class Solution {
public:
    bool isValid(string s) {
        stack<char>sp;
        for(int i=0;i<s.size();i++){
           
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                sp.push(s[i]);
            }
            else {
                if(sp.empty()) return false;
                if((s[i] == ')' && sp.top() == '(')|| (s[i] == '}' && sp.top() == '{') || (s[i] == ']'&& sp.top() == '['))
                    sp.pop();
                else return false;
            }
        }
        if(sp.empty()) return true;
        return false;
    }
};