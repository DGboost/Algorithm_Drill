function playDungeons(k, dungeons, answer, count) {
    answer.max = Math.max(answer.max, count);

    for (let i = 0; i < dungeons.length; ++i) {
        if (k >= dungeons[i][0]) { 
            let copy = [...dungeons];
            copy.splice(i, 1); 
            playDungeons(k - dungeons[i][1], copy, answer, count + 1); 
        }
    }
}

function solution(k, dungeons) {
    let answer = {max: 0};
    playDungeons(k, dungeons, answer, 0);

    return answer.max; 
}
