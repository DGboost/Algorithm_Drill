function solution(array) {
    const frequency = {};
    let maxFreq = 0;
    let mode = -1;
    
    array.forEach(num => {
        if (frequency[num])
            frequency[num]++;
        else
            frequency[num] = 1;
        
        if (frequency[num] > maxFreq) {
            maxFreq = frequency[num];
            mode = num;
		}
    });
    
    const modes = Object.values(frequency).filter(freq => freq === maxFreq);
    if (modes.length > 1)
        return -1;
    
    return mode;
}
