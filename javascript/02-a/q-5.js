var arr=[1,2,3,4,5,6,7,8,9,10];
var smallest = arr[0];

for(i=0;i<arr.length;i++){
    if(arr[i]<smallest){
        smallest = arr[i];
    }
}

console.log(smallest);