class Solution {
  fun strStr(haystack: String, needle: String): Int {
      if(needle == "") return 0
      val startIndexList = mutableListOf<Int>()

      val hl = haystack.length
      val nl = needle.length
      haystack.forEachIndexed { index, c ->
          if(c == needle[0] && index + nl <= hl){
              startIndexList.add(index)
          }
      }

      if(startIndexList.size == 0) return -1

      var isContain = false
      for (startIndex in startIndexList) {
          isContain = true
          for (i in startIndex until startIndex+nl){
              if(haystack[i] != needle[i - startIndex]){
                  isContain = false
              }
          }
          if(isContain) return startIndex
      }

      return -1
  }
}