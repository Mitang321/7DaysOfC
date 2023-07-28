// #include<stdio.h>
// void areacircle();
// void arearectangle();
// void areatriangle();
// void ctof();
// void perimetercircle();
// void simpleinterest();
// void areasquare();
// void swap1();
// void swap2();
// void xyz_cu();
// void xy_cu();
// void xy_sq();

// int main() {
// printf("1. Area Of Circle\n2. Area Of Rectangle\n3. Area Of Triangle\n4. Celcius To Farenhite\n5. Perimeter Of Circle\n6. Simple Interest\n7. Area Of Square\n8. Swap Type1\n9. Swap Type 2\n10. x-y-z^3\n11. x-y^3\n12. x-y^2\n");
// int num;
// scanf("%d", &num);

// if(num == 1){
// areacircle ();
// } 

// else if(num == 2){
//     arearectangle();
// }

// else if(num == 3){
//     areatriangle();
// }

// else if(num == 4){
//     ctof();
// }

// else if(num == 5){
//     perimetercircle();
// }

// else if(num == 6){
//     simpleinterest();

// }else if(num == 7){
//     swap1();

// }else if(num == 8){
//     swap2();
// }

// else if(num == 9){
//     swap2();
// }

// else if(num == 10){
//     swap2();
// }

// else if(num == 11){
//     swap2();
// }

// else if(num == 12){
//     xyz_cu();
// }

// else if(num == 13){
//     xy_cu();
// }



//          return 0;

// }

// void areacircle(){

// float radius;
// printf("Enter Radius");
// scanf("%f", &radius);

// printf("Area is : %f unit^2", 3.14 * radius * radius);

// }

// void arearectangle(){
// float side1, side2;
// printf("Enter Length...");
// scanf("%f", &side1);

// printf("Enter Width... ");
// scanf("%f", &side2);


// printf("Area is : %f unit^2", side1 * side2);
// }

// void areatriangle(){

// float base, height;
// printf("Enter Base...");
// scanf("%f", &base);

// printf("Enter Height... ");
// scanf("%f", &height);


// printf("Area is : %f unit^2",(base*height)/2);

// }


// void ctof(){
// float celsius,faherenheit;
// printf("Enter Temperature In Celcius");
// scanf("%f", &celsius);


//         //Convert
// faherenheit = (celsius * 1.8) + 32;

// printf("%f Celcius = %f Fahrenheit", celsius, faherenheit);
// }


// void perimetercircle(){
// float radius;
// printf("enter radius");
// scanf("%f", &radius);

// printf("Perimeter is : %f unit^2", 2 * 3.14 * radius);
// }

// void simpleinterest(){

//     float amount, time, rate, SI;

// printf("Enter Amoumt: ");
// scanf("%f", &amount);


// printf("Enter Time(in Years): ");
// scanf("%f", &time);

// printf("Enter Rate: ");
// scanf("%f", &rate);

// SI = (amount * time * rate) /100;

// printf("Simple Interest = %f", SI);
// }

// void squarearea(){
//     float side;
// printf("Enter Side");
// scanf("%f", &side);

// printf("Area is : %f side^2",side * side);
// }

// void swap1(){
//     int x,y,z;

// printf("Enter Value Of X: ");
// scanf("%d",&x);

// printf("Enter Value Of Y: ");
// scanf("%d",&y);
        
// z = x;
// x = y;
// y = z;


// printf("After Swap X = %d and Y = %d \n", x, y);
// }

// void swap2(){
//     int x,y;

// printf("Enter Value Of X: ");
// scanf("%d",&x);

// printf("Enter Value Of Y: ");
// scanf("%d",&y);
        
// x = x + y;
// y = x - y;
// x = x - y;


// printf("After Swap X = %d and Y = %d \n", x, y);
// }

// void xyz_cu(){
//     int x,y,z;
// printf("Enter x");
// scanf("%d", &x);

// printf("Enter y");
// scanf("%d", &y);

// printf("Enter z");
// scanf("%d", &y);

// int cube = (x-y-z) * (x-y-z) * (x-y-z)  ;
// printf("Answer is : %d", cube);
// }


// void xy_cu(){
//     int x,y;
// printf("Enter Value Of x");
// scanf("%d", &x);

// printf("Enter Valuse Of y");
// scanf("%d", &y);

// int square = (x-y) * (x-y) * (x-y)  ;
// printf("Answer is : %d", square);
// }

// void xy_sq(){
// int x,y;
// printf("Enter Valuse Of x");
// scanf("%d", &x);

// printf("Enter Value Of y");
// scanf("%d", &y);

// int square = (x-y) * (x-y);
// printf("Answer is : %d", square);
// }

// void xyzcu(){
//     int x,y,z;
// printf("Enter x");
// scanf("%d", &x);

// printf("Enter y");
// scanf("%d", &y);

// printf("Enter z");
// scanf("%d", &y);

// int square = (x+y+z) * (x+y+z) * (x+y+z)  ;
// printf("Answer is : %d", square);
// }


