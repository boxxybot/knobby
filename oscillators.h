  //  lfo1  =============================
    if (midiChange(LFO1_SHAPE)){
      int shape = midivals[LFO1_SHAPE] % 6;
      
      float xSpeed = midivals[LFO1_SPEED] * inc;
      xSpeed = pow(100, (xSpeed - 1));
      float lfo1speed = (MAX_LFO_SPEED * xSpeed);
        
      switch(shape){
      
        case _WAVEFORM_SINE:
          waveform1.begin(1.0, lfo1speed, WAVEFORM_SINE);
          sendmessage("LFO1 Sine:",lfo1speed);
        break;
  
        case _WAVEFORM_SAWTOOTH:
          waveform1.begin(1.0, lfo1speed, WAVEFORM_SAWTOOTH);
          sendmessage("LFO1 Saw:",lfo1speed);
        break;
  
        case _WAVEFORM_SAWTOOTH_REVERSE:
          waveform1.begin(1.0, lfo1speed, WAVEFORM_SAWTOOTH_REVERSE);
          sendmessage("LFO1 Saw Rev:",lfo1speed);
        break;
  
        case _WAVEFORM_PULSE:
          waveform1.begin(1.0, lfo1speed, WAVEFORM_PULSE);
          sendmessage("LFO1 Pulse:",lfo1speed);
        break;
  
        case _WAVEFORM_TRIANGLE_VARIABLE:
          waveform1.begin(1.0, lfo1speed, WAVEFORM_TRIANGLE_VARIABLE);
          sendmessage("LFO1 Triangle:",lfo1speed);
        break;
  
        case _WAVEFORM_SAMPLE_HOLD:
          waveform1.begin(1.0, lfo1speed, WAVEFORM_SAMPLE_HOLD);
          sendmessage("LFO1 S/H:",lfo1speed);
        break;
      }        
    }

    if (midiChange(LFO1_SPEED)){
      float xSpeed = midivals[LFO1_SPEED] * inc;
      xSpeed = pow(100, (xSpeed - 1));
      float lfo1speed = (MAX_LFO_SPEED * xSpeed);
      waveform1.frequency(lfo1speed);
      sendmessage("LFO1 Hz:",lfo1speed);
    }
    if (midiChange(LFO1_CRUNCH)){
      bitcrusher4.bits(16 - (midivals[LFO1_CRUNCH] % 16));      
      sendmessage("LFO1 Crunch:",(float)(midivals[LFO1_CRUNCH] % 16));
    }
    if (midiChange(LFO1_PHASE)){
      waveform1.phase((float)midivals[LFO1_PHASE] * inc * MAX_LFO_PHASE);
      sendmessage("LFO1 Phase:",(float)midivals[LFO1_PHASE] * inc * MAX_LFO_PHASE);
    }
    
  //  lfo2  =============================
    if (midiChange(LFO2_SHAPE)){
      int shape = midivals[LFO2_SHAPE] % 6;

      float xSpeed = midivals[LFO2_SPEED] * inc;
      xSpeed = pow(100, (xSpeed - 1));
      float lfo2speed = (MAX_LFO_SPEED * xSpeed);
        
      switch(shape){
      
        case _WAVEFORM_SINE:
          waveform2.begin(1.0, lfo2speed, WAVEFORM_SINE);
          sendmessage("LFO2 Sine:",lfo2speed);
        break;
  
        case _WAVEFORM_SAWTOOTH:
          waveform2.begin(1.0, lfo2speed, WAVEFORM_SAWTOOTH);
          sendmessage("LFO2 Saw:",lfo2speed);
        break;
  
        case _WAVEFORM_SAWTOOTH_REVERSE:
          waveform2.begin(1.0, lfo2speed, WAVEFORM_SAWTOOTH_REVERSE);
          sendmessage("LFO2 Saw Rev:",lfo2speed);
        break;
  
        case _WAVEFORM_PULSE:
          waveform2.begin(1.0, lfo2speed, WAVEFORM_PULSE);
          sendmessage("LFO2 Pulse:",lfo2speed);
        break;
  
        case _WAVEFORM_TRIANGLE_VARIABLE:
          waveform2.begin(1.0, lfo2speed, WAVEFORM_TRIANGLE_VARIABLE);
          sendmessage("LFO2 Triangle:",lfo2speed);
        break;
  
        case _WAVEFORM_SAMPLE_HOLD:
          waveform2.begin(1.0, lfo2speed, WAVEFORM_SAMPLE_HOLD);
          sendmessage("LFO2 S/H:",lfo2speed);
        break;
      }        
    }
    if (midiChange(LFO2_SPEED)){
      float xSpeed = midivals[LFO2_SPEED] * inc;
      xSpeed = pow(100, (xSpeed - 1));
      float lfo2speed = (MAX_LFO_SPEED * xSpeed);
      waveform2.frequency(lfo2speed);
      sendmessage("LFO2 Hz:",lfo2speed);
    }
    if (midiChange(LFO2_CRUNCH)){
      bitcrusher5.bits(16 - (midivals[LFO2_CRUNCH] % 16));      
      sendmessage("LFO2 Crunch:",(float)(midivals[LFO2_CRUNCH] % 16));
    }
    if (midiChange(LFO2_PHASE)){
      waveform2.phase((float)midivals[LFO2_PHASE] * inc * MAX_LFO_PHASE);
      sendmessage("LFO2 Phase:",(float)midivals[LFO2_PHASE] * inc * MAX_LFO_PHASE);
    }
    
     
  //  lfo3  =============================
    if (midiChange(LFO3_SHAPE)){
      int shape = midivals[LFO3_SHAPE] % 6;

      float xSpeed = midivals[LFO3_SPEED] * inc;
      xSpeed = pow(100, (xSpeed - 1));
      float lfo3speed = (MAX_LFO_SPEED * xSpeed);
        
      switch(shape){
      
        case _WAVEFORM_SINE:
          waveform3.begin(1.0, lfo3speed, WAVEFORM_SINE);
          sendmessage("LFO3 Sine:",lfo3speed);
        break;
  
        case _WAVEFORM_SAWTOOTH:
          waveform3.begin(1.0, lfo3speed, WAVEFORM_SAWTOOTH);
          sendmessage("LFO3 Saw:",lfo3speed);
        break;
  
        case _WAVEFORM_SAWTOOTH_REVERSE:
          waveform3.begin(1.0, lfo3speed, WAVEFORM_SAWTOOTH_REVERSE);
          sendmessage("LFO3 Saw Rev:",lfo3speed);
        break;
  
        case _WAVEFORM_PULSE:
          waveform3.begin(1.0, lfo3speed, WAVEFORM_PULSE);
          sendmessage("LFO3 Pulse:",lfo3speed);
        break;
  
        case _WAVEFORM_TRIANGLE_VARIABLE:
          waveform3.begin(1.0, lfo3speed, WAVEFORM_TRIANGLE_VARIABLE);
          sendmessage("LFO3 Triangle:",lfo3speed);
        break;
  
        case _WAVEFORM_SAMPLE_HOLD:
          waveform3.begin(1.0, lfo3speed, WAVEFORM_SAMPLE_HOLD);
          sendmessage("LFO3 S/H:",lfo3speed);
        break;
      }        
    }
    if (midiChange(LFO3_SPEED)){
      float xSpeed = midivals[LFO3_SPEED] * inc;
      xSpeed = pow(100, (xSpeed - 1));
      float lfo3speed = (MAX_LFO_SPEED * xSpeed);
      waveform3.frequency(lfo3speed);
      sendmessage("LFO3 Hz:",lfo3speed);
    }
    if (midiChange(LFO3_CRUNCH)){
      bitcrusher6.bits(16 - (midivals[LFO3_CRUNCH] % 16));      
      sendmessage("LFO3 Crunch:",(float)(midivals[LFO3_CRUNCH] % 16));
    }
    if (midiChange(LFO3_PHASE)){
      waveform3.phase((float)midivals[LFO3_PHASE] * inc * MAX_LFO_PHASE);
      sendmessage("LFO3 Phase:",(float)midivals[LFO3_PHASE] * inc * MAX_LFO_PHASE);
    }
    
      
  //  osc1  =============================
    if (midiChange(OSC1_SHAPE)){
      int shape = midivals[OSC1_SHAPE] % 5;

      switch(shape){
      
        case _WAVEFORM_SINE:
          waveformMod1.begin(1.0, noteFreqs[midivals[OSC1_FREQUENCY]], WAVEFORM_SINE);
          sendmessage("VCO1 Sine:",noteFreqs[midivals[OSC1_FREQUENCY]]);
        break;
  
        case _WAVEFORM_SAWTOOTH:
          waveformMod1.begin(1.0, noteFreqs[midivals[OSC1_FREQUENCY]], WAVEFORM_SAWTOOTH);
          sendmessage("VCO1 Saw:",noteFreqs[midivals[OSC1_FREQUENCY]]);
        break;
  
        case _WAVEFORM_SAWTOOTH_REVERSE:
          waveformMod1.begin(1.0, noteFreqs[midivals[OSC1_FREQUENCY]], WAVEFORM_SAWTOOTH_REVERSE);
          sendmessage("VCO1 Saw Rev:",noteFreqs[midivals[OSC1_FREQUENCY]]);
        break;
  
        case _WAVEFORM_PULSE:
          waveformMod1.begin(1.0, noteFreqs[midivals[OSC1_FREQUENCY]], WAVEFORM_PULSE);
          sendmessage("VCO1 Pulse:",noteFreqs[midivals[OSC1_FREQUENCY]]);
        break;
  
        case _WAVEFORM_TRIANGLE_VARIABLE:
          waveformMod1.begin(1.0, noteFreqs[midivals[OSC1_FREQUENCY]], WAVEFORM_TRIANGLE_VARIABLE);
          sendmessage("VCO1 Triangle:",noteFreqs[midivals[OSC1_FREQUENCY]]);
        break;
      }        
    }
    if (midiChange(OSC1_FREQUENCY)){
      waveformMod1.frequency(noteFreqs[midivals[OSC1_FREQUENCY]]);
      waveformMod2.frequency(noteFreqs[midivals[OSC1_FREQUENCY] + midivals[OSC2_FREQUENCY]]);
      sendmessage("VCO1 Freq:",noteFreqs[midivals[OSC1_FREQUENCY]]);
    }
    if (midiChange(OSC1_SHAPEMOD)){
      dc3.amplitude((float)midivals[OSC1_SHAPEMOD] * inc);
      sendmessage("VCO1 Mod:",(float)midivals[OSC1_SHAPEMOD] * inc);
    }
    if (midiChange(OSC1_FREQMOD)){
      waveformMod1.frequencyModulation((float)midivals[OSC1_FREQMOD] * inc * MAX_OSC_TRACKING);
      sendmessage("VCO1 FM:",(float)midivals[OSC1_FREQMOD] * inc * MAX_OSC_TRACKING);
    }

  //  osc2  =============================
    if (midiChange(OSC2_SHAPE)){
      int shape = midivals[OSC2_SHAPE] % 5;
 
       switch(shape){
      
        case _WAVEFORM_SINE:
          waveformMod2.begin(1.0, noteFreqs[midivals[OSC1_FREQUENCY] + midivals[OSC2_FREQUENCY]], WAVEFORM_SINE);
          sendmessage("VCO2 Sine:",noteFreqs[midivals[OSC1_FREQUENCY] + midivals[OSC2_FREQUENCY]]);
        break;
  
        case _WAVEFORM_SAWTOOTH:
          waveformMod2.begin(1.0, noteFreqs[midivals[OSC1_FREQUENCY] + midivals[OSC2_FREQUENCY]], WAVEFORM_SAWTOOTH);
          sendmessage("VCO2 Saw:",noteFreqs[midivals[OSC1_FREQUENCY] + midivals[OSC2_FREQUENCY]]);
        break;
  
        case _WAVEFORM_SAWTOOTH_REVERSE:
          waveformMod2.begin(1.0, noteFreqs[midivals[OSC1_FREQUENCY] + midivals[OSC2_FREQUENCY]], WAVEFORM_SAWTOOTH_REVERSE);
          sendmessage("VCO2 Saw Rev:",noteFreqs[midivals[OSC1_FREQUENCY] + midivals[OSC2_FREQUENCY]]);
        break;
  
        case _WAVEFORM_PULSE:
          waveformMod2.begin(1.0, noteFreqs[midivals[OSC1_FREQUENCY] + midivals[OSC2_FREQUENCY]], WAVEFORM_PULSE);
          sendmessage("VCO2 Pulse:",noteFreqs[midivals[OSC1_FREQUENCY] + midivals[OSC2_FREQUENCY]]);
        break;
  
        case _WAVEFORM_TRIANGLE_VARIABLE:
          waveformMod2.begin(1.0, noteFreqs[midivals[OSC1_FREQUENCY] + midivals[OSC2_FREQUENCY]], WAVEFORM_TRIANGLE_VARIABLE);
          sendmessage("VCO2 Triangle:",noteFreqs[midivals[OSC1_FREQUENCY] + midivals[OSC2_FREQUENCY]]);
        break;
      }        
    }
    if (midiChange(OSC2_FREQUENCY)){
      waveformMod2.frequency(noteFreqs[midivals[OSC1_FREQUENCY] + midivals[OSC2_FREQUENCY]]);
      sendmessage("VCO2 Freq:",noteFreqs[midivals[OSC1_FREQUENCY] + midivals[OSC2_FREQUENCY]]);
    }
    if (midiChange(OSC2_SHAPEMOD)){
      dc2.amplitude((float)midivals[OSC2_SHAPEMOD] * inc);
      sendmessage("VCO2 Mod:",(float)midivals[OSC2_SHAPEMOD] * inc);
    }
    if (midiChange(OSC2_FREQMOD)){
      waveformMod2.frequencyModulation((float)midivals[OSC2_FREQMOD] * inc * MAX_OSC_TRACKING);
      sendmessage("VCO2 FM:",(float)midivals[OSC2_FREQMOD] * inc * MAX_OSC_TRACKING);
    }

  //  osc3  =============================
    if (midiChange(OSC3_SHAPE)){
      int shape = midivals[OSC3_SHAPE] % 5;
 
       switch(shape){
      
        case _WAVEFORM_SINE:
          waveformMod4.begin(1.0, noteFreqs[midivals[OSC3_FREQUENCY]], WAVEFORM_SINE);
          sendmessage("VCO3 Sine:",noteFreqs[midivals[OSC3_FREQUENCY]]);
        break;
  
        case _WAVEFORM_SAWTOOTH:
          waveformMod4.begin(1.0, noteFreqs[midivals[OSC3_FREQUENCY]], WAVEFORM_SAWTOOTH);
          sendmessage("VCO3 Saw:", noteFreqs[midivals[OSC3_FREQUENCY]]);
        break;
  
        case _WAVEFORM_SAWTOOTH_REVERSE:
          waveformMod4.begin(1.0, noteFreqs[midivals[OSC3_FREQUENCY]], WAVEFORM_SAWTOOTH_REVERSE);
          sendmessage("VCO3 Saw Rev:", noteFreqs[midivals[OSC3_FREQUENCY]]);
        break;
  
        case _WAVEFORM_PULSE:
          waveformMod4.begin(1.0, noteFreqs[midivals[OSC3_FREQUENCY]], WAVEFORM_PULSE);
          sendmessage("VCO3 Pulse:", noteFreqs[midivals[OSC3_FREQUENCY]]);
        break;
  
        case _WAVEFORM_TRIANGLE_VARIABLE:
          waveformMod4.begin(1.0, noteFreqs[midivals[OSC3_FREQUENCY]], WAVEFORM_TRIANGLE_VARIABLE);
          sendmessage("VCO3 Triangle:", noteFreqs[midivals[OSC3_FREQUENCY]]);
        break;
      }        
    }
    if (midiChange(OSC3_FREQUENCY)){
      waveformMod4.frequency( noteFreqs[midivals[OSC3_FREQUENCY]]);
      waveformMod5.frequency( noteFreqs[midivals[OSC4_FREQUENCY] + midivals[OSC3_FREQUENCY]]);
      waveformMod6.frequency( noteFreqs[midivals[OSC5_FREQUENCY] + midivals[OSC3_FREQUENCY]]);
      sendmessage("VCO3 Freq:", noteFreqs[midivals[OSC3_FREQUENCY]]);
    }
    if (midiChange(OSC3_PHASEMOD)){
      waveformMod4.phaseModulation(midivals[OSC3_PHASEMOD]);
      sendmessage("VCO3 Mod:",(float)midivals[OSC3_PHASEMOD]);
    }
    if (midiChange(OSC3_FREQMOD)){
      waveformMod4.frequencyModulation((float)midivals[OSC3_FREQMOD] * inc * MAX_OSC_TRACKING);
      sendmessage("VCO3 FM:",(float)midivals[OSC3_FREQMOD] * inc * MAX_OSC_TRACKING);
    }

  //  osc4  =============================
    if (midiChange(OSC4_SHAPE)){
      int shape = midivals[OSC4_SHAPE] % 5;
 
       switch(shape){
      
        case _WAVEFORM_SINE:
          waveformMod5.begin(1.0, noteFreqs[midivals[OSC3_FREQUENCY] + midivals[OSC4_FREQUENCY]], WAVEFORM_SINE);
          sendmessage("VCO4 Sine:",noteFreqs[midivals[OSC3_FREQUENCY] + midivals[OSC4_FREQUENCY]]);
        break;
  
        case _WAVEFORM_SAWTOOTH:
          waveformMod5.begin(1.0, noteFreqs[midivals[OSC3_FREQUENCY] + midivals[OSC4_FREQUENCY]], WAVEFORM_SAWTOOTH);
          sendmessage("VCO4 Saw:", noteFreqs[midivals[OSC3_FREQUENCY] + midivals[OSC4_FREQUENCY]]);
        break;
  
        case _WAVEFORM_SAWTOOTH_REVERSE:
          waveformMod5.begin(1.0, noteFreqs[midivals[OSC3_FREQUENCY] + midivals[OSC4_FREQUENCY]], WAVEFORM_SAWTOOTH_REVERSE);
          sendmessage("VCO4 Saw Rev:", noteFreqs[midivals[OSC3_FREQUENCY] + midivals[OSC4_FREQUENCY]]);
        break;
  
        case _WAVEFORM_PULSE:
          waveformMod5.begin(1.0, noteFreqs[midivals[OSC3_FREQUENCY] + midivals[OSC4_FREQUENCY]], WAVEFORM_PULSE);
          sendmessage("VCO4 Pulse:", noteFreqs[midivals[OSC3_FREQUENCY] + midivals[OSC4_FREQUENCY]]);
        break;
  
        case _WAVEFORM_TRIANGLE_VARIABLE:
          waveformMod5.begin(1.0, noteFreqs[midivals[OSC3_FREQUENCY] + midivals[OSC4_FREQUENCY]], WAVEFORM_TRIANGLE_VARIABLE);
          sendmessage("VCO4 Triangle:", noteFreqs[midivals[OSC3_FREQUENCY] + midivals[OSC4_FREQUENCY]]);
        break;
      }        
    }
    if (midiChange(OSC4_FREQUENCY)){
      waveformMod5.frequency( noteFreqs[midivals[OSC3_FREQUENCY] + midivals[OSC4_FREQUENCY]]);
      sendmessage("VCO4 Freq:", noteFreqs[midivals[OSC3_FREQUENCY] + midivals[OSC4_FREQUENCY]]);
    }
    if (midiChange(OSC4_PHASEMOD)){
      waveformMod5.phaseModulation(midivals[OSC4_PHASEMOD]);
      sendmessage("VCO4 Mod:",(float)midivals[OSC4_PHASEMOD]);
    }
    if (midiChange(OSC4_FREQMOD)){
      waveformMod5.frequencyModulation((float)midivals[OSC4_FREQMOD] * inc * MAX_OSC_TRACKING);
      sendmessage("VCO4 FM:",(float)midivals[OSC4_FREQMOD] * inc * MAX_OSC_TRACKING);
    }

  //  osc5  =============================
    if (midiChange(OSC5_SHAPE)){
      int shape = midivals[OSC5_SHAPE] % 5;
 
       switch(shape){
      
        case _WAVEFORM_SINE:
          waveformMod6.begin(1.0, noteFreqs[midivals[OSC3_FREQUENCY] + midivals[OSC5_FREQUENCY]], WAVEFORM_SINE);
          sendmessage("VCO5 Sine:",noteFreqs[midivals[OSC3_FREQUENCY] + midivals[OSC5_FREQUENCY]]);
        break;
  
        case _WAVEFORM_SAWTOOTH:
          waveformMod6.begin(1.0, noteFreqs[midivals[OSC3_FREQUENCY] + midivals[OSC5_FREQUENCY]], WAVEFORM_SAWTOOTH);
          sendmessage("VCO5 Saw:", noteFreqs[midivals[OSC3_FREQUENCY] + midivals[OSC5_FREQUENCY]]);
        break;
  
        case _WAVEFORM_SAWTOOTH_REVERSE:
          waveformMod6.begin(1.0, noteFreqs[midivals[OSC3_FREQUENCY] + midivals[OSC5_FREQUENCY]], WAVEFORM_SAWTOOTH_REVERSE);
          sendmessage("VCO5 Saw Rev:", noteFreqs[midivals[OSC3_FREQUENCY] + midivals[OSC5_FREQUENCY]]);
        break;
  
        case _WAVEFORM_PULSE:
          waveformMod6.begin(1.0, noteFreqs[midivals[OSC3_FREQUENCY] + midivals[OSC5_FREQUENCY]], WAVEFORM_PULSE);
          sendmessage("VCO5 Pulse:", noteFreqs[midivals[OSC3_FREQUENCY] + midivals[OSC5_FREQUENCY]]);
        break;
  
        case _WAVEFORM_TRIANGLE_VARIABLE:
          waveformMod6.begin(1.0, noteFreqs[midivals[OSC3_FREQUENCY] + midivals[OSC5_FREQUENCY]], WAVEFORM_TRIANGLE_VARIABLE);
          sendmessage("VCO5 Triangle:", noteFreqs[midivals[OSC3_FREQUENCY] + midivals[OSC5_FREQUENCY]]);
        break;
      }        
    }
    if (midiChange(OSC5_FREQUENCY)){
      waveformMod6.frequency( noteFreqs[midivals[OSC3_FREQUENCY] + midivals[OSC5_FREQUENCY]]);
      sendmessage("VCO5 Freq:", noteFreqs[midivals[OSC3_FREQUENCY] + midivals[OSC5_FREQUENCY]]);
    }
    if (midiChange(OSC5_PHASEMOD)){
      waveformMod6.phaseModulation(midivals[OSC5_PHASEMOD]);
      sendmessage("VCO5 Mod:",(float)midivals[OSC5_PHASEMOD]);
    }
    if (midiChange(OSC5_FREQMOD)){
      waveformMod6.frequencyModulation((float)midivals[OSC5_FREQMOD] * inc * MAX_OSC_TRACKING);
      sendmessage("VCO5 FM:",(float)midivals[OSC5_FREQMOD] * inc * MAX_OSC_TRACKING);
    }

  //  osc6  =============================
    if (midiChange(OSC6_SHAPE)){
      int shape = midivals[OSC6_SHAPE] % 5;
      float _note6 = noteFreqs[midivals[OSC6_FREQUENCY]];
      
       switch(shape){
      
        case _WAVEFORM_SINE:
          AudioNoInterrupts();
          waveformMod101.begin(1.0, _note6, WAVEFORM_SINE);
          waveformMod104.begin(1.0, _note6, WAVEFORM_SINE);
          waveformMod107.begin(1.0, _note6, WAVEFORM_SINE);
          waveformMod110.begin(1.0, _note6, WAVEFORM_SINE);
          waveformMod115.begin(1.0, _note6, WAVEFORM_SINE);
          waveformMod118.begin(1.0, _note6, WAVEFORM_SINE);
          waveformMod121.begin(1.0, _note6, WAVEFORM_SINE);
          waveformMod124.begin(1.0, _note6, WAVEFORM_SINE);
          AudioInterrupts();
          sendmessage("VCO6 Sine:",_note6);
        break;
  
        case _WAVEFORM_SAWTOOTH:
          AudioNoInterrupts();
          waveformMod101.begin(1.0, _note6, WAVEFORM_SAWTOOTH);
          waveformMod104.begin(1.0, _note6, WAVEFORM_SAWTOOTH);
          waveformMod107.begin(1.0, _note6, WAVEFORM_SAWTOOTH);
          waveformMod110.begin(1.0, _note6, WAVEFORM_SAWTOOTH);
          waveformMod115.begin(1.0, _note6, WAVEFORM_SAWTOOTH);
          waveformMod118.begin(1.0, _note6, WAVEFORM_SAWTOOTH);
          waveformMod121.begin(1.0, _note6, WAVEFORM_SAWTOOTH);
          waveformMod124.begin(1.0, _note6, WAVEFORM_SAWTOOTH);
          AudioInterrupts();
          sendmessage("VCO6 Saw:", _note6);
        break;
  
        case _WAVEFORM_SAWTOOTH_REVERSE:
          AudioNoInterrupts();
          waveformMod101.begin(1.0, _note6, WAVEFORM_SAWTOOTH_REVERSE);
          waveformMod104.begin(1.0, _note6, WAVEFORM_SAWTOOTH_REVERSE);
          waveformMod107.begin(1.0, _note6, WAVEFORM_SAWTOOTH_REVERSE);
          waveformMod110.begin(1.0, _note6, WAVEFORM_SAWTOOTH_REVERSE);
          waveformMod115.begin(1.0, _note6, WAVEFORM_SAWTOOTH_REVERSE);
          waveformMod118.begin(1.0, _note6, WAVEFORM_SAWTOOTH_REVERSE);
          waveformMod121.begin(1.0, _note6, WAVEFORM_SAWTOOTH_REVERSE);
          waveformMod124.begin(1.0, _note6, WAVEFORM_SAWTOOTH_REVERSE);
          AudioInterrupts();
          sendmessage("VCO6 Saw Rev:", _note6);
        break;
  
        case _WAVEFORM_PULSE:
          AudioNoInterrupts();
          waveformMod101.begin(1.0, _note6, WAVEFORM_PULSE);
          waveformMod104.begin(1.0, _note6, WAVEFORM_PULSE);
          waveformMod107.begin(1.0, _note6, WAVEFORM_PULSE);
          waveformMod110.begin(1.0, _note6, WAVEFORM_PULSE);
          waveformMod115.begin(1.0, _note6, WAVEFORM_PULSE);
          waveformMod118.begin(1.0, _note6, WAVEFORM_PULSE);
          waveformMod121.begin(1.0, _note6, WAVEFORM_PULSE);
          waveformMod124.begin(1.0, _note6, WAVEFORM_PULSE);
          AudioInterrupts();
          sendmessage("VCO6 Pulse:", _note6);
        break;
  
        case _WAVEFORM_TRIANGLE_VARIABLE:
          AudioNoInterrupts();
          waveformMod101.begin(1.0, _note6, WAVEFORM_TRIANGLE_VARIABLE);
          waveformMod104.begin(1.0, _note6, WAVEFORM_TRIANGLE_VARIABLE);
          waveformMod107.begin(1.0, _note6, WAVEFORM_TRIANGLE_VARIABLE);
          waveformMod110.begin(1.0, _note6, WAVEFORM_TRIANGLE_VARIABLE);
          waveformMod115.begin(1.0, _note6, WAVEFORM_TRIANGLE_VARIABLE);
          waveformMod118.begin(1.0, _note6, WAVEFORM_TRIANGLE_VARIABLE);
          waveformMod121.begin(1.0, _note6, WAVEFORM_TRIANGLE_VARIABLE);
          waveformMod124.begin(1.0, _note6, WAVEFORM_TRIANGLE_VARIABLE);
          AudioInterrupts();
          sendmessage("VCO6 Triangle:", _note6);
        break;
      }        
    }
    if (midiChange(OSC6_FREQUENCY)){
      float _note6 = noteFreqs[midivals[OSC6_FREQUENCY]];
      float _note7 = noteFreqs[midivals[OSC6_FREQUENCY] + midivals[OSC7_FREQUENCY]];
      float _note8 = noteFreqs[midivals[OSC6_FREQUENCY] + midivals[OSC7_FREQUENCY] + midivals[OSC8_FREQUENCY]];
        AudioNoInterrupts();
        waveformMod101.frequency(_note6);
        waveformMod104.frequency(_note6);
        waveformMod107.frequency(_note6);
        waveformMod110.frequency(_note6);
        waveformMod115.frequency(_note6);
        waveformMod118.frequency(_note6);
        waveformMod121.frequency(_note6);
        waveformMod124.frequency(_note6);
        waveformMod102.frequency(_note7);
        waveformMod105.frequency(_note7);
        waveformMod108.frequency(_note7);
        waveformMod111.frequency(_note7);
        waveformMod113.frequency(_note7);
        waveformMod116.frequency(_note7);
        waveformMod119.frequency(_note7);
        waveformMod122.frequency(_note7);
        waveformMod103.frequency(_note8);
        waveformMod106.frequency(_note8);
        waveformMod109.frequency(_note8);
        waveformMod112.frequency(_note8);
        waveformMod114.frequency(_note8);
        waveformMod117.frequency(_note8);
        waveformMod120.frequency(_note8);
        waveformMod123.frequency(_note8);
        AudioInterrupts();
        sendmessage("VCO6 Freq:",_note6);
    }
    if (midiChange(OSC6_QUANTIZE)){
      int _crunch = 16 - (midivals[OSC6_QUANTIZE] % 16);
      AudioNoInterrupts();
      bitcrusher101.bits(_crunch);      
      bitcrusher104.bits(_crunch);      
      bitcrusher107.bits(_crunch);      
      bitcrusher110.bits(_crunch);      
      bitcrusher115.bits(_crunch);      
      bitcrusher118.bits(_crunch);      
      bitcrusher121.bits(_crunch);      
      bitcrusher124.bits(_crunch);      
      AudioInterrupts();
      sendmessage("VCO6 Crunch:",(float)_crunch);
    }
    if (midiChange(OSC6_FREQMOD)){
      float _tracking = (float)midivals[OSC6_FREQMOD] * inc * MAX_OSC_TRACKING;
      AudioNoInterrupts();
      waveformMod101.frequencyModulation(_tracking);
      waveformMod104.frequencyModulation(_tracking);
      waveformMod107.frequencyModulation(_tracking);
      waveformMod110.frequencyModulation(_tracking);
      waveformMod115.frequencyModulation(_tracking);
      waveformMod118.frequencyModulation(_tracking);
      waveformMod121.frequencyModulation(_tracking);
      waveformMod124.frequencyModulation(_tracking);
      AudioInterrupts();
      sendmessage("VCO6 FM:",_tracking);
    }

  //  osc7  =============================
    if (midiChange(OSC7_SHAPE)){
      int shape = midivals[OSC7_SHAPE] % 5;
      float _note7 = noteFreqs[midivals[OSC6_FREQUENCY] + midivals[OSC7_FREQUENCY]];
      
       switch(shape){
      
        case _WAVEFORM_SINE:
          AudioNoInterrupts();
          waveformMod102.begin(1.0, _note7, WAVEFORM_SINE);
          waveformMod105.begin(1.0, _note7, WAVEFORM_SINE);
          waveformMod108.begin(1.0, _note7, WAVEFORM_SINE);
          waveformMod111.begin(1.0, _note7, WAVEFORM_SINE);
          waveformMod113.begin(1.0, _note7, WAVEFORM_SINE);
          waveformMod116.begin(1.0, _note7, WAVEFORM_SINE);
          waveformMod119.begin(1.0, _note7, WAVEFORM_SINE);
          waveformMod122.begin(1.0, _note7, WAVEFORM_SINE);
          AudioInterrupts();
          sendmessage("VCO7 Sine:",_note7);
        break;
  
        case _WAVEFORM_SAWTOOTH:
          AudioNoInterrupts();
          waveformMod102.begin(1.0, _note7, WAVEFORM_SAWTOOTH);
          waveformMod105.begin(1.0, _note7, WAVEFORM_SAWTOOTH);
          waveformMod108.begin(1.0, _note7, WAVEFORM_SAWTOOTH);
          waveformMod111.begin(1.0, _note7, WAVEFORM_SAWTOOTH);
          waveformMod113.begin(1.0, _note7, WAVEFORM_SAWTOOTH);
          waveformMod116.begin(1.0, _note7, WAVEFORM_SAWTOOTH);
          waveformMod119.begin(1.0, _note7, WAVEFORM_SAWTOOTH);
          waveformMod122.begin(1.0, _note7, WAVEFORM_SAWTOOTH);
          AudioInterrupts();
          sendmessage("VCO7 Saw:", _note7);
        break;
  
        case _WAVEFORM_SAWTOOTH_REVERSE:
          AudioNoInterrupts();
          waveformMod102.begin(1.0, _note7, WAVEFORM_SAWTOOTH_REVERSE);
          waveformMod105.begin(1.0, _note7, WAVEFORM_SAWTOOTH_REVERSE);
          waveformMod108.begin(1.0, _note7, WAVEFORM_SAWTOOTH_REVERSE);
          waveformMod111.begin(1.0, _note7, WAVEFORM_SAWTOOTH_REVERSE);
          waveformMod113.begin(1.0, _note7, WAVEFORM_SAWTOOTH_REVERSE);
          waveformMod116.begin(1.0, _note7, WAVEFORM_SAWTOOTH_REVERSE);
          waveformMod119.begin(1.0, _note7, WAVEFORM_SAWTOOTH_REVERSE);
          waveformMod122.begin(1.0, _note7, WAVEFORM_SAWTOOTH_REVERSE);
          AudioInterrupts();
          sendmessage("VCO7 Saw Rev:", _note7);
        break;
  
        case _WAVEFORM_PULSE:
          AudioNoInterrupts();
          waveformMod102.begin(1.0, _note7, WAVEFORM_PULSE);
          waveformMod105.begin(1.0, _note7, WAVEFORM_PULSE);
          waveformMod108.begin(1.0, _note7, WAVEFORM_PULSE);
          waveformMod111.begin(1.0, _note7, WAVEFORM_PULSE);
          waveformMod113.begin(1.0, _note7, WAVEFORM_PULSE);
          waveformMod116.begin(1.0, _note7, WAVEFORM_PULSE);
          waveformMod119.begin(1.0, _note7, WAVEFORM_PULSE);
          waveformMod122.begin(1.0, _note7, WAVEFORM_PULSE);
          AudioInterrupts();
          sendmessage("VCO7 Pulse:", _note7);
        break;
  
        case _WAVEFORM_TRIANGLE_VARIABLE:
          AudioNoInterrupts();
          waveformMod102.begin(1.0, _note7, WAVEFORM_TRIANGLE_VARIABLE);
          waveformMod105.begin(1.0, _note7, WAVEFORM_TRIANGLE_VARIABLE);
          waveformMod108.begin(1.0, _note7, WAVEFORM_TRIANGLE_VARIABLE);
          waveformMod111.begin(1.0, _note7, WAVEFORM_TRIANGLE_VARIABLE);
          waveformMod113.begin(1.0, _note7, WAVEFORM_TRIANGLE_VARIABLE);
          waveformMod116.begin(1.0, _note7, WAVEFORM_TRIANGLE_VARIABLE);
          waveformMod119.begin(1.0, _note7, WAVEFORM_TRIANGLE_VARIABLE);
          waveformMod122.begin(1.0, _note7, WAVEFORM_TRIANGLE_VARIABLE);
          AudioInterrupts();
          sendmessage("VCO7 Triangle:", _note7);
        break;
      }        
    }
    if (midiChange(OSC7_FREQUENCY)){
      float _note7 = noteFreqs[midivals[OSC6_FREQUENCY] + midivals[OSC7_FREQUENCY]];
        AudioNoInterrupts();
        waveformMod102.frequency(_note7);
        waveformMod105.frequency(_note7);
        waveformMod108.frequency(_note7);
        waveformMod111.frequency(_note7);
        waveformMod113.frequency(_note7);
        waveformMod116.frequency(_note7);
        waveformMod119.frequency(_note7);
        waveformMod122.frequency(_note7);
        AudioInterrupts();
        sendmessage("VCO7 Freq:",_note7);
    }
    if (midiChange(OSC7_QUANTIZE)){
      int _crunch = 16 - (midivals[OSC7_QUANTIZE] % 16);
      AudioNoInterrupts();
      bitcrusher102.bits(_crunch);      
      bitcrusher105.bits(_crunch);      
      bitcrusher108.bits(_crunch);      
      bitcrusher111.bits(_crunch);      
      bitcrusher113.bits(_crunch);      
      bitcrusher116.bits(_crunch);      
      bitcrusher119.bits(_crunch);      
      bitcrusher122.bits(_crunch);      
      AudioInterrupts();
      sendmessage("VCO7 Crunch:",(float)_crunch);
    }
    if (midiChange(OSC7_FREQMOD)){
      float _tracking = (float)midivals[OSC7_FREQMOD] * inc * MAX_OSC_TRACKING;
      AudioNoInterrupts();
      waveformMod102.frequencyModulation(_tracking);
      waveformMod105.frequencyModulation(_tracking);
      waveformMod108.frequencyModulation(_tracking);
      waveformMod111.frequencyModulation(_tracking);
      waveformMod113.frequencyModulation(_tracking);
      waveformMod116.frequencyModulation(_tracking);
      waveformMod119.frequencyModulation(_tracking);
      waveformMod122.frequencyModulation(_tracking);
      AudioInterrupts();
      sendmessage("VCO7 FM:",(float)midivals[OSC7_FREQMOD] * inc * MAX_OSC_TRACKING);
    }

  //  osc8  =============================
    if (midiChange(OSC8_SHAPE)){
      int shape = midivals[OSC8_SHAPE] % 5;
      float _note8 = noteFreqs[midivals[OSC6_FREQUENCY] + midivals[OSC7_FREQUENCY] + midivals[OSC8_FREQUENCY]];
      
       switch(shape){
      
        case _WAVEFORM_SINE:
          AudioNoInterrupts();
          waveformMod103.begin(1.0, _note8, WAVEFORM_SINE);
          waveformMod106.begin(1.0, _note8, WAVEFORM_SINE);
          waveformMod109.begin(1.0, _note8, WAVEFORM_SINE);
          waveformMod112.begin(1.0, _note8, WAVEFORM_SINE);
          waveformMod114.begin(1.0, _note8, WAVEFORM_SINE);
          waveformMod117.begin(1.0, _note8, WAVEFORM_SINE);
          waveformMod120.begin(1.0, _note8, WAVEFORM_SINE);
          waveformMod123.begin(1.0, _note8, WAVEFORM_SINE);
          AudioInterrupts();
          sendmessage("VCO8 Sine:",_note8);
        break;
  
        case _WAVEFORM_SAWTOOTH:
          AudioNoInterrupts();
          waveformMod103.begin(1.0, _note8, WAVEFORM_SAWTOOTH);
          waveformMod106.begin(1.0, _note8, WAVEFORM_SAWTOOTH);
          waveformMod109.begin(1.0, _note8, WAVEFORM_SAWTOOTH);
          waveformMod112.begin(1.0, _note8, WAVEFORM_SAWTOOTH);
          waveformMod114.begin(1.0, _note8, WAVEFORM_SAWTOOTH);
          waveformMod117.begin(1.0, _note8, WAVEFORM_SAWTOOTH);
          waveformMod120.begin(1.0, _note8, WAVEFORM_SAWTOOTH);
          waveformMod123.begin(1.0, _note8, WAVEFORM_SAWTOOTH);
          AudioInterrupts();
          sendmessage("VCO8 Saw:", _note8);
        break;
  
        case _WAVEFORM_SAWTOOTH_REVERSE:
          AudioNoInterrupts();
          waveformMod103.begin(1.0, _note8, WAVEFORM_SAWTOOTH_REVERSE);
          waveformMod106.begin(1.0, _note8, WAVEFORM_SAWTOOTH_REVERSE);
          waveformMod109.begin(1.0, _note8, WAVEFORM_SAWTOOTH_REVERSE);
          waveformMod112.begin(1.0, _note8, WAVEFORM_SAWTOOTH_REVERSE);
          waveformMod114.begin(1.0, _note8, WAVEFORM_SAWTOOTH_REVERSE);
          waveformMod117.begin(1.0, _note8, WAVEFORM_SAWTOOTH_REVERSE);
          waveformMod120.begin(1.0, _note8, WAVEFORM_SAWTOOTH_REVERSE);
          waveformMod123.begin(1.0, _note8, WAVEFORM_SAWTOOTH_REVERSE);
          AudioInterrupts();
          sendmessage("VCO8 Saw Rev:", _note8);
        break;
  
        case _WAVEFORM_PULSE:
          AudioNoInterrupts();
          waveformMod103.begin(1.0, _note8, WAVEFORM_PULSE);
          waveformMod106.begin(1.0, _note8, WAVEFORM_PULSE);
          waveformMod109.begin(1.0, _note8, WAVEFORM_PULSE);
          waveformMod112.begin(1.0, _note8, WAVEFORM_PULSE);
          waveformMod114.begin(1.0, _note8, WAVEFORM_PULSE);
          waveformMod117.begin(1.0, _note8, WAVEFORM_PULSE);
          waveformMod120.begin(1.0, _note8, WAVEFORM_PULSE);
          waveformMod123.begin(1.0, _note8, WAVEFORM_PULSE);
          AudioInterrupts();
          sendmessage("VCO8 Pulse:", _note8);
        break;
  
        case _WAVEFORM_TRIANGLE_VARIABLE:
          AudioNoInterrupts();
          waveformMod103.begin(1.0, _note8, WAVEFORM_TRIANGLE_VARIABLE);
          waveformMod106.begin(1.0, _note8, WAVEFORM_TRIANGLE_VARIABLE);
          waveformMod109.begin(1.0, _note8, WAVEFORM_TRIANGLE_VARIABLE);
          waveformMod112.begin(1.0, _note8, WAVEFORM_TRIANGLE_VARIABLE);
          waveformMod114.begin(1.0, _note8, WAVEFORM_TRIANGLE_VARIABLE);
          waveformMod117.begin(1.0, _note8, WAVEFORM_TRIANGLE_VARIABLE);
          waveformMod120.begin(1.0, _note8, WAVEFORM_TRIANGLE_VARIABLE);
          waveformMod123.begin(1.0, _note8, WAVEFORM_TRIANGLE_VARIABLE);
          AudioInterrupts();
          sendmessage("VCO8 Triangle:", _note8);
        break;
      }        
    }
    if (midiChange(OSC8_FREQUENCY)){
      float _note8 = noteFreqs[midivals[OSC6_FREQUENCY] + midivals[OSC7_FREQUENCY] + midivals[OSC8_FREQUENCY]];
        AudioNoInterrupts();
        waveformMod103.frequency(_note8);
        waveformMod106.frequency(_note8);
        waveformMod109.frequency(_note8);
        waveformMod112.frequency(_note8);
        waveformMod114.frequency(_note8);
        waveformMod117.frequency(_note8);
        waveformMod120.frequency(_note8);
        waveformMod123.frequency(_note8);
        AudioInterrupts();
        sendmessage("VCO8 Freq:",_note8);
    }
    if (midiChange(OSC8_QUANTIZE)){
      int _crunch = 16 - (midivals[OSC8_QUANTIZE] % 16);
      AudioNoInterrupts();
      bitcrusher103.bits(_crunch);      
      bitcrusher106.bits(_crunch);      
      bitcrusher109.bits(_crunch);      
      bitcrusher112.bits(_crunch);      
      bitcrusher114.bits(_crunch);      
      bitcrusher117.bits(_crunch);      
      bitcrusher120.bits(_crunch);      
      bitcrusher123.bits(_crunch);      
      AudioInterrupts();
      sendmessage("VCO8 Crunch:",(float)_crunch);
    }
    if (midiChange(OSC8_FREQMOD)){
      float _tracking = (float)midivals[OSC8_FREQMOD] * inc * MAX_OSC_TRACKING;
      AudioNoInterrupts();
      waveformMod103.frequencyModulation(_tracking);
      waveformMod106.frequencyModulation(_tracking);
      waveformMod109.frequencyModulation(_tracking);
      waveformMod112.frequencyModulation(_tracking);
      waveformMod114.frequencyModulation(_tracking);
      waveformMod117.frequencyModulation(_tracking);
      waveformMod120.frequencyModulation(_tracking);
      waveformMod123.frequencyModulation(_tracking);
      AudioInterrupts();
      sendmessage("VCO8 FM:",(float)midivals[OSC8_FREQMOD] * inc * MAX_OSC_TRACKING);
    }


  //  lfo4  =============================
    if (midiChange(LFO4_SHAPE)){
      int shape = midivals[LFO4_SHAPE] % 6;

      float xSpeed = midivals[LFO4_SPEED] * inc;
      xSpeed = pow(1000, (xSpeed - 1));
      float lfo4speed = (MAX_LFO_SPEED * xSpeed);
        
      switch(shape){
      
        case _WAVEFORM_SINE:
          AudioNoInterrupts();
          lfo1_1.begin(1.0, lfo4speed, WAVEFORM_SINE);
          lfo1_2.begin(1.0, lfo4speed, WAVEFORM_SINE);
          lfo1_3.begin(1.0, lfo4speed, WAVEFORM_SINE);
          lfo1_4.begin(1.0, lfo4speed, WAVEFORM_SINE);
          lfo1_5.begin(1.0, lfo4speed, WAVEFORM_SINE);
          lfo1_6.begin(1.0, lfo4speed, WAVEFORM_SINE);
          lfo1_7.begin(1.0, lfo4speed, WAVEFORM_SINE);
          lfo1_8.begin(1.0, lfo4speed, WAVEFORM_SINE);
          AudioInterrupts();
          sendmessage("LFO4 Sine:",lfo4speed);
        break;
  
        case _WAVEFORM_SAWTOOTH:
          AudioNoInterrupts();
          lfo1_1.begin(1.0, lfo4speed, WAVEFORM_SAWTOOTH);
          lfo1_2.begin(1.0, lfo4speed, WAVEFORM_SAWTOOTH);
          lfo1_3.begin(1.0, lfo4speed, WAVEFORM_SAWTOOTH);
          lfo1_4.begin(1.0, lfo4speed, WAVEFORM_SAWTOOTH);
          lfo1_5.begin(1.0, lfo4speed, WAVEFORM_SAWTOOTH);
          lfo1_6.begin(1.0, lfo4speed, WAVEFORM_SAWTOOTH);
          lfo1_7.begin(1.0, lfo4speed, WAVEFORM_SAWTOOTH);
          lfo1_8.begin(1.0, lfo4speed, WAVEFORM_SAWTOOTH);
          AudioInterrupts();
          sendmessage("LFO4 Saw:",lfo4speed);
        break;
  
        case _WAVEFORM_SAWTOOTH_REVERSE:
          AudioNoInterrupts();
          lfo1_1.begin(1.0, lfo4speed, WAVEFORM_SAWTOOTH_REVERSE);
          lfo1_2.begin(1.0, lfo4speed, WAVEFORM_SAWTOOTH_REVERSE);
          lfo1_3.begin(1.0, lfo4speed, WAVEFORM_SAWTOOTH_REVERSE);
          lfo1_4.begin(1.0, lfo4speed, WAVEFORM_SAWTOOTH_REVERSE);
          lfo1_5.begin(1.0, lfo4speed, WAVEFORM_SAWTOOTH_REVERSE);
          lfo1_6.begin(1.0, lfo4speed, WAVEFORM_SAWTOOTH_REVERSE);
          lfo1_7.begin(1.0, lfo4speed, WAVEFORM_SAWTOOTH_REVERSE);
          lfo1_8.begin(1.0, lfo4speed, WAVEFORM_SAWTOOTH_REVERSE);
          AudioInterrupts();
          sendmessage("LFO4 Saw Rev:",lfo4speed);
        break;
  
        case _WAVEFORM_PULSE:
          AudioNoInterrupts();
          lfo1_1.begin(1.0, lfo4speed, WAVEFORM_PULSE);
          lfo1_2.begin(1.0, lfo4speed, WAVEFORM_PULSE);
          lfo1_3.begin(1.0, lfo4speed, WAVEFORM_PULSE);
          lfo1_4.begin(1.0, lfo4speed, WAVEFORM_PULSE);
          lfo1_5.begin(1.0, lfo4speed, WAVEFORM_PULSE);
          lfo1_6.begin(1.0, lfo4speed, WAVEFORM_PULSE);
          lfo1_7.begin(1.0, lfo4speed, WAVEFORM_PULSE);
          lfo1_8.begin(1.0, lfo4speed, WAVEFORM_PULSE);
          AudioInterrupts();
          sendmessage("LFO4 Pulse:",lfo4speed);
        break;
  
        case _WAVEFORM_TRIANGLE_VARIABLE:
          AudioNoInterrupts();
          lfo1_1.begin(1.0, lfo4speed, WAVEFORM_TRIANGLE_VARIABLE);
          lfo1_2.begin(1.0, lfo4speed, WAVEFORM_TRIANGLE_VARIABLE);
          lfo1_3.begin(1.0, lfo4speed, WAVEFORM_TRIANGLE_VARIABLE);
          lfo1_4.begin(1.0, lfo4speed, WAVEFORM_TRIANGLE_VARIABLE);
          lfo1_5.begin(1.0, lfo4speed, WAVEFORM_TRIANGLE_VARIABLE);
          lfo1_6.begin(1.0, lfo4speed, WAVEFORM_TRIANGLE_VARIABLE);
          lfo1_7.begin(1.0, lfo4speed, WAVEFORM_TRIANGLE_VARIABLE);
          lfo1_8.begin(1.0, lfo4speed, WAVEFORM_TRIANGLE_VARIABLE);
          AudioInterrupts();
          sendmessage("LFO4 Triangle:",lfo4speed);
        break;
  
        case _WAVEFORM_SAMPLE_HOLD:
          AudioNoInterrupts();
          lfo1_1.begin(1.0, lfo4speed, WAVEFORM_SAMPLE_HOLD);
          lfo1_2.begin(1.0, lfo4speed, WAVEFORM_SAMPLE_HOLD);
          lfo1_3.begin(1.0, lfo4speed, WAVEFORM_SAMPLE_HOLD);
          lfo1_4.begin(1.0, lfo4speed, WAVEFORM_SAMPLE_HOLD);
          lfo1_5.begin(1.0, lfo4speed, WAVEFORM_SAMPLE_HOLD);
          lfo1_6.begin(1.0, lfo4speed, WAVEFORM_SAMPLE_HOLD);
          lfo1_7.begin(1.0, lfo4speed, WAVEFORM_SAMPLE_HOLD);
          lfo1_8.begin(1.0, lfo4speed, WAVEFORM_SAMPLE_HOLD);
          AudioInterrupts();
          sendmessage("LFO4 S/H:",lfo4speed);
        break;
      }        
    }
    if (midiChange(LFO4_SPEED)){
      float xSpeed = midivals[LFO4_SPEED] * inc;
      xSpeed = pow(1000, (xSpeed - 1));
      float lfo4speed = (MAX_LFO_SPEED * xSpeed);
      AudioNoInterrupts();
      lfo1_1.frequency(lfo4speed);
      lfo1_2.frequency(lfo4speed);
      lfo1_3.frequency(lfo4speed);
      lfo1_4.frequency(lfo4speed);
      lfo1_5.frequency(lfo4speed);
      lfo1_6.frequency(lfo4speed);
      lfo1_7.frequency(lfo4speed);
      lfo1_8.frequency(lfo4speed);
      AudioInterrupts();
      sendmessage("LFO4 Hz:",lfo4speed);
    }
    if (midiChange(LFO4_CRUNCH)){
      AudioNoInterrupts();
      crush1_1.bits(16 - (midivals[LFO4_CRUNCH] % 16));      
      crush1_2.bits(16 - (midivals[LFO4_CRUNCH] % 16));      
      crush1_3.bits(16 - (midivals[LFO4_CRUNCH] % 16));      
      crush1_4.bits(16 - (midivals[LFO4_CRUNCH] % 16));      
      crush1_5.bits(16 - (midivals[LFO4_CRUNCH] % 16));      
      crush1_6.bits(16 - (midivals[LFO4_CRUNCH] % 16));      
      crush1_7.bits(16 - (midivals[LFO4_CRUNCH] % 16));      
      crush1_8.bits(16 - (midivals[LFO4_CRUNCH] % 16));      
      AudioInterrupts();
      sendmessage("LFO4 Crunch:",(float)(midivals[LFO4_CRUNCH] % 16));
    }
    if (midiChange(LFO4_PHASE)){
      AudioNoInterrupts();
      lfo1_1.phase((float)midivals[LFO4_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO4_PHASE_OFFSET] * inc * MAX_LFO_OFFSET));
      lfo1_2.phase((float)midivals[LFO4_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO4_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 2));
      lfo1_3.phase((float)midivals[LFO4_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO4_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 3));
      lfo1_4.phase((float)midivals[LFO4_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO4_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 4));
      lfo1_5.phase((float)midivals[LFO4_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO4_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 5));
      lfo1_6.phase((float)midivals[LFO4_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO4_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 6));
      lfo1_7.phase((float)midivals[LFO4_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO4_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 7));
      lfo1_8.phase((float)midivals[LFO4_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO4_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 8));
      AudioInterrupts();
      sendmessage("LFO4 Phase:",(float)midivals[LFO4_PHASE] * inc * MAX_LFO_PHASE);
    }
    
//  lfo5  =============================
    if (midiChange(LFO5_SHAPE)){
      int shape = midivals[LFO5_SHAPE] % 6;

      float xSpeed = midivals[LFO5_SPEED] * inc;
      xSpeed = pow(1000, (xSpeed - 1));
      float lfo5speed = (MAX_LFO_SPEED * xSpeed);
        
      switch(shape){
      
        case _WAVEFORM_SINE:
          AudioNoInterrupts();
          lfo2_1.begin(1.0, lfo5speed, WAVEFORM_SINE);
          lfo2_2.begin(1.0, lfo5speed, WAVEFORM_SINE);
          lfo2_3.begin(1.0, lfo5speed, WAVEFORM_SINE);
          lfo2_4.begin(1.0, lfo5speed, WAVEFORM_SINE);
          lfo2_5.begin(1.0, lfo5speed, WAVEFORM_SINE);
          lfo2_6.begin(1.0, lfo5speed, WAVEFORM_SINE);
          lfo2_7.begin(1.0, lfo5speed, WAVEFORM_SINE);
          lfo2_8.begin(1.0, lfo5speed, WAVEFORM_SINE);
          AudioInterrupts();
          sendmessage("LFO5 Sine:",lfo5speed);
        break;
  
        case _WAVEFORM_SAWTOOTH:
          AudioNoInterrupts();
          lfo2_1.begin(1.0, lfo5speed, WAVEFORM_SAWTOOTH);
          lfo2_2.begin(1.0, lfo5speed, WAVEFORM_SAWTOOTH);
          lfo2_3.begin(1.0, lfo5speed, WAVEFORM_SAWTOOTH);
          lfo2_4.begin(1.0, lfo5speed, WAVEFORM_SAWTOOTH);
          lfo2_5.begin(1.0, lfo5speed, WAVEFORM_SAWTOOTH);
          lfo2_6.begin(1.0, lfo5speed, WAVEFORM_SAWTOOTH);
          lfo2_7.begin(1.0, lfo5speed, WAVEFORM_SAWTOOTH);
          lfo2_8.begin(1.0, lfo5speed, WAVEFORM_SAWTOOTH);
          AudioInterrupts();
          sendmessage("LFO5 Saw:",lfo5speed);
        break;
  
        case _WAVEFORM_SAWTOOTH_REVERSE:
          AudioNoInterrupts();
          lfo2_1.begin(1.0, lfo5speed, WAVEFORM_SAWTOOTH_REVERSE);
          lfo2_2.begin(1.0, lfo5speed, WAVEFORM_SAWTOOTH_REVERSE);
          lfo2_3.begin(1.0, lfo5speed, WAVEFORM_SAWTOOTH_REVERSE);
          lfo2_4.begin(1.0, lfo5speed, WAVEFORM_SAWTOOTH_REVERSE);
          lfo2_5.begin(1.0, lfo5speed, WAVEFORM_SAWTOOTH_REVERSE);
          lfo2_6.begin(1.0, lfo5speed, WAVEFORM_SAWTOOTH_REVERSE);
          lfo2_7.begin(1.0, lfo5speed, WAVEFORM_SAWTOOTH_REVERSE);
          lfo2_8.begin(1.0, lfo5speed, WAVEFORM_SAWTOOTH_REVERSE);
          AudioInterrupts();
          sendmessage("LFO5 Saw Rev:",lfo5speed);
        break;
  
        case _WAVEFORM_PULSE:
          AudioNoInterrupts();
          lfo2_1.begin(1.0, lfo5speed, WAVEFORM_PULSE);
          lfo2_2.begin(1.0, lfo5speed, WAVEFORM_PULSE);
          lfo2_3.begin(1.0, lfo5speed, WAVEFORM_PULSE);
          lfo2_4.begin(1.0, lfo5speed, WAVEFORM_PULSE);
          lfo2_5.begin(1.0, lfo5speed, WAVEFORM_PULSE);
          lfo2_6.begin(1.0, lfo5speed, WAVEFORM_PULSE);
          lfo2_7.begin(1.0, lfo5speed, WAVEFORM_PULSE);
          lfo2_8.begin(1.0, lfo5speed, WAVEFORM_PULSE);
          AudioInterrupts();
          sendmessage("LFO5 Pulse:",lfo5speed);
        break;
  
        case _WAVEFORM_TRIANGLE_VARIABLE:
          AudioNoInterrupts();
          lfo2_1.begin(1.0, lfo5speed, WAVEFORM_TRIANGLE_VARIABLE);
          lfo2_2.begin(1.0, lfo5speed, WAVEFORM_TRIANGLE_VARIABLE);
          lfo2_3.begin(1.0, lfo5speed, WAVEFORM_TRIANGLE_VARIABLE);
          lfo2_4.begin(1.0, lfo5speed, WAVEFORM_TRIANGLE_VARIABLE);
          lfo2_5.begin(1.0, lfo5speed, WAVEFORM_TRIANGLE_VARIABLE);
          lfo2_6.begin(1.0, lfo5speed, WAVEFORM_TRIANGLE_VARIABLE);
          lfo2_7.begin(1.0, lfo5speed, WAVEFORM_TRIANGLE_VARIABLE);
          lfo2_8.begin(1.0, lfo5speed, WAVEFORM_TRIANGLE_VARIABLE);
          AudioInterrupts();
          sendmessage("LFO5 Triangle:",lfo5speed);
        break;
  
        case _WAVEFORM_SAMPLE_HOLD:
          AudioNoInterrupts();
          lfo2_1.begin(1.0, lfo5speed, WAVEFORM_SAMPLE_HOLD);
          lfo2_2.begin(1.0, lfo5speed, WAVEFORM_SAMPLE_HOLD);
          lfo2_3.begin(1.0, lfo5speed, WAVEFORM_SAMPLE_HOLD);
          lfo2_4.begin(1.0, lfo5speed, WAVEFORM_SAMPLE_HOLD);
          lfo2_5.begin(1.0, lfo5speed, WAVEFORM_SAMPLE_HOLD);
          lfo2_6.begin(1.0, lfo5speed, WAVEFORM_SAMPLE_HOLD);
          lfo2_7.begin(1.0, lfo5speed, WAVEFORM_SAMPLE_HOLD);
          lfo2_8.begin(1.0, lfo5speed, WAVEFORM_SAMPLE_HOLD);
          AudioInterrupts();
          sendmessage("LFO5 S/H:",lfo5speed);
        break;
      }        
    }
    if (midiChange(LFO5_SPEED)){
      float xSpeed = midivals[LFO5_SPEED] * inc;
      xSpeed = pow(1000, (xSpeed - 1));
      float lfo5speed = (MAX_LFO_SPEED * xSpeed);
      AudioNoInterrupts();
      lfo2_1.frequency(lfo5speed);
      lfo2_2.frequency(lfo5speed);
      lfo2_3.frequency(lfo5speed);
      lfo2_4.frequency(lfo5speed);
      lfo2_5.frequency(lfo5speed);
      lfo2_6.frequency(lfo5speed);
      lfo2_7.frequency(lfo5speed);
      lfo2_8.frequency(lfo5speed);
      AudioInterrupts();
      sendmessage("LFO5 Hz:",lfo5speed);
    }
    if (midiChange(LFO5_CRUNCH)){
      AudioNoInterrupts();
      crush2_1.bits(16 - (midivals[LFO5_CRUNCH] % 16));      
      crush2_2.bits(16 - (midivals[LFO5_CRUNCH] % 16));      
      crush2_3.bits(16 - (midivals[LFO5_CRUNCH] % 16));      
      crush2_4.bits(16 - (midivals[LFO5_CRUNCH] % 16));      
      crush2_5.bits(16 - (midivals[LFO5_CRUNCH] % 16));      
      crush2_6.bits(16 - (midivals[LFO5_CRUNCH] % 16));      
      crush2_7.bits(16 - (midivals[LFO5_CRUNCH] % 16));      
      crush2_8.bits(16 - (midivals[LFO5_CRUNCH] % 16));      
      AudioInterrupts();
      sendmessage("LFO5 Crunch:",(float)(midivals[LFO5_CRUNCH] % 16));
    }
    if (midiChange(LFO5_PHASE)){
      AudioNoInterrupts();
      lfo2_1.phase((float)midivals[LFO5_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO5_PHASE_OFFSET] * inc * MAX_LFO_OFFSET));
      lfo2_2.phase((float)midivals[LFO5_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO5_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 2)) ;
      lfo2_3.phase((float)midivals[LFO5_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO5_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 3));
      lfo2_4.phase((float)midivals[LFO5_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO5_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 4));
      lfo2_5.phase((float)midivals[LFO5_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO5_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 5));
      lfo2_6.phase((float)midivals[LFO5_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO5_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 6));
      lfo2_7.phase((float)midivals[LFO5_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO5_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 7));
      lfo2_8.phase((float)midivals[LFO5_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO5_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 8));
      AudioInterrupts();
      sendmessage("LFO5 Phase:",(float)midivals[LFO5_PHASE] * inc * MAX_LFO_PHASE);
    }
    
//  lfo6  =============================
    if (midiChange(LFO6_SHAPE)){
      int shape = midivals[LFO6_SHAPE] % 6;

      float xSpeed = midivals[LFO6_SPEED] * inc;
      xSpeed = pow(1000, (xSpeed - 1));
      float lfo6speed = (MAX_LFO_SPEED * xSpeed);
        
      switch(shape){
      
        case _WAVEFORM_SINE:
          AudioNoInterrupts();
          lfo3_1.begin(1.0, lfo6speed, WAVEFORM_SINE);
          lfo3_2.begin(1.0, lfo6speed, WAVEFORM_SINE);
          lfo3_3.begin(1.0, lfo6speed, WAVEFORM_SINE);
          lfo3_4.begin(1.0, lfo6speed, WAVEFORM_SINE);
          lfo3_5.begin(1.0, lfo6speed, WAVEFORM_SINE);
          lfo3_6.begin(1.0, lfo6speed, WAVEFORM_SINE);
          lfo3_7.begin(1.0, lfo6speed, WAVEFORM_SINE);
          lfo3_8.begin(1.0, lfo6speed, WAVEFORM_SINE);
          AudioInterrupts();
          sendmessage("LFO6 Sine:",lfo6speed);
        break;
  
        case _WAVEFORM_SAWTOOTH:
          AudioNoInterrupts();
          lfo3_1.begin(1.0, lfo6speed, WAVEFORM_SAWTOOTH);
          lfo3_2.begin(1.0, lfo6speed, WAVEFORM_SAWTOOTH);
          lfo3_3.begin(1.0, lfo6speed, WAVEFORM_SAWTOOTH);
          lfo3_4.begin(1.0, lfo6speed, WAVEFORM_SAWTOOTH);
          lfo3_5.begin(1.0, lfo6speed, WAVEFORM_SAWTOOTH);
          lfo3_6.begin(1.0, lfo6speed, WAVEFORM_SAWTOOTH);
          lfo3_7.begin(1.0, lfo6speed, WAVEFORM_SAWTOOTH);
          lfo3_8.begin(1.0, lfo6speed, WAVEFORM_SAWTOOTH);
          AudioInterrupts();
          sendmessage("LFO6 Saw:",lfo6speed);
        break;
  
        case _WAVEFORM_SAWTOOTH_REVERSE:
          AudioNoInterrupts();
          lfo3_1.begin(1.0, lfo6speed, WAVEFORM_SAWTOOTH_REVERSE);
          lfo3_2.begin(1.0, lfo6speed, WAVEFORM_SAWTOOTH_REVERSE);
          lfo3_3.begin(1.0, lfo6speed, WAVEFORM_SAWTOOTH_REVERSE);
          lfo3_4.begin(1.0, lfo6speed, WAVEFORM_SAWTOOTH_REVERSE);
          lfo3_5.begin(1.0, lfo6speed, WAVEFORM_SAWTOOTH_REVERSE);
          lfo3_6.begin(1.0, lfo6speed, WAVEFORM_SAWTOOTH_REVERSE);
          lfo3_7.begin(1.0, lfo6speed, WAVEFORM_SAWTOOTH_REVERSE);
          lfo3_8.begin(1.0, lfo6speed, WAVEFORM_SAWTOOTH_REVERSE);
          AudioInterrupts();
          sendmessage("LFO6 Saw Rev:",lfo6speed);
        break;
  
        case _WAVEFORM_PULSE:
          AudioNoInterrupts();
          lfo3_1.begin(1.0, lfo6speed, WAVEFORM_PULSE);
          lfo3_2.begin(1.0, lfo6speed, WAVEFORM_PULSE);
          lfo3_3.begin(1.0, lfo6speed, WAVEFORM_PULSE);
          lfo3_4.begin(1.0, lfo6speed, WAVEFORM_PULSE);
          lfo3_5.begin(1.0, lfo6speed, WAVEFORM_PULSE);
          lfo3_6.begin(1.0, lfo6speed, WAVEFORM_PULSE);
          lfo3_7.begin(1.0, lfo6speed, WAVEFORM_PULSE);
          lfo3_8.begin(1.0, lfo6speed, WAVEFORM_PULSE);
          AudioInterrupts();
          sendmessage("LFO6 Pulse:",lfo6speed);
        break;
  
        case _WAVEFORM_TRIANGLE_VARIABLE:
          AudioNoInterrupts();
          lfo3_1.begin(1.0, lfo6speed, WAVEFORM_TRIANGLE_VARIABLE);
          lfo3_2.begin(1.0, lfo6speed, WAVEFORM_TRIANGLE_VARIABLE);
          lfo3_3.begin(1.0, lfo6speed, WAVEFORM_TRIANGLE_VARIABLE);
          lfo3_4.begin(1.0, lfo6speed, WAVEFORM_TRIANGLE_VARIABLE);
          lfo3_5.begin(1.0, lfo6speed, WAVEFORM_TRIANGLE_VARIABLE);
          lfo3_6.begin(1.0, lfo6speed, WAVEFORM_TRIANGLE_VARIABLE);
          lfo3_7.begin(1.0, lfo6speed, WAVEFORM_TRIANGLE_VARIABLE);
          lfo3_8.begin(1.0, lfo6speed, WAVEFORM_TRIANGLE_VARIABLE);
          AudioInterrupts();
          sendmessage("LFO6 Triangle:",lfo6speed);
        break;
  
        case _WAVEFORM_SAMPLE_HOLD:
          AudioNoInterrupts();
          lfo3_1.begin(1.0, lfo6speed, WAVEFORM_SAMPLE_HOLD);
          lfo3_2.begin(1.0, lfo6speed, WAVEFORM_SAMPLE_HOLD);
          lfo3_3.begin(1.0, lfo6speed, WAVEFORM_SAMPLE_HOLD);
          lfo3_4.begin(1.0, lfo6speed, WAVEFORM_SAMPLE_HOLD);
          lfo3_5.begin(1.0, lfo6speed, WAVEFORM_SAMPLE_HOLD);
          lfo3_6.begin(1.0, lfo6speed, WAVEFORM_SAMPLE_HOLD);
          lfo3_7.begin(1.0, lfo6speed, WAVEFORM_SAMPLE_HOLD);
          lfo3_8.begin(1.0, lfo6speed, WAVEFORM_SAMPLE_HOLD);
          AudioInterrupts();
          sendmessage("LFO6 S/H:",lfo6speed);
        break;
      }        
    }
    if (midiChange(LFO6_SPEED)){
      float xSpeed = midivals[LFO6_SPEED] * inc;
      xSpeed = pow(1000, (xSpeed - 1));
      float lfo6speed = (MAX_LFO_SPEED * xSpeed);
      AudioNoInterrupts();
      lfo3_1.frequency(lfo6speed);
      lfo3_2.frequency(lfo6speed);
      lfo3_3.frequency(lfo6speed);
      lfo3_4.frequency(lfo6speed);
      lfo3_5.frequency(lfo6speed);
      lfo3_6.frequency(lfo6speed);
      lfo3_7.frequency(lfo6speed);
      lfo3_8.frequency(lfo6speed);
      AudioInterrupts();
      sendmessage("LFO6 Hz:",lfo6speed);
    }
    if (midiChange(LFO6_CRUNCH)){
      AudioNoInterrupts();
      crush3_1.bits(16 - (midivals[LFO6_CRUNCH] % 16));      
      crush3_2.bits(16 - (midivals[LFO6_CRUNCH] % 16));      
      crush3_3.bits(16 - (midivals[LFO6_CRUNCH] % 16));      
      crush3_4.bits(16 - (midivals[LFO6_CRUNCH] % 16));      
      crush3_5.bits(16 - (midivals[LFO6_CRUNCH] % 16));      
      crush3_6.bits(16 - (midivals[LFO6_CRUNCH] % 16));      
      crush3_7.bits(16 - (midivals[LFO6_CRUNCH] % 16));      
      crush3_8.bits(16 - (midivals[LFO6_CRUNCH] % 16));      
      AudioInterrupts();
      sendmessage("LFO6 Crunch:",(float)(midivals[LFO6_CRUNCH] % 16));
    }
    if (midiChange(LFO6_PHASE)){
      AudioNoInterrupts();
      lfo3_1.phase((float)midivals[LFO6_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO6_PHASE_OFFSET] * inc * MAX_LFO_OFFSET));
      lfo3_2.phase((float)midivals[LFO6_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO6_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 2));
      lfo3_3.phase((float)midivals[LFO6_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO6_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 3));
      lfo3_4.phase((float)midivals[LFO6_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO6_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 4));
      lfo3_5.phase((float)midivals[LFO6_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO6_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 5));
      lfo3_6.phase((float)midivals[LFO6_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO6_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 6));
      lfo3_7.phase((float)midivals[LFO6_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO6_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 7));
      lfo3_8.phase((float)midivals[LFO6_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO6_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 8));
      AudioInterrupts();
      sendmessage("LFO6 Phase:",(float)midivals[LFO6_PHASE] * inc * MAX_LFO_PHASE);
    }


    if (midiChange(LFO4_PHASE_OFFSET)){
      AudioNoInterrupts();
      lfo3_1.phase((float)midivals[LFO4_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO4_PHASE_OFFSET] * inc * MAX_LFO_OFFSET));
      lfo3_2.phase((float)midivals[LFO4_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO4_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 2));
      lfo3_3.phase((float)midivals[LFO4_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO4_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 3));
      lfo3_4.phase((float)midivals[LFO4_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO4_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 4));
      lfo3_5.phase((float)midivals[LFO4_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO4_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 5));
      lfo3_6.phase((float)midivals[LFO4_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO4_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 6));
      lfo3_7.phase((float)midivals[LFO4_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO4_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 7));
      lfo3_8.phase((float)midivals[LFO4_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO4_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 8));
      AudioInterrupts();
      sendmessage("LFO4 Offset:",(float)midivals[LFO4_PHASE_OFFSET] * inc * MAX_LFO_OFFSET);
    }
    if (midiChange(LFO5_PHASE_OFFSET)){
      AudioNoInterrupts();
      lfo3_1.phase((float)midivals[LFO5_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO5_PHASE_OFFSET] * inc * MAX_LFO_OFFSET));
      lfo3_2.phase((float)midivals[LFO5_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO5_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 2));
      lfo3_3.phase((float)midivals[LFO5_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO5_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 3));
      lfo3_4.phase((float)midivals[LFO5_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO5_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 4));
      lfo3_5.phase((float)midivals[LFO5_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO5_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 5));
      lfo3_6.phase((float)midivals[LFO5_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO5_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 6));
      lfo3_7.phase((float)midivals[LFO5_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO5_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 7));
      lfo3_8.phase((float)midivals[LFO5_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO5_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 8));
      AudioInterrupts();
      sendmessage("LFO5 Offset:",(float)midivals[LFO5_PHASE_OFFSET] * inc * MAX_LFO_OFFSET);
    }
    if (midiChange(LFO6_PHASE_OFFSET)){
      AudioNoInterrupts();
      lfo3_1.phase((float)midivals[LFO6_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO6_PHASE_OFFSET] * inc * MAX_LFO_OFFSET));
      lfo3_2.phase((float)midivals[LFO6_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO6_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 2));
      lfo3_3.phase((float)midivals[LFO6_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO6_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 3));
      lfo3_4.phase((float)midivals[LFO6_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO6_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 4));
      lfo3_5.phase((float)midivals[LFO6_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO6_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 5));
      lfo3_6.phase((float)midivals[LFO6_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO6_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 6));
      lfo3_7.phase((float)midivals[LFO6_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO6_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 7));
      lfo3_8.phase((float)midivals[LFO6_PHASE] * inc * MAX_LFO_PHASE + (midivals[LFO6_PHASE_OFFSET] * inc * MAX_LFO_OFFSET * 8));
      AudioInterrupts();
      sendmessage("LFO6 Offset:",(float)midivals[LFO6_PHASE_OFFSET] * inc * MAX_LFO_OFFSET);
    }
    
 
