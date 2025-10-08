var arr=[1,2,3,4,5,6,7,8,9,10];
var largest = arr[0];
var s_largest = arr[0];

for(i=0;i<arr.length;i++){
    if(arr[i]>largest){
        largest = arr[i];
    }
}
// for(i=0;i<arr.length;i++){
//     if(arr[i]<largest && arr[i]>s_largest){
//         s_largest = arr[i];
//     }
// }    

console.log(s_largest);