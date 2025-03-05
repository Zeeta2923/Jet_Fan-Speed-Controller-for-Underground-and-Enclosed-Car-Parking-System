#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,6,4,2,1);
int COvalue;
void setup() {
  pinMode(A2,INPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  lcd.begin(40,2);
  lcd.clear();
}

void loop() {
  int val=analogRead(A2);
  COvalue=map(val,0,1023,0,100); 
  if((COvalue>=0)&&(COvalue<30))
    {
      lcd.setCursor(6,0);
      lcd.print("CO level is Low");
      lcd.println("(");
      lcd.print(COvalue);
      lcd.print("PPM)");
      if(COvalue==0)
        {
          int JE_Speed=0;//jet fan and Exhaust fan motor speed 
          int supply_Speed=0;
          analogWrite(9,JE_Speed);//Jet Fan and Exhaust Fan motor
          analogWrite(10,0);
          analogWrite(3,supply_Speed);//supply fan motor
          analogWrite(5,0);
          lcd.setCursor(0,1);
          lcd.print("J&E speed=");//Jet Fan and Exhaust Fan motor speed 
          lcd.print(JE_Speed);
          lcd.print("RPM");
          lcd.print("____ S speed=");//Supply Fan motor speed
          lcd.print(supply_Speed);
          lcd.print("RPM");
         }
         
       if((COvalue>0)&&(COvalue<=10))
         {
          int JE_Speed=25;//Jet Fan and Exhaust Fan motor
          int supply_Speed=0;
          analogWrite(9,0);//Jet Fan and Exhaust Fan motor
          analogWrite(10,JE_Speed);
          analogWrite(3,supply_Speed);//supply fan motor
          analogWrite(5,0);
          lcd.setCursor(0,1);
          lcd.print("J&E speed=");//Jet Fan and Exhaust Fan motor speed 
          lcd.print(JE_Speed);
          lcd.print("RPM");
          lcd.print("____ S speed=");//Supply Fan motor speed
          lcd.print(supply_Speed);
          lcd.print("RPM");
         }

        if((COvalue>10)&&(COvalue<=20))
          {
          int JE_Speed=50;//Jet Fan and Exhaust Fan motor
          int supply_Speed=0;
          analogWrite(9,JE_Speed);//Jet Fan and Exhaust Fan motor
          analogWrite(10,0);
          analogWrite(3,supply_Speed);//supply fan motor
          analogWrite(5,0);
          lcd.setCursor(0,1);
          lcd.print("J&E speed=");//Jet Fan and Exhaust Fan motor speed 
          lcd.print(JE_Speed);
          lcd.print("RPM");
          lcd.print("____ S speed=");//Supply Fan motor speed
          lcd.print(supply_Speed);
          lcd.print("RPM");
          }

        if((COvalue>20)&&(COvalue<30))
          {
          int JE_Speed=75;//Jet Fan and Exhaust Fan motor
          int supply_Speed=0;
          analogWrite(9,JE_Speed);//Jet Fan and Exhaust Fan motor
          analogWrite(10,0);
          analogWrite(3,supply_Speed);//supply fan motor
          analogWrite(5,0);
          lcd.setCursor(0,1);
          lcd.print("J&E speed=");//Jet Fan and Exhaust Fan motor speed 
          lcd.print(JE_Speed);
          lcd.print("RPM");
          lcd.print("____ S speed=");//Supply Fan motor speed
          lcd.print(supply_Speed);
          lcd.print("RPM");
          }

    delay(100);
    }

 else if((COvalue>=30)&&(COvalue<90))
 {
   lcd.setCursor(0,0);
   lcd.print("CO level is MEDIUM");
   lcd.print("(");
   lcd.print(COvalue);
   lcd.print("PPM)");
   if((COvalue>=30)&&(COvalue<=50))
       {
        int JE_Speed=100;//Jet Fan and Exhaust Fan motor
        int supply_Speed=60;
        analogWrite(9,JE_Speed);//Jet Fan and Exhaust Fan motor
        analogWrite(10,0);
        analogWrite(3,supply_Speed);//supply fan motor
        analogWrite(5,0);
        lcd.setCursor(0,1);
        lcd.print("J&E speed=");//Jet Fan and Exhaust Fan motor speed 
        lcd.print(JE_Speed);
        lcd.print("RPM");
        lcd.print("____ S speed=");//Supply Fan motor speed
        lcd.print(supply_Speed);
        lcd.print("RPM");
        }
        
   if((COvalue>50)&&(COvalue<=70))
       {
        int JE_Speed=150;//Jet Fan and Exhaust Fan motor
        int supply_Speed=90;
        analogWrite(9,JE_Speed);//Jet Fan and Exhaust Fan motor
        analogWrite(10,0);
        analogWrite(3,supply_Speed);//supply fan motor
        analogWrite(5,0);
        lcd.setCursor(0,1);
        lcd.print("J&E speed=");//Jet Fan and Exhaust Fan motor speed 
        lcd.print(JE_Speed);
        lcd.print("RPM");
        lcd.print("____ S speed=");//Supply Fan motor speed
        lcd.print(supply_Speed);
        lcd.print("RPM");
        }
        
    if((COvalue>70)&&(COvalue<=90))
       {
        int JE_Speed=200;//Jet Fan and Exhaust Fan motor
        int supply_Speed=120;
        analogWrite(9,JE_Speed);//Jet Fan and Exhaust Fan motor
        analogWrite(10,0);
        analogWrite(3,supply_Speed);
        analogWrite(5,0);
        lcd.setCursor(0,1);
        lcd.print("J&E speed=");//Jet Fan and Exhaust Fan motor speed 
        lcd.print(JE_Speed);
        lcd.print("RPM");
        lcd.print("____ S speed=");//Supply Fan motor speed
        lcd.print(supply_Speed);
        lcd.print("RPM");
        }
        
    delay(100);
  }
  
 else if(COvalue>=90)
  {
   lcd.setCursor(0,0);
   lcd.print("CO level is MEDIUM");
   lcd.print("(");
   lcd.print(COvalue);
   lcd.print("PPM)");
   int JE_Speed=255;//Jet Fan and Exhaust Fan motor
   int supply_Speed=175;
   analogWrite(9,JE_Speed);//Jet Fan and Exhaust Fan motor
   analogWrite(10,0);
   analogWrite(3,supply_Speed);//supply fan motor
   analogWrite(5,0);
   lcd.setCursor(0,1);
   lcd.print("J&E speed=");//Jet Fan and Exhaust Fan motor speed 
   lcd.print(JE_Speed);
   lcd.print("RPM");
   lcd.print("____ S speed=");//Supply Fan motor speed
   lcd.print(supply_Speed);
   lcd.print("RPM");
   delay(100);
   }
   
 }
 
 
