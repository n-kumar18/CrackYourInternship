class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count =0, k=0, n=nums.size();
        
        for(int i=0; i<n; i++){
            if(nums[k]==0){
                count++;
                nums.erase(nums.begin()+k);
            }
            else
                k++;
        }
        
        for(int i=0; i<count; i++)
            nums.push_back(0);
    }
};
