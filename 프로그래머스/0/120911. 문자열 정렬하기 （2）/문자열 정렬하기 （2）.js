function solution(my_string) {
    const charsArray = my_string.toLowerCase().split('');
    
    const sortedArray = charsArray.sort();
    
    return sortedArray.join('');
}
