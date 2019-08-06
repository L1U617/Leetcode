class Solution {
public:
    int calculate(string s) {
        vector<char> op;
        vector<int> num;
        int i, j;
        int first, second;
        int flag = 0, temp = 0;
        int ret;
        char operate;
        for(i = 0; i < s.length(); i++){
            if(s[i] == ' ') continue;
            else if(s[i] >= '0' && s[i] <= '9'){
                temp = temp * 10 + (s[i] - '0'); 
                if(i < s.length() - 1 && (s[i + 1] >= '0' && s[i + 1] <= '9')){
                    continue;
                }
                else{
                    num.push_back(temp);
                    temp = 0;
                }
                if(op.size() == 0){
                    continue;
                } 
                operate = op[op.size() - 1];
                if(operate == '/' || operate == '*'){
                    second = num[num.size() - 1];
                    num.pop_back();
                    first = num[num.size() - 1];
                    num.pop_back();
                    if(operate == '*')
                        num.push_back(first * second);
                    else if(operate == '/')
                        num.push_back(first / second);
                    op.pop_back();
                    }
            }
            else{     
                op.push_back(s[i]);      
            }
        }
        j = 0;
        for(i = 0; i < num.size() - 1; i++){
            operate = op[j++];
            first = num[i];
            second = num[i + 1];
            if(operate == '+')
                num[i + 1] = first + second;
            else if(operate == '-')
                num[i + 1] = first - second;            
        }
        ret =  num[num.size() - 1];
        return ret;
    }
};
