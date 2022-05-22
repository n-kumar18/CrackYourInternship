class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int count=0, sum=0;
        vector<int> ans(k, 0);
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            ans[((sum%k)+k)%k]++;
        }
        count+=ans[0]*(ans[0]+1)/2;
        for(int i=1; i<k; i++){
            count+=ans[i]*(ans[i]-1)/2;
        }
    return count;
    }
};
