void FLASHMEM setup()   {
  AudioProcessorUsageMaxReset();
  AudioMemoryUsageMaxReset();
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(mredPin, OUTPUT);
  pinMode(mgreenPin, OUTPUT);
  pinMode(mbluePin, OUTPUT);
  knobby.write(768);
  knob0.write(1);
  knob1.write(1);
  knob2.write(1);
  knob3.write(1);
  
  Serial1.setTX(1);
  Serial1.setRX(0);
  Serial1.begin(31250);
    while (!Serial1 && millis() < 4000 );
  MIDI1.begin(MIDI_CHANNEL_OMNI);
/*
  Serial2.setTX(8);
  Serial2.setRX(7);
  Serial2.begin(31250);
    while (!Serial2 && millis() < 4000 );
  MIDI2.begin(MIDI_CHANNEL_OMNI);

  Serial3.setTX(14);
  Serial3.setRX(15);
  Serial3.begin(31250);
    while (!Serial3 && millis() < 4000 );
  MIDI3.begin(MIDI_CHANNEL_OMNI);

  Serial4.setTX(17);
  Serial4.setRX(16);
  Serial4.begin(31250);
    while (!Serial4 && millis() < 4000 );
  MIDI4.begin(MIDI_CHANNEL_OMNI);

  Serial5.setTX(20);
  Serial5.setRX(21);
  Serial5.begin(31250);
    while (!Serial5 && millis() < 4000 );
  MIDI5.begin(MIDI_CHANNEL_OMNI);

  Serial6.setTX(24);
  Serial6.setRX(25);
  Serial6.begin(31250);
    while (!Serial6 && millis() < 4000 );
  MIDI6.begin(MIDI_CHANNEL_OMNI);

  Serial7.setTX(29);
  Serial7.setRX(28);
  Serial7.begin(31250);
    while (!Serial7 && millis() < 4000 );
  MIDI7.begin(MIDI_CHANNEL_OMNI);

  Serial8.setTX(35);
  Serial8.setRX(34);
  Serial8.begin(31250);
    while (!Serial8 && millis() < 4000 );
  MIDI8.begin(MIDI_CHANNEL_OMNI);
  
*/

  AudioMemory(400);                  // allocate some memory for audio library
  
  pink1.amplitude(0.99); 
  
  dc1.amplitude(1.0);
  
  biquad1.setLowpass(0, CV_LP_LO, CV_LP_LOQ);
  biquad1.setLowpass(1, CV_LP_HI, CV_LP_HIQ);
  biquad1.setLowpass(2, CV_LP_LO, CV_LP_LOQ);
  biquad1.setLowpass(3, CV_LP_MID, CV_LP_HIQ);

  biquad2.setLowpass(0, CV_LP_LO, CV_LP_LOQ);
  biquad2.setLowpass(1, CV_LP_HI, CV_LP_HIQ);
  biquad2.setLowpass(2, CV_LP_LO, CV_LP_LOQ);
  biquad2.setLowpass(3, CV_LP_MID, CV_LP_HIQ);
  
  biquad3.setLowpass(0, CV_LP_LO, CV_LP_LOQ);
  biquad3.setLowpass(1, CV_LP_HI, CV_LP_HIQ);
  biquad3.setLowpass(2, CV_LP_LO, CV_LP_LOQ);
  biquad3.setLowpass(3, CV_LP_MID, CV_LP_HIQ);

  biquad4.setLowpass(0, CV_LP_LO, CV_LP_LOQ);
  biquad4.setLowpass(1, CV_LP_HI, CV_LP_HIQ);
  biquad4.setLowpass(2, CV_LP_LO, CV_LP_LOQ);
  biquad4.setLowpass(3, CV_LP_MID, CV_LP_HIQ);

  biquad5.setLowpass(0,20000,0.707);

  biquad6.setLowpass(0, CV_LP_LO, CV_LP_LOQ);
  biquad6.setLowpass(1, CV_LP_HI, CV_LP_HIQ);
  biquad6.setLowpass(2, CV_LP_LO, CV_LP_LOQ);
  biquad6.setLowpass(3, CV_LP_MID, CV_LP_HIQ);

  biquad7.setLowpass(0, CV_LP_LO, CV_LP_LOQ);
  biquad7.setLowpass(1, CV_LP_HI, CV_LP_HIQ);
  biquad7.setLowpass(2, CV_LP_LO, CV_LP_LOQ);
  biquad7.setLowpass(3, CV_LP_MID, CV_LP_HIQ);
  
  biquad8.setLowpass(0, CV_LP_LO, CV_LP_LOQ);
  biquad8.setLowpass(1, CV_LP_HI, CV_LP_HIQ);
  biquad8.setLowpass(2, CV_LP_LO, CV_LP_LOQ);
  biquad8.setLowpass(3, CV_LP_MID, CV_LP_HIQ);

  biquad9.setLowpass(0, CV_LP_LO, CV_LP_LOQ);
  biquad9.setLowpass(1, CV_LP_HI, CV_LP_HIQ);
  biquad9.setLowpass(2, CV_LP_LO, CV_LP_LOQ);
  biquad9.setLowpass(3, CV_LP_MID, CV_LP_HIQ);
  
  biquad10.setLowpass(0, CV_LP_LO, CV_LP_LOQ);
  biquad10.setLowpass(1, CV_LP_HI, CV_LP_HIQ);
  biquad10.setLowpass(2, CV_LP_LO, CV_LP_LOQ);
  biquad10.setLowpass(3, CV_LP_MID, CV_LP_HIQ);
  
  biquad11.setLowpass(0, CV_LP_LO, CV_LP_LOQ);
  biquad11.setLowpass(1, CV_LP_HI, CV_LP_HIQ);
  biquad11.setLowpass(2, CV_LP_LO, CV_LP_LOQ);
  biquad11.setLowpass(3, CV_LP_MID, CV_LP_HIQ);
  
  biquad12.setLowpass(0, CV_LP_LO, CV_LP_LOQ);
  biquad12.setLowpass(1, CV_LP_HI, CV_LP_HIQ);
  biquad12.setLowpass(2, CV_LP_LO, CV_LP_LOQ);
  biquad12.setLowpass(3, CV_LP_MID, CV_LP_HIQ);
  
  biquad13.setLowpass(0, CV_LP_LO, CV_LP_LOQ);
  biquad13.setLowpass(1, CV_LP_HI, CV_LP_HIQ);
  biquad13.setLowpass(2, CV_LP_LO, CV_LP_LOQ);
  biquad13.setLowpass(3, CV_LP_MID, CV_LP_HIQ);
  
  biquad14.setLowpass(0, CV_LP_LO, CV_LP_LOQ);
  biquad14.setLowpass(1, CV_LP_HI, CV_LP_HIQ);
  biquad14.setLowpass(2, CV_LP_LO, CV_LP_LOQ);
  biquad14.setLowpass(3, CV_LP_MID, CV_LP_HIQ);
  
  biquad15.setLowpass(0, CV_LP_LO, CV_LP_LOQ);
  biquad15.setLowpass(1, CV_LP_HI, CV_LP_HIQ);
  biquad15.setLowpass(2, CV_LP_LO, CV_LP_LOQ);
  biquad15.setLowpass(3, CV_LP_MID, CV_LP_HIQ);
  
  biquad16.setLowpass(0, CV_LP_LO, CV_LP_LOQ);
  biquad16.setLowpass(1, CV_LP_HI, CV_LP_HIQ);
  biquad16.setLowpass(2, CV_LP_LO, CV_LP_LOQ);
  biquad16.setLowpass(3, CV_LP_MID, CV_LP_HIQ);
  
  biquad17.setLowpass(0, CV_LP_LO, CV_LP_LOQ);
  biquad17.setLowpass(1, CV_LP_HI, CV_LP_HIQ);
  biquad17.setLowpass(2, CV_LP_LO, CV_LP_LOQ);
  biquad17.setLowpass(3, CV_LP_MID, CV_LP_HIQ);
  
  biquad18.setLowpass(0, CV_LP_LO, CV_LP_LOQ);
  biquad18.setLowpass(1, CV_LP_HI, CV_LP_HIQ);
  biquad18.setLowpass(2, CV_LP_LO, CV_LP_LOQ);
  biquad18.setLowpass(3, CV_LP_MID, CV_LP_HIQ);
  
  biquad19.setLowpass(0, CV_LP_LO, CV_LP_LOQ);
  biquad19.setLowpass(1, CV_LP_HI, CV_LP_HIQ);
  biquad19.setLowpass(2, CV_LP_LO, CV_LP_LOQ);
  biquad19.setLowpass(3, CV_LP_MID, CV_LP_HIQ);
  
  biquad20.setLowpass(0, CV_LP_LO, CV_LP_LOQ);
  biquad20.setLowpass(1, CV_LP_HI, CV_LP_HIQ);
  biquad20.setLowpass(2, CV_LP_LO, CV_LP_LOQ);
  biquad20.setLowpass(3, CV_LP_MID, CV_LP_HIQ);
  
  biquad21.setLowpass(0, CV_LP_LO, CV_LP_LOQ);
  biquad21.setLowpass(1, CV_LP_HI, CV_LP_HIQ);
  biquad21.setLowpass(2, CV_LP_LO, CV_LP_LOQ);
  biquad21.setLowpass(3, CV_LP_MID, CV_LP_HIQ);
  
  biquad22.setLowpass(0, CV_LP_LO, CV_LP_LOQ);
  biquad22.setLowpass(1, CV_LP_HI, CV_LP_HIQ);
  biquad22.setLowpass(2, CV_LP_LO, CV_LP_LOQ);
  biquad22.setLowpass(3, CV_LP_MID, CV_LP_HIQ);
  
  biquad23.setLowpass(0, CV_LP_LO, CV_LP_LOQ);
  biquad23.setLowpass(1, CV_LP_HI, CV_LP_HIQ);
  biquad23.setLowpass(2, CV_LP_LO, CV_LP_LOQ);
  biquad23.setLowpass(3, CV_LP_MID, CV_LP_HIQ);
  
  biquad24.setLowpass(0, CV_LP_LO, CV_LP_LOQ);
  biquad24.setLowpass(1, CV_LP_HI, CV_LP_HIQ);
  biquad24.setLowpass(2, CV_LP_LO, CV_LP_LOQ);
  biquad24.setLowpass(3, CV_LP_MID, CV_LP_HIQ);
  
  biquad25.setLowpass(0, CV_LP_LO, CV_LP_LOQ);
  biquad25.setLowpass(1, CV_LP_HI, CV_LP_HIQ);
  biquad25.setLowpass(2, CV_LP_LO, CV_LP_LOQ);
  biquad25.setLowpass(3, CV_LP_MID, CV_LP_HIQ);
  
  biquad26.setLowpass(0, CV_LP_LO, CV_LP_LOQ);
  biquad26.setLowpass(1, CV_LP_HI, CV_LP_HIQ);
  biquad26.setLowpass(2, CV_LP_LO, CV_LP_LOQ);
  biquad26.setLowpass(3, CV_LP_MID, CV_LP_HIQ);
  
  biquad27.setLowpass(0, CV_LP_LO, CV_LP_LOQ);
  biquad27.setLowpass(1, CV_LP_HI, CV_LP_HIQ);
  biquad27.setLowpass(2, CV_LP_LO, CV_LP_LOQ);
  biquad27.setLowpass(3, CV_LP_MID, CV_LP_HIQ);
  
  biquad28.setLowpass(0, CV_LP_LO, CV_LP_LOQ);
  biquad28.setLowpass(1, CV_LP_HI, CV_LP_HIQ);
  biquad28.setLowpass(2, CV_LP_LO, CV_LP_LOQ);
  biquad28.setLowpass(3, CV_LP_MID, CV_LP_HIQ);
  
  biquad29.setLowpass(0, CV_LP_LO, CV_LP_LOQ);
  biquad29.setLowpass(1, CV_LP_HI, CV_LP_HIQ);
  biquad29.setLowpass(2, CV_LP_LO, CV_LP_LOQ);
  biquad29.setLowpass(3, CV_LP_MID, CV_LP_HIQ);
  
  biquad30.setLowpass(0, CV_LP_LO, CV_LP_LOQ);
  biquad30.setLowpass(1, CV_LP_HI, CV_LP_HIQ);
  biquad30.setLowpass(2, CV_LP_LO, CV_LP_LOQ);
  biquad30.setLowpass(3, CV_LP_MID, CV_LP_HIQ);
  
  biquad31.setLowpass(0, CV_LP_LO, CV_LP_LOQ);
  biquad31.setLowpass(1, CV_LP_HI, CV_LP_HIQ);
  biquad31.setLowpass(2, CV_LP_LO, CV_LP_LOQ);
  biquad31.setLowpass(3, CV_LP_MID, CV_LP_HIQ);
  
  mixer8.gain(0,1);
  mixer8.gain(1,1);
  mixer8.gain(2,0);
  mixer8.gain(3,0);
  
  mixer9.gain(0,1);
  mixer9.gain(1,1);
  mixer9.gain(2,0);
  mixer9.gain(3,0);
  
  mixer10.gain(0,1);
  mixer10.gain(1,1);
  mixer10.gain(2,0);
  mixer10.gain(3,0);

  mixer11.gain(0,1);
  mixer11.gain(1,0);
  mixer11.gain(2,0);
  mixer11.gain(3,0);

  mixer20.gain(0,1);
  mixer20.gain(1,0);
  mixer20.gain(2,0);
  mixer20.gain(3,0);

  mixer25.gain(0,0.6);
  mixer25.gain(1,0.6);
  mixer25.gain(2,0);
  mixer25.gain(3,0);

  mixer27.gain(0,0.6);
  mixer27.gain(1,0.6);
  mixer27.gain(2,0);
  mixer27.gain(3,0);

  mixer28.gain(0,0.3);
  mixer28.gain(1,0.3);
  mixer28.gain(2,0.3);
  mixer28.gain(3,0.3);

  mixer29.gain(0,0.3);
  mixer29.gain(1,0.3);
  mixer29.gain(2,0.3);
  mixer29.gain(3,0.3);

  cvbus1.amplitude(0);
  cvbus2.amplitude(0);
  notefreq1.begin(.85);
  
  sgtl5000_1.enable();
  sgtl5000_1.inputSelect(myInput);
  sgtl5000_1.micGain(36);
  sgtl5000_1.volume(1.0);  
}
