class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        left=0
        n=len(nums)
        for right in range(0,n):
            if nums[right]!=val:
                nums[left]=nums[right]
                left+=1;
        return left        

