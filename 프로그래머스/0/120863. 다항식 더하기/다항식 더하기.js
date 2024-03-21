function solution(polynomial) {
    let terms = polynomial.split(' + ');

    let coefficientOfX = 0; 
    let constant = 0; 

    terms.forEach(term => {
        if (term.includes('x')) {
            const coefficient = term.replace('x', '') || '1'; 
            coefficientOfX += parseInt(coefficient);
        } else {
            constant += parseInt(term);
        }
    });

    let result = '';
    if (coefficientOfX !== 0) {
        result += coefficientOfX === 1 ? 'x' : `${coefficientOfX}x`;
    }
    if (constant !== 0) {
        if (result.length > 0) result += ' + ';
        result += constant;
    }
    
    return result || '0';
}