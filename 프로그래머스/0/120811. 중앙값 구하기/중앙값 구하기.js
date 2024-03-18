const solution = (array) => {
    array.sort((a,b) => a - b);
    let midIndex = Math.floor(array.length / 2);
    return array[midIndex];
}