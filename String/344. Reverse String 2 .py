"""
problem link = https://leetcode.com/problems/reverse-string/
"""

class Solution(object):
    def reverseString(self, s):
        low, high = 0, len(s)-1
        
        while high>low:
            s[low], s[high] = s[high], s[low]
            low = low +1
            high = high -1
            
            
'''
Example 1:
Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
  
Example 2:
Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
'''
