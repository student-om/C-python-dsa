class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int s1=0;
        int s2=0;
        int count=0;
        while(s2<nums.size()){
            if(nums[s1]==nums[s2]){
                count++;
                s2++;
            }
            else{
                count--;
                s2++;
            }
            if(count==0){
                s1=s2;
            }


        }
        return nums[s1];
    }
};
