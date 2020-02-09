class Solution {
public:
    bool isValid(string s) {
        int len = s.length();
        if(len == 0){
            return true;
        }
        if(s[0] == '}' || s[0] == ']' || s[0] == ')'){
            return false;
        }
        map<char, char> m = {{']','['}, {'}','{'}, {')','('}};
        vector<int> stack;
        stack.push_back(s[0]);
        char c;
        for(int i = 1; i < len; i++){
            if(s[i] == '}' || s[i] == ']' || s[i] == ')'){
                if(stack.size() == 0) return false;
                else{
                    c = stack[stack.size() - 1];
                    stack.pop_back();
                    if(c != m[s[i]]) return false;
                }
            }
            else stack.push_back(s[i]);
        }
        if(stack.size() == 0) return true;
        else return false;
    }
};
