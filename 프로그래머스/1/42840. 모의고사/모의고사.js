function solution(answers) {
    const one = [1, 2, 3, 4, 5];
    const two = [2, 1, 2, 3, 2, 4, 2, 5];
    const three = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5];

    let scores = [0, 0, 0]; 

    for (let i = 0; i < answers.length; ++i) {
        if (answers[i] === one[i % 5]) 
            ++scores[0];

        if (answers[i] === two[i % 8]) 
            ++scores[1];

        if (answers[i] === three[i % 10]) 
            ++scores[2];
    }

    const maxScore = Math.max(...scores); 
    let result = [];

    for (let i = 0; i < scores.length; ++i) {
        if (scores[i] === maxScore) {
            result.push(i + 1);
        }
    }

    return result; 
}
