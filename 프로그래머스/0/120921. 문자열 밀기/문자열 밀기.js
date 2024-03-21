function solution(A, B) {
    if (A === B) 
        return 0;
    
    let count = 0; 
    const length = A.length;
    for (let i = 0; i < length; i++) {
        A = A[length - 1] + A.substring(0, length - 1);
        count++;
        
        if (A === B) 
            return count;
    }
    
    return -1;
}