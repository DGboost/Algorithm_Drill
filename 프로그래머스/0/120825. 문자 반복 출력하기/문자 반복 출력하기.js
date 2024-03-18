function solution(my_string, n) {
    const answer = [...my_string].map(ch => ch.repeat(n));
    
    return answer.join('');
}