/*
bool arr[] = {          0, 0, 0, 0, 0, 0, 0, 0 
                      , 0, 0, 0, 0, 0, 0, 0, 0 
                      , 0, 0, 0, 0, 0, 0, 0, 0 
                      , 1, 1, 1, 1, 1, 1, 1, 1 
                      , 0, 0, 0, 0, 0, 0, 0, 0 
                      , 0, 0, 0, 0, 0, 0, 0, 0 
                      , 0, 0, 0, 0, 0, 0, 0, 0 
                      , 0, 0, 0, 0, 0, 0, 0, 0 
                      };
*/
/*
bool arr[] = {          1, 1, 1, 0, 1, 0, 1, 0 
                      , 0, 1, 0, 0, 0, 1, 0, 0 
                      , 0, 1, 0, 0, 0, 1, 0, 0 
                      , 1, 1, 1, 0, 1, 1, 1, 0 
                      , 1, 0, 0, 0, 1, 0, 0, 0 
                      , 1, 1, 1, 0, 1, 0, 0, 0 
                      , 1, 0, 0, 0, 1, 0, 0, 0 
                      , 1, 1, 1, 0, 1, 1, 1, 0 
                      };
*/
/*
bool arr[] = {          0, 0 ,0, 0, 0, 1, 1, 0 
                      , 0, 0, 0, 0, 0, 1, 1, 0 
                      , 0, 0, 0, 0, 1, 1, 0, 0 
                      , 0, 0, 0, 0, 1, 1, 0, 0 
                      , 0, 0, 0, 0, 0, 1, 1, 0 
                      , 0, 0, 0, 0, 1, 1, 1, 1 
                      , 1, 0, 0, 1, 1, 1, 1, 1 
                      , 0, 0, 0, 0, 1, 0, 0, 1 
                      };
*/                      
/*
bool arr[] = {          0, 0, 0, 0, 0, 0, 0, 0 
                      , 0, 1, 1, 0, 0, 1, 1, 0 
                      , 0, 1, 1, 0, 0, 1, 1, 0 
                      , 0, 0, 0, 0, 0, 0, 0, 0 
                      , 0, 0, 0, 0, 0, 0, 0, 0 
                      , 0, 0, 1, 1, 1, 1, 0, 0 
                      , 0, 1, 1, 1, 1, 1, 1, 0 
                      , 0, 1, 1, 0, 0, 1, 1, 0 
                      };
*/                     
/*
bool arr[] = {          0, 0, 0, 1, 1, 0, 0, 0 
                      , 0, 0, 1, 1, 1, 0, 0, 0 
                      , 0, 0, 1, 1, 1, 0, 0, 0 
                      , 0, 0, 0, 1, 1, 0, 0, 0 
                      , 0, 0, 0, 1, 1, 0, 0, 0 
                      , 0, 0, 0, 1, 1, 0, 0, 0 
                      , 0, 0, 0, 1, 1,0, 0, 0 
                      , 0, 0, 0, 1, 1, 0, 0, 0 
                      };
*/                      
/*
bool arr[] = {          0, 0, 0, 0, 0, 0, 0, 0 
                      , 0, 0, 0, 0, 0, 0, 0, 0 
                      , 0, 0, 0, 0, 0, 0, 0, 0 
                      , 0, 0, 0, 0, 0, 0, 0, 0 
                      , 0, 0, 0, 0, 0, 0, 0, 0 
                      , 0, 0, 0, 0, 0, 0, 0, 0 
                      , 0, 0, 0, 0, 0, 0, 0, 0 
                      , 0, 0, 0, 0, 0, 0, 0, 0 
                      };
*/
/*
bool arr[] = {          0, 0, 0, 0, 0, 0, 0, 0 
                      , 0, 0, 1, 1, 1, 1, 0, 0 
                      , 0, 0, 1, 0, 1, 1, 0, 0 
                      , 0, 0, 1, 0, 0, 1, 0, 0 
                      , 0, 0, 1, 0, 0, 1, 0, 0 
                      , 0, 0, 1, 0, 0, 1, 0, 0 
                      , 0, 0, 1, 1, 1, 1, 0, 0 
                      , 0, 0, 0, 0, 0, 0, 0, 0 
                      };
  */
  
bool arr[] = {          0, 0, 0, 0, 0, 0, 0, 0 
                      , 0, 0, 1, 0, 0, 1, 0, 0 
                      , 0, 0, 1, 0, 0, 1, 0, 0 
                      , 0, 0, 0, 0, 0, 0, 0, 0 
                      , 0, 0, 0, 0, 0, 0, 0, 0 
                      , 0, 0, 1, 0, 0, 1, 0, 0 
                      , 0, 0, 1, 1, 1, 1, 0, 0 
                      , 0, 0, 0, 0, 0, 0, 0, 0 
                      };
                 
/*1-4*/
/*7-8*/
/*3-5*/
#define ser 2 //input
#define notOE 3 //output enable1
#define rclk 4 //storage register clock
#define srclk 5 //shift register clock
#define notSrclr 6 //shift register clear
int diodes = sizeof(arr)/sizeof(arr[0]);

void setup() {
  pinMode(ser, OUTPUT);

  pinMode(notOE, OUTPUT);
  digitalWrite(notOE, HIGH);

  pinMode(rclk, OUTPUT);
  digitalWrite(rclk, LOW);

  pinMode(srclk, OUTPUT);
  digitalWrite(srclk, LOW);
  digitalWrite(notOE, LOW);
  Serial.begin(9600);
  
  digitalWrite(notSrclr, LOW);
  delay(5);
  digitalWrite(notSrclr, HIGH);
  Serial.println(diodes,DEC);

}

void loop() {
  //Bake(150);
  LightAll();
}

void Bake(int timeInSeconds)
{
  LightAll();
  Serial.println("start");
  delay(30 * 1000);
  
  LightSeries();
  Serial.println("draw");
  delay((timeInSeconds - 30)*1000);
  
  LightNone();
  Serial.println("stop");
  delay(1000*1000);  
}

void LightAll()
{
  int i;
  for(i=0;i<diodes;i++)
  {
    LightLED(1);
    digitalWrite(rclk, HIGH);
    delay(5);
    digitalWrite(rclk, LOW);
  }
}
void LightNone()
{
  digitalWrite(6,LOW);
  delay(5);
  digitalWrite(6,HIGH);
}


void LightSeries()
{
  int i;
  for(i=0;i<diodes;i++)
  {
    Serial.println(arr[i],DEC);
    LightLED(arr[i]);

    digitalWrite(rclk, HIGH);
    delay(5);
    digitalWrite(rclk, LOW);
  }
  
}

void LightLED(bool state)
{
  digitalWrite(ser, state);
  Strobe_clock();
}

void Strobe_clock() {
  digitalWrite(srclk, HIGH);
  delay(5);
  digitalWrite(srclk, LOW);
}
