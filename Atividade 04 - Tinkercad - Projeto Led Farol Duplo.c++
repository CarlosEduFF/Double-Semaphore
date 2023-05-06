// C++ code
//
int ledpinRed = 8;
int ledpinYel = 7;
int ledpinGre = 4;

int ledpinRed2 = 2;
int ledpinYel2 = 1;
int ledpinGre2 = 0;
void setup()
{
  pinMode(ledpinRed, OUTPUT);
  pinMode(ledpinYel, OUTPUT);
  pinMode(ledpinGre, OUTPUT);
  pinMode(ledpinRed2, OUTPUT);
  pinMode(ledpinYel2, OUTPUT);
  pinMode(ledpinGre2, OUTPUT);
}

void loop()
{
  digitalWrite(ledpinRed,HIGH);
  digitalWrite(ledpinGre2, HIGH); 
  delay(5000);
  digitalWrite(ledpinGre2,LOW);
  digitalWrite(ledpinYel2,HIGH);
  delay(2000);
  digitalWrite(ledpinYel2,LOW);
  digitalWrite(ledpinRed,LOW);
  digitalWrite(ledpinGre,HIGH),
  digitalWrite(ledpinRed2,HIGH);
  delay(5000);
  digitalWrite(ledpinGre,LOW);
  digitalWrite(ledpinYel,HIGH);
  delay(2000);
  digitalWrite(ledpinYel,LOW);
  digitalWrite(ledpinRed2,LOW);	
}

/* V VE
   V Am
   VE V
   Am V
   V  VE
*/