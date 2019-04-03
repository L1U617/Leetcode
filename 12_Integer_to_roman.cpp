class Solution {
public:
    string intToRoman(int num) {
        unordered_map<int, char> mapp = {{1, 'I'}, {5, 'V'}, {10, 'X'}, {50, 'L'}, {100, 'C'}, {500, 'D'}, {1000, 'M'}};
        int tmp = num, cnt;
        string ret;
        while(tmp != 0){
            if(tmp / 1000 != 0){
                cnt = tmp / 1000;
                for(int i = 0; i < cnt; i++)
                    ret.push_back('M');
                tmp = tmp % 1000;
            }
            else if(tmp >= 900 && tmp < 1000){
                ret.push_back('C');
                ret.push_back('M');
                tmp = tmp - 900;
            }
            else if(tmp >= 500 && tmp < 900){
                ret.push_back('D');
                tmp = tmp - 500;
            }
            else if(tmp >= 400 && tmp < 500){
                ret.push_back('C');
                ret.push_back('D');
                tmp = tmp - 400;
            }
            else if(tmp >= 100 && tmp < 400){
                ret.push_back('C');
                tmp = tmp - 100;
            }
            else if(tmp >= 90 && tmp < 100){
                ret.push_back('X');
                ret.push_back('C');
                tmp = tmp - 90;
            }
            else if(tmp >= 50 && tmp < 90){
                ret.push_back('L');
                tmp = tmp - 50;
            }
            else if(tmp >= 40 && tmp < 50){
                ret.push_back('X');
                ret.push_back('L');
                tmp = tmp - 40;
            }
            else if(tmp >= 10 && tmp < 40){
                ret.push_back('X');
                tmp = tmp - 10;
            }
            else if(tmp >= 9 && tmp < 10){
                ret.push_back('I');
                ret.push_back('X');
                tmp = tmp - 9;
            }
            else if(tmp >= 5 && tmp < 9){
                ret.push_back('V');
                tmp = tmp - 5;
            }
            else if(tmp >= 4 && tmp < 5){
                ret.push_back('I');
                ret.push_back('V');
                tmp = tmp - 4;
            }
            else if(tmp >= 1 && tmp < 4){
                ret.push_back('I');
                tmp = tmp - 1;
            }
            
        }
        return ret;
    }
};
