#define trig_0  3
#define trig_1  5
#define trig_2  7
#define echo_0  4
#define echo_1  6
#define echo_2  8

int counter_0 = 0;
int current_state_0 = 0;
int previous_state_0 = 0;
boolean trig_up_0 = false;
boolean trig_down_0 = false;

int counter_1 = 0;
int current_state_1 = 0;
int previous_state_1 = 0;
boolean trig_up_1 = false;
boolean trig_down_1 = false;

int counter_2 = 0;
int current_state_2 = 0;
int previous_state_2 = 0;
boolean trig_up_2 = false;
boolean trig_down_2 = false;


void setup_sensors() {
  pinMode(trig_0, OUTPUT);
  pinMode(trig_1, OUTPUT);
  pinMode(trig_2, OUTPUT);
  pinMode(echo_0, INPUT);
  pinMode(echo_1, INPUT);
  pinMode(echo_2, INPUT);
}

void run_sensor_0() {
 long duration_0, distance_0;
 digitalWrite(trig_0, LOW); 
 delayMicroseconds(2); 
 digitalWrite(trig_0, HIGH);
 delayMicroseconds(10); 
 digitalWrite(trig_0, LOW);
 duration_0 = pulseIn(echo_0, HIGH);
 distance_0 = duration_0 * 0.034/2.;

 if (distance_0>15 && distance_0<=30){
    trig_up_0 = true;
  } 
  else if (distance_0 < 10){
    trig_down_0 = true;
  } 
 else if(distance_0 >30) {
  }
 
  if (trig_up_0==true && trig_down_0==true){
    counter_0=counter_0+1;
    trig_up_0=false;
    delay(200);
    trig_down_0=false;
    // Serial.println("Pushup");
    // delay(10);
    // Serial.println(counter_0);
    // delay(10);
    }
}
void run_sensor_1() {
 long duration_1, distance_1;
 digitalWrite(trig_1, LOW); 
 delayMicroseconds(2); 
 digitalWrite(trig_1, HIGH);
 delayMicroseconds(10); 
 digitalWrite(trig_1, LOW);
 duration_1 = pulseIn(echo_1, HIGH);
 distance_1 = duration_1 * 0.034/2.;

 if (distance_1>30 && distance_1<=60){
    trig_up_1 = true;
  } 
  else if (distance_1 < 30){
    trig_down_1 = true;
  } 
 else if(distance_1 >60) {
  }
 
  if (trig_up_1==true && trig_down_1==true){
    counter_1=counter_1+1;
    trig_up_1=false;
    delay(200);
    trig_down_1=false;
    // Serial.println("Squat");
    // delay(10);
    // Serial.println(counter_1);
    // delay(10);
    }
}

void run_sensor_2() {
 long duration_2, distance_2;
 digitalWrite(trig_2, LOW); 
 delayMicroseconds(2); 
 digitalWrite(trig_2, HIGH);
 delayMicroseconds(10); 
 digitalWrite(trig_2, LOW);
 duration_2 = pulseIn(echo_2, HIGH);
 distance_2 = duration_2 * 0.034/2.;
 if (distance_2>10 && distance_2<=30){
    trig_up_2 = true;
  } 
  else if (distance_2 < 10){
    trig_down_2 = true;
  } 
 else if(distance_2 >30) {
  }
 
  if (trig_up_2==true && trig_down_2==true){
    counter_2=counter_2+1;
    trig_up_2=false;
    delay(200);
    trig_down_2=false;
    // Serial.println("Planks");
    // delay(10);
    // Serial.println(counter_2);
    // delay(10);
    }
}


// matrix[i][j]
// i = set number (1 = pushup, 2 = squat, 3 = plank)
// j = level number 
// A_{ij} = required reps for set i at level j
int myMatrix[3][5] = {
  {5, 10, 15, 20, 25},
  {3, 6, 9, 12, 15},
  {3, 6, 9, 12, 15},
};














