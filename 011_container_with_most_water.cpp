class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = 0, maxVolume = 0, volume, n = height.size();
        int left, right;
        for(int i = 0; i < height.size(); i++)
            if(height[i] > max) max = height[i];
        for(int j = 1; j <= max; j++){
            left = 0; right = n - 1;
            while(height[left] < j && left < n) left++;
            while(height[right] < j && right > 0) right--;
            volume = j * (right - left);
            if(volume > maxVolume) maxVolume = volume;
        }
        return maxVolume;
    }
};
