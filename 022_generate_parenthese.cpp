class Solution {
public:
    void generate(vector<string> &output, string &str, int idx, int open, int close) {
        if(idx >= str.length()) {
            string s = str;
            output.push_back(s);
            return;
        }
        
        if(open == close) 
        {
            str[idx] = '(';
            generate(output, str, idx+1, open-1, close);
        } 
        else 
        {
            if(open > 0) {
                str[idx] = '('; 
                generate(output, str, idx+1, open-1, close);
            }
 
            if(close > 0) {
                str[idx] =  ')';
                generate(output, str, idx+1, open, close-1);
            }
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> output;
        string str;
        if(n) { 
            str.resize(2*n);
            generate(output, str, 0, n, n);
        }
        return output;
    }
};
