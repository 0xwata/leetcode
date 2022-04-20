class Solution {
  fun removeElement(nums: IntArray, `val`: Int): Int {
      val numsCopy = nums.copyOf()
      val numsFilter = numsCopy.filter { it != `val`}
      val result = numsFilter.size
      for(i in 0 until result){
          nums[i] = numsFilter[i]
      }
      return result
  }
}