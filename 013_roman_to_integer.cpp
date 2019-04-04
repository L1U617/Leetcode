class Solution {
public:
    int romanToInt(string s) {
        int ret = 0, length = s.length();
        int i;
        for(i = 0; i < length - 1; i++){
            if(s[i] == 'I'){
                if(s[i + 1] == 'V'){
                    ret += 4;
                    i++;
                }
                else if(s[i + 1] == 'X'){
                    ret += 9;
                    i++;
                }
                else ret += 1;
            }
            else if(s[i] == 'V') ret += 5;
            else if(s[i] == 'X'){
                if(s[i + 1] == 'L'){
                    ret += 40;
                    i++;
                }
                else if(s[i + 1] == 'C'){
                    ret += 90;
                    i++;
                }
                else ret += 10;
            }
            else if(s[i] == 'L') ret += 50;
            else if(s[i] == 'C'){
                if(s[i + 1] == 'D'){
                    ret += 400;
                    i++;
                }
                else if(s[i + 1] == 'M'){
                    ret += 900;
                    i++;
                }
                else ret += 100;
            }
            else if(s[i] == 'D') ret += 500;
            else if(s[i] == 'M') ret += 1000;
        }
        if(i == length - 1){
            if(s[i] == 'I') ret += 1;
            else if(s[i] == 'V') ret += 5;
            else if(s[i] == 'X') ret += 10;
            else if(s[i] == 'L') ret += 50;
            else if(s[i] == 'C') ret += 100;
            else if(s[i] == 'D') ret += 500;
            else if(s[i] == 'M') ret += 1000;
        }
        return ret;
    }
};

/* 使用map */
/*
class Solution {
public:
    int romanToInt(string s) {
        int ret = 0, length = s.length();
        int i;
        unordered_map<char, int> m = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        for(i = 0; i < length - 1; i++){
            if(s[i] == 'I'){
                if(s[i + 1] == 'V' || s[i + 1] == 'X'){
                    ret += m[s[i + 1]] - 1;
                    i++;
                }
                else ret += 1;
            }
            else if(s[i] == 'V') ret += 5;
            else if(s[i] == 'X'){
                if(s[i + 1] == 'L' || s[i + 1] == 'C'){
                    ret += m[s[i + 1]] - 10;
                    i++;
                }
                else ret += 10;
            }
            else if(s[i] == 'L') ret += 50;
            else if(s[i] == 'C'){
                if(s[i + 1] == 'D' || s[i + 1] == 'M'){
                    ret += m[s[i + 1]] - 100;
                    i++;
                }
                else ret += 100;
            }
            else if(s[i] == 'D') ret += 500;
            else if(s[i] == 'M') ret += 1000;
        }
        if(i == length - 1){
            ret += m[s[i]];
        }
        return ret;
    }
    */
};
