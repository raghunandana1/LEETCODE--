class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        
        a=strs[0]
        for i in range(0,len(strs)):
            j=0
            while j<len(a) and j<len(strs[i]) and a[j]==strs[i][j]:
                j+=1
            a=a[:j]
            
            if a=="":
                 return(a) 
        return(a)
        
