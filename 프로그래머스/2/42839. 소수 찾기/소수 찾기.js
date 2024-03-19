function isPrime(num) {
    if (num < 2) 
        return false;
    for (let i = 2; i <= Math.sqrt(num); i++) {
        if (num % i === 0) 
            return false;
    }
    return true;
}

function permutate(arr, str = '', permutations) {
    if (str.length > 0) 
        permutations.add(parseInt(str));
  
    for (let i = 0; i < arr.length; i++) {
        let copy = [...arr];
        copy.splice(i, 1);
        permutate(copy, str + arr[i], permutations);
    }
}

function solution(numbers) {
    const numArray = numbers.split('');
    let permutations = new Set();
  
    permutate(numArray, '', permutations);

    let count = 0;
    permutations.forEach(num => {
        if (isPrime(num)) count++;
    });
  
    return count;
}