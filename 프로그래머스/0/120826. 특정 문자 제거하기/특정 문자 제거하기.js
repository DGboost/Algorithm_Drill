function solution(my_string, letter) {
    const answer = [];
    
    for (const ch of my_string) {
        if (ch != letter)
            answer.push(ch);
    }
    
    return answer.join('');
}