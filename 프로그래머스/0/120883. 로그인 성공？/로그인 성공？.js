function solution(id_pw, db) {
    for (let d of db) {
        if (d[0] === id_pw[0]) {
            if (d[1] === id_pw[1])
                return "login";
            return "wrong pw"
        }
    }
    return "fail";
}