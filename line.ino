#define sen1 11
#define sen2 10
#define sen3 9
#define sen4 8
#define sen5 7
#define sen6 6
#define sen7 5
#define sen8 4
#define en1 A0
#define en2 A5
#define m1_1 A2
#define m1_2 A1
#define m2_1 A3
#define m2_2 A4


void setup() {
pinMode(sen1,INPUT);
pinMode(sen2,INPUT);
pinMode(sen3,INPUT);
pinMode(sen4,INPUT);
pinMode(sen5,INPUT);
pinMode(sen6,INPUT);
pinMode(sen7,INPUT);
pinMode(sen8,INPUT);
pinMode(en1,OUTPUT);
pinMode(en2,OUTPUT);
pinMode(m1_1,OUTPUT);
pinMode(m1_2,OUTPUT);
pinMode(m2_1,OUTPUT);
pinMode(m2_2,OUTPUT);
digitalWrite(en1,HIGH);
digitalWrite(en2,HIGH);
Serial.begin(9600);

}

void loop() {
 int sensor_value1,sensor_value2,sensor_value3,sensor_value4,sensor_value5,sensor_value6,sensor_value7,sensor_value8;
 sensor_value1=digitalRead(sen1);
 sensor_value2=digitalRead(sen2);
 sensor_value3=digitalRead(sen3);
 sensor_value4=digitalRead(sen4);
 sensor_value5=digitalRead(sen5);
 sensor_value6=digitalRead(sen6);
 sensor_value7=digitalRead(sen7);
 sensor_value8=digitalRead(sen8);
 Serial.print(sensor_value1);
 Serial.print(sensor_value2);
 Serial.print(sensor_value3);
 Serial.print(sensor_value4);
 Serial.print(sensor_value5);
 Serial.print(sensor_value6);
 Serial.print(sensor_value7);
 Serial.print(sensor_value8);
 Serial.print("\n");
 int leftsum,rightsum;
 rightsum=sensor_value1+sensor_value2+sensor_value3+sensor_value4;
 leftsum=sensor_value5+sensor_value6+sensor_value7+sensor_value8;

 if(leftsum==rightsum && leftsum+rightsum!=8)
 {
   digitalWrite(m1_1,LOW);
   digitalWrite(m1_2,HIGH);
   digitalWrite(m2_1,LOW);
   digitalWrite(m2_2,HIGH);

 }

  else if(leftsum>rightsum)
 {
   digitalWrite(m1_1,HIGH);
   digitalWrite(m1_2,LOW);
   digitalWrite(m2_1,LOW);
   digitalWrite(m2_2,HIGH);

 }

  else if(rightsum>leftsum)
 {
   digitalWrite(m1_1,LOW);
   digitalWrite(m1_2,HIGH);
   digitalWrite(m2_1,HIGH);
   digitalWrite(m2_2,LOW);

 }

  else
 {
   digitalWrite(m1_1,LOW);
   digitalWrite(m1_2,LOW);
   digitalWrite(m2_1,LOW);
   digitalWrite(m2_2,LOW);

 }


}
