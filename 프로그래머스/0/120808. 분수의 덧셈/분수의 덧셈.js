const fnGcd = (num1, num2) => (num1 % num2) ? fnGcd(num2, num1 % num2) : num2;

const solution = (numer1, denom1, numer2, denom2) => {
    let newNumer = (numer1 * denom2) + (numer2 * denom1);
    let newDenom = denom1 * denom2; 
    let gcd = fnGcd(newNumer, newDenom);
    
    return [newNumer/gcd, newDenom/gcd];
}