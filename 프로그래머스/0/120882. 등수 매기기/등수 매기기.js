function solution(score) {
    let averages = score.map((s, index) => ({
        avg: (s[0] + s[1]) / 2,
        index: index
    }));

    averages.sort((a, b) => b.avg - a.avg);

    let ranks = new Array(score.length);
    let currentRank = 1;
    for (let i = 0; i < averages.length; i++) {
        if (i > 0 && averages[i].avg !== averages[i - 1].avg)
            currentRank = i + 1;
        
        ranks[averages[i].index] = currentRank;
    }

    return ranks;
}