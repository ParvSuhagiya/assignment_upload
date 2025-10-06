var sub_1=85;
var sub_2=55;
var sub_3=87;
var sub_4=54;
var sub_5=93;


var total=sub_1+sub_2+sub_3+sub_4+sub_5;
var per=total/5;

console.log("total : "+total);
console.log("percentge : "+per);

if (per >= 90) {
    console.log("A");
    
}
else if (per >= 80 && per < 89) {
    console.log("B");
    
}
else if (per >= 70 && per < 79) {
    console.log("C");
    
}
else if (per >= 60 && per < 69) {
    console.log("D");
}
else{
    console.log("Fail");
}