/**
 * @param {number[]} sat
 * @return {number}
 */
var maxSatisfaction = function(sat) {
    sat=sat.sort(function(a, b){return a - b});
   let max=0,n=0
   console.log(sat)
   for(let i=0;i<sat.length;i++){
       let sum=0,n=1
       for(let j=i;j<sat.length;j++){
           sum+=sat[j]*n
           n++
           if(sum >max) max=sum
       }
   }
   return max
};