class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0,r=0;
        int sum=0;
        int len=INT_MAX;
       for( r=0;r<nums.size();r++){
         sum += nums[r];
         while(sum>= target )
         {
            len=min(len,r-left+1);
            sum -=nums[left];
            left++;
         }
       } return len ==INT_MAX ? 0 : len; 
    }
};