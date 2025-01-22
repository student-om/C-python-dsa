class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int> current;
        int n=nums.size();
        subseq(0,nums,ans,n,current);
        return ans;
    }
    void subseq(int index,vector<int> &nums,vector<vector<int>>&ans,int n,vector<int> &current){
        if(index==n){
            ans.push_back(nums);
            return;
        }
        subseq(index+1,nums,ans,n,current);
        current.push_back(nums[index]);
        subseq(index+1,nums,ans,n,current);
        current.pop_back();
    }
};
