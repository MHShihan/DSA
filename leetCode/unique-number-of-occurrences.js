var uniqueOccurrences = function (arr) {
  arr.sort((a, b) => a - b);
  console.log(arr);

  let countArray = [];

  for (let i = 0; i < arr.length; i++) {
    let count = 1;

    //    Count occurrences of current element;
    while (i + 1 < arr.length && arr[i] === arr[i + 1]) {
      count++;
      i++;
    }

    countArray.push(count);
  }
  console.log(countArray);

  countArray.sort((a, b) => a - b);

  for (let i = 1; i < countArray.length; i++) {
    if (countArray[i] === countArray[i - 1]) {
      return false;
    }
  }

  return true;
};

const arr = [
  26, 2, 16, 16, 5, 5, 26, 2, 5, 20, 20, 5, 2, 20, 2, 2, 20, 2, 16, 20, 16, 17,
  16, 2, 16, 20, 26, 16,
];
console.log(uniqueOccurrences(arr));
