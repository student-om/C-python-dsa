//
class Solution(object):
    def uniqueMorseRepresentations(self, words):
        """
        :type words: List[str]
        :rtype: int
        """
        s='abcdefghijklmnopqrstuvwxyz'
        d=[".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        m={}
        a=0
        for i in s:
            m[i]=d[a]
            a+=1
        s=set()
        for  i in words:
            x=''
            for j in i:
                x+=m[j]
            s.add(x)
        return len(s)
            
