class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        count ={}
        for n in nums:
            if n not in count :
                count[n] = 0
            count[n]+=1
        
        top = max(count, key =lambda k:count[k])
        return top
        