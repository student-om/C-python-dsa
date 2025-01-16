class Solution:
    def xorAllNums(self, nums1: List[int], nums2: List[int]) -> int:
        freq={}
        a=len(nums1)
        b=len(nums2)
        for i in nums1:
            freq[i]=freq.get(i,0)+b
        for i in nums2:
            freq[i]=freq.get(i,0)+a
        ans=0
        for nums in freq:
            if freq[nums]%2==0:
                pass
            else:
                ans^=nums
        return ans
