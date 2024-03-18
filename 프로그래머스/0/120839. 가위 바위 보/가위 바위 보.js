function solution(rsp) {
    const table = {
        2: '0',
        0: '5',
        5: '2',
    }
    
    const answer = [...rsp].map(num => table[num]).join('');
    
    return answer;
}