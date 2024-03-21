function solution(n) {
    let num = 1; 
    for (let i = 1; i <= n; ++i) {
        while (true) {
            if (num % 3 === 0 || num.toString().includes('3')) {
                num++; 
                continue;
            }
            break; 
        }
        if (i < n)
            num++; 
    }
    return num;
}