#include "Rotate.h"


void rotate(vector<int>& nums, int k) {
  //   +=====================================================+
  //   |                 WRITE YOUR CODE HERE                |
  //   | Description:                                        |
  //   | - This function rotates the array 'nums' to the     |
  //   |   right by 'k' steps.                               |
  //   | - The method used involves reversing parts of the   |
  //   |   array.                                            |
  //   |                                                     |
  //   | Return type: void                                   |
  //   |                                                     |
  //   | Tips:                                               |
  //   | - 'k' is first made smaller by taking modulo size.  |
  //   | - Three reversals are done to achieve the rotation. |
  //   | - Check output from Test.cpp in "User logs".        |
  //   +=====================================================+
   int n = nums.size(); // Get the size of the array

    // Check if the array is empty or if no rotation is needed
    if (n == 0 || k % n == 0) {
        return; // Early return if no rotation is needed or possible
    }

    k = k % n; // Ensure k is within the bounds of the array's length

    // Reverse the entire array
    std::reverse(nums.begin(), nums.end());

    // Reverse the first k elements
    std::reverse(nums.begin(), nums.begin() + k);

    // Reverse the remaining n-k elements
    std::reverse(nums.begin() + k, nums.end());
}