class Solution {
public:
    int myAtoi(string str) {
        string tmp;
        int sign = 0, start = 0, cnt = 0;
        int i;
        int ret;
        string min = "-2147483648", max = "2147483647";
        
        for(i = 0; i < str.length(); i++){
            if(sign == 0 && (str[i] == '+' || str[i] == '-')){
                start = i;
                sign = 1;
                cnt++;
            }
            else if(str[i] >= '0' && str[i] <= '9'){
                if(sign == 0) start = i;
                sign = 1;
                cnt++;
            }
            else if(str[i] == ' ' && sign == 0) continue;
            else break;
        }
        
        tmp = str.substr(start, cnt);
        int flag = 0;
        if(tmp.length() == 0 || tmp == "-" || tmp == "+") return 0;
        if(tmp[0] == '+')
            tmp = tmp.substr(1);
        
        for(i = 0; i < tmp.length(); i++){
            if(tmp[i] != '0' && tmp[i] != '-') break;
        }
        if(i != tmp.length()){
            if(tmp[0] == '-'){
            tmp[i - 1] = '-';
            tmp = tmp.substr(i-1);
            }
            else tmp = tmp.substr(i);
        }
        else return 0;

        if(tmp[0] == '-'){
            if(tmp.length() == min.length() && tmp > min || tmp.length() > min.length()) tmp = min;
        }
        else if(tmp.length() == max.length() && tmp > max || tmp.length() > max.length()) tmp = max;
        
        ret = stoi(tmp);
        
        return ret;
    }
};
