/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    if(x<0) return false
    y=String(x).split("").reverse().join("")
    if(String(x)==y) return true
    return false
};