class Solution {
public:
    int vol(int i, int j, vector<int>& height){
        return (j-i)*min(height[i], height[j]);
    }
    int maxArea(vector<int>& height) {
        int low=0, high=height.size()-1, ans=vol(low, high, height);
        while(low<high){
            if(height[low]<height[high]){
                low++;
                if(height[low]<=height[low-1])
                    continue;
                ans=max(ans, vol(low, high, height));
            }
            else{
                high--;
                if(height[high]<=height[high+1])
                    continue;
                ans=max(ans, vol(low, high, height));
            }
        }
        return ans;
    }
};
