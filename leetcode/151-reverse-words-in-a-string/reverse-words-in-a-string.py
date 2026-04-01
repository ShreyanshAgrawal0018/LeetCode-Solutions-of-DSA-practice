class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        l=s.split()
        str= ""
        for i in range(len(l)-1, -1, -1) :
            str += l[i]
            str += " "
        return str[0:len(str)-1]
            