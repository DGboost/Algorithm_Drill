function fnGcd(a, b)
{
    if (b === 0)
        return a
    return fnGcd(b, a % b);
}

function solution(n) {
    let answer = 0;
    let gcd = fnGcd(6, n);
    
    answer = (n / gcd) * (6 / gcd) * gcd;
    
    return answer / 6;
}