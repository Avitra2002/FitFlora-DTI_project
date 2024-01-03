// #include <LiquidCrystal.h>
// LiquidCrystal lcd( 12, 11, 10, 9, 8, 7); 
// // THE ABOVE IS TO BE FIXED

// unsigned long start_time;
// unsigned long elapsed_time;
// int duration_set = 45000;
// int duration_rest = 10000;


// void LCD_setup_ready() {
//   lcd.print("  SETUP  READY  ");
//   delay(1000);
//   lcd.setCursor(0, 1);    
//   lcd.print("3");
//   delay(200); 
//   lcd.print(".");
//   delay(200); 
//   lcd.print(".");
//   delay(200); 
//   lcd.print(".");
//   delay(200); 
//   lcd.print("  ");
//   delay(600);

//   lcd.print("2");
//   delay(200); 
//   lcd.print(".");
//   delay(200); 
//   lcd.print(".");
//   delay(200); 
//   lcd.print(".");
//   delay(200); 
//   lcd.print("  ");
//   delay(600);

//   lcd.print("1");
//   delay(200); 
//   lcd.print(".");
//   delay(200); 
//   lcd.print(".");
//   delay(200); 
//   lcd.print(".");
//   delay(200); 
//   lcd.print(" ");
//   delay(600);

//   lcd.clear();
//   lcd.print("   GOOO!!!!!!");
//   delay(1000);
//   lcd.clear();
//   lcd.setCursor(0, 0);
//   lcd.clear();
// } 

// // void setup() {
// //   // Initialize serial communication
// //   Serial.begin(9600);
// //   lcd.begin(16, 2);
// //   setup_ready();
// //   delay(50);

// //   // Set the switch_timer to true to start the first timer
// //   switch_timer = true;  
// // }


// // IMPORTANT!!! FOR DECIDING WHETHER OR NOT TO TURN ON SENSORS 
// bool timer_on = false;

// // TIMER P → PHASE P, WORKOUT PHASE
// void timer_p() {
//   start_time = millis();

//   for (int i = 0; i < 45; i++) {
//     unsigned long time_left =  start_time + duration_set - millis();
//     lcd.print("  Workout Time");
//     lcd.setCursor(0, 1);    
//     if (i <= 35) {
//       lcd.print("       ");
//       lcd.print(round(66000 + time_left) / 1000);
//       delay(1000);
//       lcd.clear();
//     } else {
//       lcd.print("        ");
//       lcd.print(round(65800 + time_left) / 1000);
//       delay(1000);
//       lcd.clear();
//     } 
//   }
// }

// // TIMER Q → PHASE Q, REST PHASE
// void timer_q() {
//   start_time = millis();

//   for (int i = 0; i < 15; i++) {
//     unsigned long time_left =  start_time + duration_set - millis();
//     lcd.setCursor(0, 0);    
//     lcd.print("      REST");
//     lcd.setCursor(0, 1);    
//     lcd.print("       ");
//     lcd.print(round(35800 + time_left) / 1000);
//     delay(1000);
//     lcd.clear();
//   }  
// }



// void run_timer() {
//   timer_p();
//   timer_q();
// }


















