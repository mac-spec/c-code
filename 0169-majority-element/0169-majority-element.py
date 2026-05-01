class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        item=0
        count=0
        for i in nums:
            if count==0:
                item=i
            count+=(1 if i==item else -1)
        return item



        