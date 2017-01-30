/*pin led matrix -> arduino pin*/
byte p1=22;
byte p2=23;
byte p3=24;
byte p4=25;
byte p5=26;
byte p6=27;
byte p7=28;
byte p8=29;
byte p9=30;
byte p10=31;
byte p11=32;
byte p12=33;
byte p13=34;
byte p14=35;
byte p15=36;
byte p16=37;

byte high[8] = {p5,p2,p7,p1,p12,p8,p14,p9};
byte low[8] = {p16,p15,p11,p6,p10,p4,p3,p13};

//led matrix dot cords
int x=0,
    y=0;
   
byte width=8;
bool inverted = false;

void setup() {
  Serial.begin(9600);
  Serial.print("Hello Arduino Due");
  
  pinMode(p2,OUTPUT);
  digitalWrite(p2,HIGH);
  
  pinMode(p16,OUTPUT);
  digitalWrite(p16,LOW);
}
void loop() {
  for(byte i=0; i<width;++i){
    for(byte j=0; j<width;++j){
        pinMode(high[i],OUTPUT);
        digitalWrite(high[i],HIGH);
    
        pinMode(low[j],OUTPUT);
        digitalWrite(low[j],LOW);
        delay(200);
        clear();
      }
  }
  
}
void clear(){
    for(byte i=0; i<width;++i){
      digitalWrite(high[i],LOW);
      pinMode(low[i],INPUT);
    }
  }

