function solution(emergency) {
    const sorted = [...emergency].sort((a, b) => b - a);
    
    const answer = emergency.map(num => sorted.indexOf(num) + 1);
    
    return answer;
}