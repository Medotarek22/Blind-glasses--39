#define trigPin 2
#define echoPin 3
#define trigPin1 7
#define echoPin1 6
#define trigPin2 8
#define echoPin2 9


int Buzzer = 4; 
int Buzzer1 = 12;
int Buzzer2 = 13;


int duration,duration1,duration2,distance,distance1,distance2; 

void setup() {
        Serial.begin (9600); 
    
        pinMode(trigPin, OUTPUT); 
        pinMode(echoPin, INPUT);
        pinMode(Buzzer, OUTPUT);
        pinMode(trigPin1, OUTPUT); 
        pinMode(echoPin1, INPUT);
        pinMode(Buzzer1, OUTPUT);
        pinMode(trigPin2, OUTPUT); 
        pinMode(echoPin2, INPUT);
        pinMode(Buzzer2, OUTPUT);     
}

void loop() {

   digitalWrite(trigPin, HIGH);
   delayMicroseconds(1000);
   digitalWrite(trigPin, LOW);
   duration = pulseIn(echoPin, HIGH);
   distance = (duration/2) / 29.1;
   
   digitalWrite(trigPin1, HIGH);
   delayMicroseconds(1000);
   digitalWrite(trigPin1, LOW);
   duration1 = pulseIn(echoPin1, HIGH);
   distance1 = (duration1/2) / 29.1;
   
   digitalWrite(trigPin2, HIGH);
   delayMicroseconds(1000);
   digitalWrite(trigPin2, LOW);
   duration2 = pulseIn(echoPin2, HIGH);
   distance2 = (duration2/2) / 29.1;
   

 if (distance <= 70 && distance >= 50) 
        {
        Serial.println("object detected \n");
        Serial.print("distance= ");  
        analogWrite(Buzzer,0);
        delay (150) ;
        analogWrite(Buzzer,255);
        delay (150) ;
        
        }

            else if (distance <= 50 && distance >= 30) 
        {
        Serial.println("object detected \n");
        Serial.print("distance= ");  
        analogWrite(Buzzer,0);
        delay (100) ;
        analogWrite(Buzzer,255);
        delay (100) ;
        
        
  
        }

        else if (distance <= 30 && distance > 10) 
        {
        Serial.println("object detected \n");
        Serial.print("distance= ");  
        analogWrite(Buzzer,0);
        delay (50) ;
        analogWrite(Buzzer,255);
        delay (50) ;
        
        
  
        }

        else if (distance <= 20 && distance >= 0) 
        {
        Serial.println("object detected \n");
        Serial.print("distance= ");  
        analogWrite(Buzzer,0);
        delay (70) ;
        analogWrite(Buzzer,255);
        delay (70) ;
        
        
  
        }



if (distance1 <= 60 && distance1 >= 40) 
        {
        Serial.println("object detected \n");
        Serial.print("distance1= ");  
        analogWrite(Buzzer1,0);
        delay (150) ;
        analogWrite(Buzzer1,255);
        delay (150) ;
        
        }

            else if (distance1 <= 40 && distance1 >= 20) 
        {
        Serial.println("object detected \n");
        Serial.print("distance1= ");  
        analogWrite(Buzzer1,0);
        delay (100) ;
        analogWrite(Buzzer1,255);
        delay (100) ;
        
        
  
        }

        else if (distance1 <= 20 && distance1 > 10) 
        {
        Serial.println("object detected \n");
        Serial.print("distance1= ");  
        analogWrite(Buzzer1,0);
        delay (50) ;
        analogWrite(Buzzer1,255);
        delay (50) ;
        
        
  
        }

        else if (distance1 <= 10 && distance1 >= 0) 
        {
        Serial.println("object detected \n");
        Serial.print("distance1= ");  
        analogWrite(Buzzer1,0);
        delay (70) ;
        analogWrite(Buzzer1,255);
        delay (70) ;
        
  
        }


if (distance2 <= 60 && distance2 >= 40) 
        {
        Serial.println("object detected \n");
        Serial.print("distance2= ");  
        analogWrite(Buzzer2,0);
        delay (150) ;
        analogWrite(Buzzer2,255);
        delay (150) ;
        
        }

            else if (distance2 <= 40 && distance2 >= 20) 

        {
        Serial.println("object detected \n");
        Serial.print("distance2= ");  
        analogWrite(Buzzer2,0);
        delay (100) ;
        analogWrite(Buzzer2,255);
        delay (100) ;
        
        
  
        }

        else if (distance2 <= 20 && distance2 > 10) 
        {
        Serial.println("object detected \n");
        Serial.print("distance2= ");  
        analogWrite(Buzzer2,0);
        delay (50) ;
        analogWrite(Buzzer2,255);
        delay (50) ;
        
        
        }

        else if (distance2 <= 10 && distance2 >= 0) 
        {
        Serial.println("object detected \n");
        Serial.print("distance2= ");  
        analogWrite(Buzzer2,0);
        delay (70) ;
        analogWrite(Buzzer2,255);
        delay (70) ;
      
  
        }


        else 
        Serial.println("object detected \n");
        Serial.print("distance= ");              
        Serial.print(distance);        
        analogWrite(Buzzer,50);
        
        Serial.print("distance1= ");              
        Serial.print(distance1);        
        analogWrite(Buzzer1,50);
        
        Serial.print("distance2= ");              
        Serial.print(distance2);        
        analogWrite(Buzzer2,50);
        
  {
}

}
