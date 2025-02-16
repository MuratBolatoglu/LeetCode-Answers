/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var findMedianSortedArrays = function(nums1, nums2) {
    list=nums1.concat(nums2)
    list.sort( function( a , b){
    if(a > b) return 1;
    if(a < b) return -1;
    return 0;
});
    if(list.length%2==0){
      return (list[Math.floor(list.length/2)] + list[Math.floor(list.length/2)-1])/2
    }
    return list[Math.floor(list.length/2)]
};
function compare(){
    return a-b
}