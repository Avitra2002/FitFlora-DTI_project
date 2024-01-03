// ========================================================
// VOID LOOP TO TEST OUT ADVANCED LED PROMPTS
// ========================================================
// void loop() {
  // station(0);  // pushup
  // station(1);  // squat
  // station(2);  // plank

  // run_pattern_4_0();
  // run_pattern_4_1();
  // run_pattern_4_2();

  // run_pattern_3_0();
  // run_pattern_3_1();
  // run_pattern_3_2();

  // run_pattern_2_0();
  // run_pattern_2_1();
  // run_pattern_2_2();

  // run_pattern_1_0();
  // run_pattern_1_1();
  // run_pattern_1_2();

  // run_pattern_0_0();
  // run_pattern_0_1();
  // run_pattern_0_2();

// }





// ========================================================
// VOID STATION, OLD VERSION, WITHOUT FOR J LOOP
// ========================================================

// // OLD VERSION, WITHOUT FOR j LOOP 
// void station(int i) {
//   if (counter_matrix[i] >= myMatrix[i][5]) {
//     pattern_4.run(i);
//   } else if (counter_matrix[i] >= myMatrix[i][4]) {
//     pattern_3.run(i);
//   } else if (counter_matrix[i] >= myMatrix[i][3]) {
//     pattern_2.run(i);
//   } else if (counter_matrix[i] >= myMatrix[i][2]) {
//     pattern_1.run(i);
//   } else if (counter_matrix[i] >= myMatrix[i][1]) {
//     pattern_0.run(i);
//   }
// }



// ========================================================
// VOID LOOP, OLD VERSION
// ========================================================

// void loop() {
//   bool detected_1 = sensor1.pushupDetected();
//   delay(1);
//   bool detected_2 = sensor2.squatDetected();
//   delay(1);
//   bool detected_3 = sensor3.plankDetected();
//   delay(1);

//   if (detected_1) {
//     counter_1++;
//     Serial.print("Pushup ");
//     Serial.println(counter_1);
//   }
//   if (detected_2) {
//     counter_2++;
//     Serial.print("Squat ");
//     Serial.println(counter_2);
//   }
//   if (detected_3) {
//     counter_3++;
//     Serial.print("Plank ");
//     Serial.println(counter_3);
//   }

//   // pushups
//   int set_1level_1 = 8
//   int set_1level_2 = 16
//   int set_1level_3 = 24
//   // squats 
//   int set_2level_1 = 30
//   int set_2level_2 = 60
//   int set_2level_3 = 90
//   // plank taps
//   int set_3level_1 = 10
//   int set_3level_2 = 20
//   int set_3level_3 = 30

//   int level_1 = 8;
//   int level_2 = 16;
//   int level_3 = 24;
//   bool passed_level_1 = check_target(set_1level_1, set_2level_1, set_3level_1, counter_1, counter_2, counter_3);  
//   bool passed_level_2 = check_target(set_1level_2, set_2level_2, set_3level_2, counter_1, counter_2, counter_3);  
//   bool passed_level_3 = check_target(set_1level_3, set_2level_3, set_3level_3, counter_1, counter_2, counter_3);  

//   if (passed_level_3) {
//     // Serial.println("Success");
//     // delay(10000000);
//     patternA_0(20);    
//     patternA_1(20);
//     patternA_2(20);
//   } else if (passed_level_2) {
//     patternB_0(15);    
//     patternB_1(15);
//     patternB_2(15);    
//   } else if (passed_level_1) {
//     patternC_0(10);    
//     patternC_1(10);
//     patternC_2(10);    
//   } else {
//     background_0(5);
//     background_1(5);
//     background_2(5);
//   }
// }












