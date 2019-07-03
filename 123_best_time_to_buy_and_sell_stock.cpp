class Solution {
public:
    int MaxSeq(vector<int> A, int start, int end){
        int thisSum = 0 , max = 0;
        for(int i = start; i <= end; i++){
            thisSum += A[i];
            if(thisSum < 0) thisSum = 0;
            else if(thisSum > max) max = thisSum;
        }
        return max;
    }
    int maxProfit(vector<int>& prices) {
        int maxP = 0;
        int days = prices.size();
        if(days == 0) return 0;
        vector<int> diff(days - 1);
        int i;
        for(i = 1; i < days; i++){
            diff[i - 1] = prices[i] - prices[i - 1];
        }
        int flag = 0, g1, g2;
        for(i = 0; i < days - 1; i++){
            if(diff[i] < 0){
                flag = 1;
                g1 = MaxSeq(diff, 0, i - 1);
                g2 = MaxSeq(diff, i + 1, days - 2);
                if(maxP < g1 + g2)
                    maxP = g1 + g2;
            }
        }
        if(flag == 0) maxP = prices[days - 1] - prices[0];
        
        return maxP;
        
        //超时版本
        /*int maxP = 0, tmpMax;
        int days = prices.size();
        vector<int> in(days, 0);
        vector<int> out(days, 0);
        int i, j, profit; // i -> in, j -> out;
        
        for(i = 0; i < days; i++){
            for(j = days - 1; j >= 0; j--){
                if(j <= i) break;
                profit = prices[j] - prices[i];
                if(in[i] < profit) in[i] = profit;
                if(out[j] < profit) out[j] = profit;
            }
        }
        
        for(i = 0; i < days; i++){
            tmpMax = out[i];
            for(j = i + 1; j < days; j++){
                if(tmpMax < out[i] + in[j]) tmpMax = out[i] + in[j];
            }
            if(maxP < tmpMax) maxP = tmpMax;
        }
        return maxP;*/
    }
};
