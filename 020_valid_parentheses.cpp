class Solution {
public:
    bool isValid(string s) {
        int i, length = s.length();
        int bracket = 0, square = 0, brace = 0;
        vector<int> flag;
        vector<int>::iterator pt;
        int tag;
        bool valid = true;
        for(i = 0; i < length; i++){
            if(s[i] == '('){
                bracket++;
                flag.push_back(1);
            }
            else if(s[i] == '[') {
                square++;
                flag.push_back(2);
            } 
            else if(s[i] == '{'){
                brace++;
                flag.push_back(3);
            } 
            else if(s[i] == ')'){
                bracket--;
                if(flag.size() != 0){
                    pt = flag.end() - 1;
                    tag = *pt;
                    if(tag != 1){
                        valid = false;
                        break;
                    }
                    else flag.pop_back();
                }
                if(bracket < 0){
                    valid = false;
                    break;
                }
            }
            else if(s[i] == ']'){
                square--;
                if(flag.size() != 0){
                    pt = flag.end() - 1;
                    tag = *pt;
                    if(tag != 2){
                        valid = false;
                        break;
                    }
                    else flag.pop_back();
                }
                if(square < 0){
                    valid = false;
                    break;
                }
            } 
            else if(s[i] == '}'){
                brace--;
                if(flag.size() != 0){
                    pt = flag.end() - 1;
                    tag = *pt;
                    if(tag != 3){
                        valid = false;
                        break;
                    }
                    else flag.pop_back();
                }
                if(brace < 0){
                    valid = false;
                    break;
                }
            } 
            else continue;            
        }
        if(bracket != 0 || square != 0 || brace != 0) valid = false;
        return valid;
    }
};
