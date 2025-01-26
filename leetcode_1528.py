from typing import List

class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        # Create a list to store the rearranged characters
        result = [''] * len(s)
        
        # Place each character at its target index
        for char, index in zip(s, indices):
            result[index] = char
        
        # Join the list into a string and return it
        return ''.join(result)
