function solution(num_list) {
    const array = [0, 0]; 
    
    for (const num of num_list) {
        if (num % 2 == 0)
            array[0]++;
        else
            array[1]++;
    }
    
    return array;
}