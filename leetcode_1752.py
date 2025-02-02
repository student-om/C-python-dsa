from typing import List

class Solution:
    def check(self, nums: List[int]) -> bool:
        count = 0
        l = len(nums)

        for i in range(l):
            if nums[i] > nums[(i + 1) % l]:  # Check if rotation breaks sorting
                count += 1

        return count <= 1  # Should break at most once
