var arr=[1,2,3,4,5,6,7,8,9,10];
var p=0;
var n=0;
var z=0;
for(i=0;i<arr.length;i++){
    if (arr[i] > 0) {
        p++;
    }
    else if(arr[i] < 0){
        n++;
    }
    else{
        z++;
    }
}
console.log("positive : "+p);
console.log("negative : "+n);
console.log("zero : "+z);