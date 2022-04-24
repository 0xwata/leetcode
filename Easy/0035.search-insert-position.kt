class Solution {
  fun searchInsert(nums: IntArray, target: Int): Int {
      val min = nums.min()!!  // 1 <= nums.length <= 10^4
      if(target <= min) return 0
      
      val max = nums.max()!!  // 1 <= nums.length <= 10^4
      if(target > max) return nums.size!!  // 1 <= nums.length <= 10^4
   
      
      val middle = ( max + min ) / 2
      val isStartFromLeft = target - middle < 0 // 1 <= nums.length <= 10^4
      return if (isStartFromLeft) searchInsertFromLeft(nums, target) else searchInsertFromRight(nums, target)
  }

  private fun searchInsertFromLeft(nums: IntArray, target: Int): Int {
      for(index in nums.indices) {
          if(target <= nums[index]) return index
      }
      return 0
  }
  private fun searchInsertFromRight(nums: IntArray, target: Int): Int{
      for (index in nums.size-1 downTo 0){
          if(target > nums[index]) return index+1
          if(target == nums[index]) return index
      }
      return nums.size
  }
}