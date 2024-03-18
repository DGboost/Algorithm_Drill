function solution(array) {
    const frequency = {};
    array.forEach(number => {
        frequency[number] = (frequency[number] || 0) + 1;
    });

    let maxFrequency = -1;
    let maxFrequencyNumber = -1;
    let dupChecker = false;

    for (const number in frequency) {
        if (frequency[number] === maxFrequency) {
            dupChecker = true;
        }

        if (frequency[number] > maxFrequency) {
            maxFrequencyNumber = parseInt(number);
            maxFrequency = frequency[number];
            dupChecker = false;
        }
    }

    return dupChecker ? -1 : maxFrequencyNumber;
}