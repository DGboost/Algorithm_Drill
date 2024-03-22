function solution(array) {
    let str = array.join(', ');
    let count = 0;
    for (let c of str) {
        if (c === '7')
            ++count;
    }
    
    return count;
}