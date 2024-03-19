function solution(brown, yellow) {
    for (let i = 1; i <= Math.sqrt(yellow); ++i) {
        if (yellow % i === 0) {
            const width = yellow / i;
            const height = i;
            if (brown === (width + 2) * (height + 2) - yellow)
                return [width + 2, height + 2];
        }
    }
}