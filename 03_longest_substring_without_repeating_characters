class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, cnt = 1, longest = 0, length = s.length(); 
        vector<int> m(127);
        while(i < length){
            fill(m.begin(), m.end(), -1);
            int j = i + 1, flag = 0;
            cnt = 1;
            m[s[i]] = i;
            for(j; j < length; j++){
                if(m[s[j]] == -1){
                    cnt++;
                    m[s[j]] = j;
                }
                else{
                    flag = 1;
                    i = m[s[j]] + 1;
                    break;
                }
            }
            if(longest < cnt)
                longest = cnt;            
            if(flag == 0) i = j;
        }
        return longest;
    }
};
