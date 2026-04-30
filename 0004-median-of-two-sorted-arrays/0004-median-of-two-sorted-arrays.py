class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
     merge=sorted(nums1+nums2)
     mid=len(merge)//2
     if(len(merge)%2!=0):
       return float(merge[mid])
     else:
        return ((merge[mid-1]+merge[mid])/2.0)


        