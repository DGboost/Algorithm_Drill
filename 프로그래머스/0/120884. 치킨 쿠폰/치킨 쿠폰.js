function solution(chicken) {
    let answer = 0;
    while (chicken >= 10) {
        let newChicken = Math.floor(chicken / 10); 
        answer += newChicken; 
        chicken = newChicken + (chicken % 10); 
    }
    
    return answer;
}
