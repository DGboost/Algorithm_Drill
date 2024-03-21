function solution(i, j, k) {
    let count = 0;
    for (let number = i; number <= j; number++)
        count += (number.toString().split(k.toString()).length - 1);
        
    return count;
}