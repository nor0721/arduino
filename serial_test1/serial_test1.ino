byte val;

void setup(){
  //serial setting
  Serial.begin(9600);
  
  //port setting
  pinMode( 13, OUTPUT);
  digitalWrite(13,LOW);
}

void loop(){
  if(Serial.available()>0){
    
    val = Serial.read();
    Serial.write(val);
    if(val != 'A'){
      digitalWrite(13,HIGH);
    }
    
    if(val == 'B'){
      digitalWrite(13,LOW);
    }
  }
}

