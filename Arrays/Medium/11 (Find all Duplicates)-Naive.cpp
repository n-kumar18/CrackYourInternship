class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        int count[100000]={0};
        for(int i=0; i<nums.size(); i++)
            count[nums[i]]++;
        for(int i=0; i<100000; i++)
            if(count[i]==2)
                ans.push_back(i);
        return ans;
    }
};
