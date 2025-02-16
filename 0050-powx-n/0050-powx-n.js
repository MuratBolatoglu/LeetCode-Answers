/**
 * @param {number} x
 * @param {number} n
 * @return {number}
 */
var myPow = function(x, n) {
    if(n<0) return 1/Math.pow(x,n*(-1))
    return Math.pow(x,n)
};