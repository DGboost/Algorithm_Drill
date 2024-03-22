function solution(participant, completion) {
    const hash = new Map();

    participant.forEach(name => {
        if (hash.has(name))
            hash.set(name, hash.get(name) + 1);
        else
            hash.set(name, 1);
    });

    completion.forEach(name => {
        if (hash.has(name))
            hash.set(name, hash.get(name) - 1);
    });
    
    for (let [name, count] of hash)
        if (count > 0)
            return name;
}