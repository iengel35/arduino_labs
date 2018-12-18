void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  int n = 628;
for (int i = 0; i < n; i++) {
   int val = 127 + 127 * sin(440*2*3.14*i)+ 127 * sin(523*2*3.14*i)+127 * sin(659*2*3.14*i);  // + A2sin(f2 2pi t)
  // cannnot use delay, it is in millis delay( ms )
  analogWrite (DAC0, val);
  delayMicroseconds(1000);
}
}
