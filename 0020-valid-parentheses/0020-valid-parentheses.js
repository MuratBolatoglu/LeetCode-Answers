/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function(s) {
   while (s.length>=0){
       if(s.includes("()")) s=s.replace("()","")
       else if(s.includes("[]")) s=s.replace("[]","")
       else if(s.includes("{}")) s=s.replace("{}","")
       else if(s.length==0) return true
       else return false
   } 
};