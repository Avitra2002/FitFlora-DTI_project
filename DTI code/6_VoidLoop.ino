// int myMatrix[3][5] = {
//   {5, 10, 15, 20, 25},
//   {30, 60, 90, 120, 150},
//   {8, 16, 24, 32, 40}
// };

void decide_pattern_at_0() {
  // Serial.print("pushup\n");
  if (counter_0 >= myMatrix[0][4]) {
    switch_4_0 = true;
    switch_3_0 = false;
    switch_2_0 = false;
    switch_1_0 = false;    
    switch_0_0 = false;    
    // Serial.print("4_0\n");
    delay(1);

  } else if (counter_0 >= myMatrix[0][3]) {
    switch_4_0 = false;
    switch_3_0 = true;
    switch_2_0 = false;
    switch_1_0 = false;    
    switch_0_0 = false;    
    // Serial.print("3_0\n");
    delay(1);
  
  } else if (counter_0 >= myMatrix[0][2]) {
    switch_4_0 = false;
    switch_3_0 = false;
    switch_2_0 = true;
    switch_1_0 = false;    
    switch_0_0 = false;    
    // Serial.print("2_0\n");
    delay(1);
  
  } else if (counter_0 >= myMatrix[0][1]) {
    switch_4_0 = false;
    switch_3_0 = false;
    switch_2_0 = false;
    switch_1_0 = true;    
    switch_0_0 = false;    
    // Serial.print("1_0\n");
    delay(1);
  
  } else if (counter_0 >= myMatrix[0][0]) {
    switch_4_0 = false;
    switch_3_0 = false;
    switch_2_0 = false;
    switch_1_0 = false;    
    switch_0_0 = true;    
    // Serial.print("0_0\n");
    delay(1);
  }
}
void decide_pattern_at_1() {
  // Serial.print("pushup\n");
  if (counter_1 >= myMatrix[1][4]) {
    switch_4_1 = true;
    switch_3_1 = false;
    switch_2_1 = false;
    switch_1_1 = false;    
    switch_0_1 = false;    
    // Serial.print("4_0\n");
    delay(1);

  } else if (counter_1 >= myMatrix[1][3]) {
    switch_4_1 = false;
    switch_3_1 = true;
    switch_2_1 = false;
    switch_1_1 = false;    
    switch_0_1 = false;    
    // Serial.print("3_0\n");
    delay(1);
  
  } else if (counter_1 >= myMatrix[1][2]) {
    switch_4_1 = false;
    switch_3_1 = false;
    switch_2_1 = true;
    switch_1_1 = false;    
    switch_0_1 = false;    
    // Serial.print("2_0\n");
    delay(1);
  
  } else if (counter_1 >= myMatrix[1][1]) {
    switch_4_1 = false;
    switch_3_1 = false;
    switch_2_1 = false;
    switch_1_1 = true;    
    switch_0_1 = false;    
    // Serial.print("1_0\n");
    delay(1);
  
  } else if (counter_1 >= myMatrix[1][0]) {
    switch_4_1 = false;
    switch_3_1 = false;
    switch_2_1 = false;
    switch_1_1 = false;    
    switch_0_1 = true;    
    // Serial.print("0_0\n");
    delay(1);
  }
}
void decide_pattern_at_2() {
  // Serial.print("pushup\n");
  if (counter_2 >= myMatrix[2][4]) {
    switch_4_2 = true;
    switch_3_2 = false;
    switch_2_2 = false;
    switch_1_2 = false;    
    switch_0_2 = false;    
    // Serial.print("4_0\n");
    delay(1);

  } else if (counter_2 >= myMatrix[2][3]) {
    switch_4_2 = false;
    switch_3_2 = true;
    switch_2_2 = false;
    switch_1_2 = false;    
    switch_0_2 = false;    
    // Serial.print("3_0\n");
    delay(1);
  
  } else if (counter_2 >= myMatrix[2][2]) {
    switch_4_2 = false;
    switch_3_2 = false;
    switch_2_2 = true;
    switch_1_2 = false;    
    switch_0_2 = false;    
    // Serial.print("2_0\n");
    delay(1);
  
  } else if (counter_2 >= myMatrix[2][1]) {
    switch_4_2 = false;
    switch_3_2 = false;
    switch_2_2 = false;
    switch_1_2 = true;    
    switch_0_2 = false;    
    // Serial.print("1_0\n");
    delay(1);
  
  } else if (counter_2 >= myMatrix[2][0]) {
    switch_4_2 = false;
    switch_3_2 = false;
    switch_2_2 = false;
    switch_1_2 = false;    
    switch_0_2 = true;    
    // Serial.print("0_0\n");
    delay(1);
  }
}


void loop() {
  run_sensor_0();
  run_sensor_1();
  run_sensor_2();

  decide_pattern_at_0();
  decide_pattern_at_1();
  decide_pattern_at_2();
  run_pattern_4_0();
  run_pattern_4_1();
  run_pattern_4_2();

  run_pattern_3_0();
  run_pattern_3_1();
  run_pattern_3_2();

  run_pattern_2_0();
  run_pattern_2_1();
  run_pattern_2_2();

  run_pattern_1_0();
  run_pattern_1_1();
  run_pattern_1_2();

  run_pattern_0_0();
  run_pattern_0_1();
  run_pattern_0_2();

}


