#include <Servo.h>

Servo servo0;
int val;
int offset=98;
int left_val = offset-10;
int rigth_val = offset+10;
void setup()
{
  Serial.begin(9600);  
  servo0.attach(9);
  servo0.write(offset);
}

void loop()
{
    val = Serial.read();
    //もし前の値と変わってたらの判定が必要（未対応）
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
      servo0.write(left_val);
      delay(100);
      break;
      
      case 101://e:right
      servo0.write(rigth_val);
      delay(100);
      break;
            
      case 119://w:
      servo0.write(offset);
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
