var num_1 = 12;
var num_2 = 42;
var num_3 = 72;

var largest;

if (num_1 >= num_2 && num_1 >= num_3) {
    largest = num_1;
} else if (num_2 >= num_1 && num_2 >= num_3) {
    largest = num_2;
} else {
    largest = num_3;
}

console.log("The largest number is: " + largest);
