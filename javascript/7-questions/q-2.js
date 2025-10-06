var units=101;
var total=0;
if (units <= 100) {
    total=units*5;
}
else if (units > 100 && units <= 200){
    total=100*5 + (units-100)*7;
}
else{
    total=100*5 + 100*7 + (units-200)*10;
}

console.log("total : " + total);
