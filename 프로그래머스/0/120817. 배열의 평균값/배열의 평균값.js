function solution(numbers) {
    const answer = numbers.reduce((accumulator, currentValue) => accumulator + currentValue);
    return answer / numbers.length;
}