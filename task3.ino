int counter1 =0;
int botton1 =0;
int counter =0;
int botton2=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  pinMode(1,INPUT);
  pinMode(3,OUTPUT);


}



void loop()
{
botton1 =digitalRead(1);
botton2 =digitalRead(2);
if(botton1==1){
 
counter++;
switch (counter)
{

  case 1:
  analogWrite(3,25);
  break;
  case 2:
  analogWrite(3,125);
  break;
  case 3:
  analogWrite(3,127);
  break;
  default  :
  analogWrite(3,255);
  
  
  break ; 
 }
 while(digitalRead(1)==HIGH);
  
  }
if(botton2==HIGH){
counter1++;
switch (counter1)
{
  case 1:
  analogWrite(3,127);
  break;
  case 2:
  analogWrite(3,85);
  break;
  case 3:
  analogWrite(3,25);
  break;
  default :
  analogWrite(3,0);
  
  break ; 
 }
 while(digitalRead(2)==HIGH);
  
}}
