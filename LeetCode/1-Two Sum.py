#Samed AL-Hajajla
#https://leetcode.com/problems/two-sum/
class Solution:
    def twoSum(self, nums, target):
        record = {}
        for i,number in enumerate(nums):
            if (target-number) in record.keys():
                return [record[(target-number)], i]
            record[number] = i
                
