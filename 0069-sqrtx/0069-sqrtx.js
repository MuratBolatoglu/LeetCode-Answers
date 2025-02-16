/**
 * @param {number} x
 * @return {number}
 */
var mySqrt = function(x) {
    if(x==0) return 0
    if(x==1) return 1

    for(let i=1;i<=Math.floor(x/2)+1;i++){
        if(i*i>x ) return i-1
    }
};