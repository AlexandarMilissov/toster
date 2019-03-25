#define ser 2 //input
#define notOE 3 //output enable
#define rclk 4 //storage register clock
#define srclk 5 //shift register clock

#define diodes 64
int i = diodes;

char arr[diodes] = {1, 1, 1, 1, 1, 1, 1, 1
                    /*2*/, 1, 1, 1, 1, 1, 1, 1, 1
                    /*3*/, 1, 1, 1, 1, 1, 1, 1, 1
                    /*4*/, 1, 1, 1, 1, 1, 1, 1, 1
                    /*5*/, 1, 1, 1, 1, 1, 1, 1, 1
                    /*6*/, 1, 1, 1, 1, 1, 1, 1, 1
                    /*7*/, 1, 1, 1, 1, 1, 1, 1, 1
                    /*8*/, 1, 1, 1, 1, 1, 1, 1, 1
                   };

void setup() {
  pinMode(ser, OUTPUT);

  pinMode(notOE, OUTPUT);
  digitalWrite(notOE, HIGH);

  pinMode(rclk, OUTPUT);
  digitalWrite(rclk, LOW);

  pinMode(srclk, OUTPUT);
  digitalWrite(srclk, LOW);
  digitalWrite(notOE, LOW);
}

void loop() {
  LightSeries(arr);
}

void LightSeries(char arr[])
{
  digitalWrite(rclk, HIGH);
  int i;
  for (i = 0; i < diodes; i++)
  {
    LightLED(arr[i]);
  }
  digitalWrite(rclk, LOW);
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
