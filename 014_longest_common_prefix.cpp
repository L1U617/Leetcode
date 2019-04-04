class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int length = strs.size(), minL = INT_MAX;
        string ret;
        if(length == 0) return ret;
        for(int i = 0; i < length; i++)
            if(strs[i].length() < minL) minL = strs[i].length();
        for(int i = 0; i < minL; i++){
            char tmp = strs[0][i];
            int j = 1;                
            for(j; j < length; j++){
                if(strs[j][i] != tmp)
                    break;
                tmp = strs[j][i];
            }
            if(j == length) ret.push_back(tmp);
            else break;
        }
        return ret;
    }
};
