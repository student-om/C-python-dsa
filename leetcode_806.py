class Solution(object):
    def numberOfLines(self, widths, s):
        """
        :type widths: List[int]
        :type s: str
        :rtype: List[int]
        """
        lines=1
        width=0
        m={}
        a = "abcdefghijklmnopqrstuvwxyz"
        for i in range(len(a)):
            m[a[i]]=widths[i]
        
        for i in s:
            if  width+m[i]<=100:
                width+=m[i]
            else:
                
                lines+=1
                width=m[i]
