class Solution {
  fun removeDuplicates(nums: IntArray): Int {
      var numberChangedIndex: Int = -1
      var memory: Int = -1000
      var count: Int = 0
      nums.forEach {
          if(it != memory) {
              nums[numberChangedIndex+1] = it
              numberChangedIndex += 1
              count += 1
          }

          memory = it
      }

      return count
  }
}