var findDuplicates = function (nums) {
  // Create an array 'arr' of size nums.length + 1, filled with 0s
  let arr = new Array(nums.length + 1).fill(0);

  // Iterate over each element 'x' in the input array 'nums'
  for (let x of nums) {
    // Increment the count of the number 'x' in the 'arr'
    const temp = arr[x]++;
    console.log(temp);
  }

  // Initialize an empty array 'res' to store the result
  let res = [];

  // Iterate over the 'arr' to find numbers that appear exactly twice
  for (let i = 0; i < arr.length; i++) {
    // If the count of number 'i' is 2, add 'i' to the result array 'res'
    if (arr[i] == 2) res.push(i);
  }

  // Return the result array 'res' containing all duplicate numbers
  return res;
};

const arr = [1, 2, 3, 4, 5, 6, 2, 3, 4];
console.log(findDuplicates(arr));
