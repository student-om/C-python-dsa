class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int index=0;
        int n=nums.size();
        vector<int>result;
        for(int i=0;i<n;i++){
            if(nums[i]<pivot){
                result.push_back(nums[i]);
                index++;
            }
            
        }
        for(int i=0;i<n;i++){
            if(nums[i]==pivot){
                result.push_back(nums[i]);
                index++;
            }
            
        }
        for(int i=0;i<n;i++){
            if(nums[i]>pivot){
                result.push_back(nums[i]);
                index++;
            }
            
        }
        return result;
    }
};
