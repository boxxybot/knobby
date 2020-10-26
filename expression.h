//expressive controls

    if (midiChange(CRUSHER1_BITS)){
      //bitcrusher1.bits((midivals[CRUSHER1_BITS] % 16) + 1);
      sendmessage("Quantize bits:",(float)(midivals[CRUSHER1_BITS] % 16) + 1);
    }
    if (midiChange(CRUSHER1_SAMPLERATE)){
      //bitcrusher1.sampleRate((float)midivals[CRUSHER1_SAMPLERATE] * inc * 44444);
      sendmessage("Quantize SR:",(float)midivals[CRUSHER1_SAMPLERATE] * inc * 44444);
    }
    if (midiChange(FREEVERB1_SIZE)){
      freeverbs1.roomsize((float)midivals[FREEVERB1_SIZE] * inc);
      sendmessage("Freeverb size:",(float)midivals[FREEVERB1_SIZE] * inc);
    }
    if (midiChange(FREEVERB1_DAMPING)){
      freeverbs1.damping((float)midivals[FREEVERB1_DAMPING] * inc);
      sendmessage("Freeverb damp:",(float)midivals[FREEVERB1_DAMPING] * inc);
    }

// delay time mixer
    if (midiChange(DELAY1_TIME)){
      if (_delayfade1 % 2 == 0){
        AudioNoInterrupts();
        delay1.delay(1,(float)midivals[DELAY1_TIME] * 6);
        dlyfade0.fadeOut(2);
        dlyfade1.fadeIn(2);
        AudioInterrupts();
      } else {
        AudioNoInterrupts();
        delay1.delay(0,(float)midivals[DELAY1_TIME] * 6);
        dlyfade1.fadeOut(2);
        dlyfade0.fadeIn(2);
        AudioInterrupts();
      }
      _delayfade1 = _delayfade1 + 1;
      sendmessage("Delay1 mS:",(float)midivals[DELAY1_TIME] * 6);
    }
    if (midiChange(DELAY2_TIME)){
      if (_delayfade2 % 2 == 0){
        AudioNoInterrupts();
        delay1.delay(3,(float)midivals[DELAY2_TIME] * 6);
        dlyfade2.fadeOut(2);
        dlyfade3.fadeIn(2);
        AudioInterrupts();
      } else {
        AudioNoInterrupts();
        delay1.delay(2,(float)midivals[DELAY2_TIME] * 6);
        dlyfade3.fadeOut(2);
        dlyfade2.fadeIn(2);
        AudioInterrupts();
      }
      _delayfade2 = _delayfade2 + 1;
      sendmessage("Delay2 mS:",(float)midivals[DELAY2_TIME] * 6);
    }
    if (midiChange(DELAY3_TIME)){
      if (_delayfade3 % 2 == 0){
        AudioNoInterrupts();
        delay1.delay(5,(float)midivals[DELAY3_TIME] * 6);
        dlyfade4.fadeOut(2);
        dlyfade5.fadeIn(2);
        AudioInterrupts();
      } else {
        AudioNoInterrupts();
        delay1.delay(4,(float)midivals[DELAY3_TIME] * 6);
        dlyfade5.fadeOut(2);
        dlyfade4.fadeIn(2);
        AudioInterrupts();
      }
      _delayfade3 = _delayfade3 + 1;
      sendmessage("Delay3 mS:",(float)midivals[DELAY3_TIME] * 6);
    }
    if (midiChange(DELAY4_TIME)){
      if (_delayfade4 % 2 == 0){
        AudioNoInterrupts();
        delay1.delay(7,(float)midivals[DELAY4_TIME] * 6);
        dlyfade6.fadeOut(2);
        dlyfade7.fadeIn(2);
        AudioInterrupts();
      } else {
        AudioNoInterrupts();
        delay1.delay(6,(float)midivals[DELAY4_TIME] * 6);
        dlyfade7.fadeOut(2);
        dlyfade6.fadeIn(2);
        AudioInterrupts();
      }
      _delayfade4 = _delayfade4 + 1;
      sendmessage("Delay4 mS:",(float)midivals[DELAY4_TIME] * 6);
    }

//delay output mixer
  for(int y = 0; y <=3; y++) { 
  
    if (lastval[y+DELAY_OUT_MIX] != midivals[y+DELAY_OUT_MIX]){
      switch(y){
      
        case 0:
          mixer23.gain(0, (float)midivals[y+DELAY_OUT_MIX] * inc);
          mixer23.gain(1, (float)midivals[y+DELAY_OUT_MIX] * inc);
          sendmessage("Delay 1L:",(float)midivals[y+DELAY_OUT_MIX] * inc);
        break;
  
        case 1:
          mixer23.gain(2, (float)midivals[y+DELAY_OUT_MIX] * inc);
          mixer23.gain(3, (float)midivals[y+DELAY_OUT_MIX] * inc);
          sendmessage("Delay 2L:",(float)midivals[y+DELAY_OUT_MIX] * inc);
        break;
  
        case 2:
          mixer24.gain(0, (float)midivals[y+DELAY_OUT_MIX] * inc);
          mixer24.gain(1, (float)midivals[y+DELAY_OUT_MIX] * inc);
          sendmessage("Delay 1R:",(float)midivals[y+DELAY_OUT_MIX] * inc);
        break;
  
        case 3:
          mixer24.gain(2, (float)midivals[y+DELAY_OUT_MIX] * inc);
          mixer24.gain(3, (float)midivals[y+DELAY_OUT_MIX] * inc);
          sendmessage("Delay 2R:",(float)midivals[y+DELAY_OUT_MIX] * inc);
        break;
      }       
      lastval[y+DELAY_OUT_MIX] = midivals[y+DELAY_OUT_MIX];
    }
  }

//delay send mixer
  for(int y = 0; y <=3; y++) { 
  
    if (lastval[y+DELAY_SEND_MIX] != midivals[y+DELAY_SEND_MIX]){
      mixer12.gain(y, (float)midivals[y+DELAY_SEND_MIX] * inc);
      switch(y){
      
        case 0:
          sendmessage("Voice1:",(float)midivals[y+DELAY_SEND_MIX] * inc);
        break;
  
        case 1:
          sendmessage("Voice2:",(float)midivals[y+DELAY_SEND_MIX] * inc);
        break;
  
        case 2:
          sendmessage("Voice3:",(float)midivals[y+DELAY_SEND_MIX] * inc);
        break;
  
        case 3:
          sendmessage("Ext In:",(float)midivals[y+DELAY_SEND_MIX] * inc);
        break;
      }       
      lastval[y+DELAY_SEND_MIX] = midivals[y+DELAY_SEND_MIX];
    }
  }

//reverb send mixer
  for(int y = 0; y <=3; y++) { 
  
    if (lastval[y+REVERB_SEND_MIX] != midivals[y+REVERB_SEND_MIX]){
      mixer11.gain(y, (float)midivals[y+REVERB_SEND_MIX] * inc);
      switch(y){
      
        case 0:
          sendmessage("Voice1:",(float)midivals[y+REVERB_SEND_MIX] * inc);
        break;
  
        case 1:
          sendmessage("Voice2:",(float)midivals[y+REVERB_SEND_MIX] * inc);
        break;
  
        case 2:
          sendmessage("Voice3:",(float)midivals[y+REVERB_SEND_MIX] * inc);
        break;
  
        case 3:
          sendmessage("Delay:",(float)midivals[y+REVERB_SEND_MIX] * inc);
        break;
      }       
      lastval[y+REVERB_SEND_MIX] = midivals[y+REVERB_SEND_MIX];
    }
  }

//sequencer 2 expression mixer
  for(int y = 0; y <=3; y++) { 
  
    if (lastval[y+SEQ2_EXPR_MIX] != midivals[y+SEQ2_EXPR_MIX]){
      switch(y){
      
        case 0:
          sendmessage("Velocity:",((float)midivals[y+SEQ2_EXPR_MIX] - 64) * mixinc);
        break;
  
        case 1:
          sendmessage("LFO1:",((float)midivals[y+SEQ2_EXPR_MIX] - 64) * mixinc);
        break;
  
        case 2:
          sendmessage("LFO2:",((float)midivals[y+SEQ2_EXPR_MIX] - 64) * mixinc);
        break;
  
        case 3:
          sendmessage("LFO3:",((float)midivals[y+SEQ2_EXPR_MIX] - 64) * mixinc);
        break;
      }       
      lastval[y+SEQ2_EXPR_MIX] = midivals[y+SEQ2_EXPR_MIX];
    }
  }
//sequencer 3 expression mixer
  for(int y = 0; y <=3; y++) { 
  
    if (lastval[y+SEQ3_EXPR_MIX] != midivals[y+SEQ3_EXPR_MIX]){
      switch(y){
      
        case 0:
          sendmessage("Velocity:",((float)midivals[y+SEQ3_EXPR_MIX] - 64) * mixinc);
        break;
  
        case 1:
          sendmessage("LFO1:",((float)midivals[y+SEQ3_EXPR_MIX] - 64) * mixinc);
        break;
  
        case 2:
          sendmessage("LFO2:",((float)midivals[y+SEQ3_EXPR_MIX] - 64) * mixinc);
        break;
  
        case 3:
          sendmessage("LFO3:",((float)midivals[y+SEQ3_EXPR_MIX] - 64) * mixinc);
        break;
      }       
      lastval[y+SEQ3_EXPR_MIX] = midivals[y+SEQ3_EXPR_MIX];
    }
  }
