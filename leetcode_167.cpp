class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1,sum;
        vector<int>v;
        
        while(start<end){
            sum=nums[start]+nums[end];
            if(sum==target){
                v.push_back(start);
                v.push_back(end);
                return v;
            }
            else if(sum>target){
                end--;
            }
            else{
                start++;
            }
        }
        return v;
    }
};
