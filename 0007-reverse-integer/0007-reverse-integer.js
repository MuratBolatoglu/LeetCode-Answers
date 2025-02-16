/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    let y=x
    if(y<0) y*=(-1)
    y=String(y)
    y=y.split("").reverse().join("")
    if(x<0) y*=(-1)
    if(y>2147483647 || y<-2147483648) return 0
    return y
};