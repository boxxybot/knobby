
    
// filter1
    if (midiChange(FILTER1_FREQUENCY)){
      filter1.frequency(noteFreqs[midivals[FILTER1_FREQUENCY]]);
      sendmessage("VCF1 Freq:",noteFreqs[midivals[FILTER1_FREQUENCY]]);
    }
    if (midiChange(FILTER1_RESONANCE)){
      filter1.resonance((float)midivals[FILTER1_RESONANCE] * inc * MAX_FILTER_Q + MIN_FILTER_Q);
      sendmessage("VCF1 Q:",(float)midivals[FILTER1_RESONANCE] * inc * MAX_FILTER_Q + MIN_FILTER_Q);
    }
    if (midiChange(FILTER1_RANGE)){
      filter1.octaveControl((float)midivals[FILTER1_RANGE] * inc * MAX_FILTER_TRACKING);
      sendmessage("VCF1 Range:",(float)midivals[FILTER1_RANGE] * inc * MAX_FILTER_TRACKING);
    }
    if (midiChange(FILTER1_CRUNCH)){
      bitcrusher1.bits(16 - (midivals[FILTER1_CRUNCH] % 16));      
      sendmessage("VCF1 Crunch:",(float)(midivals[FILTER1_CRUNCH] % 16));
    }

// filter2
    if (midiChange(FILTER2_FREQUENCY)){
      filter2.frequency(noteFreqs[midivals[FILTER2_FREQUENCY]]);
      sendmessage("VCF2 Freq:",noteFreqs[midivals[FILTER2_FREQUENCY]]);
    }
    if (midiChange(FILTER2_RESONANCE)){
      filter2.resonance((float)midivals[FILTER2_RESONANCE] * inc * MAX_FILTER_Q + MIN_FILTER_Q);
      sendmessage("VCF2 Q:",(float)midivals[FILTER2_RESONANCE] * inc * MAX_FILTER_Q + MIN_FILTER_Q);
    }
    if (midiChange(FILTER2_TYPE)){

      if (midivals[FILTER2_TYPE] < 64){
        mixer20.gain(0,((63 - (float)midivals[FILTER2_TYPE])) * inc * 2);
        mixer20.gain(1,(float)midivals[FILTER2_TYPE] * inc * 2);
        mixer20.gain(2,0);
        //Serial.print(((63 - (float)midivals[FILTER2_TYPE])) * inc * 2);
        //Serial.print((float)midivals[FILTER2_TYPE] * inc * 2);

      } else {
        mixer20.gain(0,0);
        mixer20.gain(1,(float)((63 + (64 - midivals[FILTER2_TYPE])) * inc * 2));
        mixer20.gain(2,(float)(midivals[FILTER2_TYPE] - 64) * inc * 2);
        //Serial.print((float)((63 + (64 - midivals[FILTER2_TYPE])) * inc * 2));
        //Serial.print((float)(midivals[FILTER2_TYPE] - 64) * inc * 2);
      }
      sendmessage("VCF2 Type:",(float)midivals[FILTER2_TYPE] * inc);
    }
    if (midiChange(FILTER2_CRUNCH)){
      bitcrusher2.bits(16 - (midivals[FILTER2_CRUNCH] % 16));      
      sendmessage("VCF2 Crunch:",(float)(midivals[FILTER2_CRUNCH] % 16));
    }

// filter3
    if (midiChange(FILTER3_FREQUENCY)){
      filter101.frequency(noteFreqs[midivals[FILTER3_FREQUENCY]]);
      filter102.frequency(noteFreqs[midivals[FILTER3_FREQUENCY]]);
      filter103.frequency(noteFreqs[midivals[FILTER3_FREQUENCY]]);
      filter104.frequency(noteFreqs[midivals[FILTER3_FREQUENCY]]);
      filter105.frequency(noteFreqs[midivals[FILTER3_FREQUENCY]]);
      filter106.frequency(noteFreqs[midivals[FILTER3_FREQUENCY]]);
      filter107.frequency(noteFreqs[midivals[FILTER3_FREQUENCY]]);
      filter108.frequency(noteFreqs[midivals[FILTER3_FREQUENCY]]);
      sendmessage("VCF3 Freq:",noteFreqs[midivals[FILTER3_FREQUENCY]]);
    }
    if (midiChange(FILTER3_RESONANCE)){
      float _resonance = (float)midivals[FILTER3_RESONANCE] * inc * MAX_FILTER_Q + MIN_FILTER_Q;
      filter101.resonance(_resonance);
      filter102.resonance(_resonance);
      filter103.resonance(_resonance);
      filter104.resonance(_resonance);
      filter105.resonance(_resonance);
      filter106.resonance(_resonance);
      filter107.resonance(_resonance);
      filter108.resonance(_resonance);
      sendmessage("VCF3 Q:",_resonance);
    }
    if (midiChange(FILTER3_TYPE)){

      if (midivals[FILTER3_TYPE] < 64){
        float _gain0 = ((63 - (float)midivals[FILTER3_TYPE])) * inc * 2;
        float _gain1 = (float)midivals[FILTER3_TYPE] * inc * 2;
        mixer102.gain(0,_gain0);
        mixer102.gain(1,_gain1);
        mixer102.gain(2,0);
        mixer106.gain(0,_gain0);
        mixer106.gain(1,_gain1);
        mixer106.gain(2,0);
        mixer110.gain(0,_gain0);
        mixer110.gain(1,_gain1);
        mixer110.gain(2,0);
        mixer114.gain(0,_gain0);
        mixer114.gain(1,_gain1);
        mixer114.gain(2,0);
        mixer119.gain(0,_gain0);
        mixer119.gain(1,_gain1);
        mixer119.gain(2,0);
        mixer126.gain(0,_gain0);
        mixer126.gain(1,_gain1);
        mixer126.gain(2,0);
        mixer130.gain(0,_gain0);
        mixer130.gain(1,_gain1);
        mixer130.gain(2,0);
        mixer134.gain(0,_gain0);
        mixer134.gain(1,_gain1);
        mixer134.gain(2,0);

      } else {
        float _gain1 = ((63 + (64 - midivals[FILTER3_TYPE])) * inc * 2);
        float _gain2 = (midivals[FILTER3_TYPE] - 64) * inc * 2;
        mixer102.gain(0,0);
        mixer102.gain(1,_gain1);
        mixer102.gain(2,_gain2);
        mixer106.gain(0,0);
        mixer106.gain(1,_gain1);
        mixer106.gain(2,_gain2);
        mixer110.gain(0,0);
        mixer110.gain(1,_gain1);
        mixer110.gain(2,_gain2);
        mixer114.gain(0,0);
        mixer114.gain(1,_gain1);
        mixer114.gain(2,_gain2);
        mixer119.gain(0,0);
        mixer119.gain(1,_gain1);
        mixer119.gain(2,_gain2);
        mixer126.gain(0,0);
        mixer126.gain(1,_gain1);
        mixer126.gain(2,_gain2);
        mixer130.gain(0,0);
        mixer130.gain(1,_gain1);
        mixer130.gain(2,_gain2);
        mixer134.gain(0,0);
        mixer134.gain(1,_gain1);
        mixer134.gain(2,_gain2);
      }
      sendmessage("VCF3 Type:",(float)midivals[FILTER3_TYPE] * inc);
    }

    if (midiChange(FILTER3_TRACKING)){
      float _tracking = (float)midivals[FILTER3_TRACKING] * inc * MAX_FILTER_TRACKING;
      filter101.octaveControl(_tracking);
      filter102.octaveControl(_tracking);
      filter103.octaveControl(_tracking);
      filter104.octaveControl(_tracking);
      filter105.octaveControl(_tracking);
      filter106.octaveControl(_tracking);
      filter107.octaveControl(_tracking);
      filter108.octaveControl(_tracking);
      sendmessage("VCF3 Range:",_tracking);
    }
