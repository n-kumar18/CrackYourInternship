class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0 || nums.size()==1){
            return nums.size();
        }
        int k=1, i=nums[0];
        for(int j=0; j<nums.size(); j++){
            if(nums[j]!=i){
                nums[k]=nums[j];
                i=nums[j];
                k++;
            }
        }
        return k;
    }
};
