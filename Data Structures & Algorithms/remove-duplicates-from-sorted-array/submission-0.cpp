class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int left=0;
       for(int right=0;right<nums.size();right++){
        if(nums[right]!=nums[left]){
            left++;
            nums[left]=nums[right];
        }
       }
       return left+1;
    }
};