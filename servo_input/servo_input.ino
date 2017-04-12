#include <Servo.h>

Servo servo0;
int val;

void setup()
{
  Serial.begin(9600);  
  servo0.attach(9);
}

void loop()
{
    val = Serial.read();
    Serial.println(val);
    switch(val){
      //case -1:
      //servo0.write(90);
      //delay(100);
      //break;
      
      case 49:
      servo0.write(110);
      delay(100);
      break;
      
      case 50:
      servo0.write(70);
      delay(100);
      break;
      
      case 113://q:left
      servo0.write(110);
      delay(100);
      break;
      
      case 101://e:right
      servo0.write(70);
      delay(100);
      break;
            
      case 119://w:
      servo0.write(90);
      delay(100);
      break;
            
      case 97://a:
      //servo0.write(70);
      //delay(1000);
      break;
            
      case 100://d:
      //servo0.write(70);
      //delay(1000);
      break;
            
      case 115://s:back
      servo0.write(70);
      delay(1000);
      break;
    }
    //servo0.write(90);
    
}
