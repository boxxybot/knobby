
/*
                                "Voice3 Inten Mod",
*/
 
 //mixer scans
  for(int y = 0; y <=3; y++) { 
  
    if (lastval[y+MIXER_MAIN_A] != midivals[y+MIXER_MAIN_A]){
      mixer1.gain(y, (float)midivals[y+MIXER_MAIN_A] * inc);
      mixer2.gain(y, (float)midivals[y+MIXER_MAIN_A] * inc);
      lastval[y+MIXER_MAIN_A] = midivals[y+MIXER_MAIN_A];
      sendmessage(mixmsgs[y+MIXER_MAIN_A],(float)midivals[y+MIXER_MAIN_A] * inc);
    }
  }

  for(int y = 0; y <=3; y++) { 
  
    if (lastval[y+MIXER_MAIN_B] != midivals[y+MIXER_MAIN_B]){
      mixer13.gain(y, (float)midivals[y+MIXER_MAIN_B] * inc);
      mixer14.gain(y, (float)midivals[y+MIXER_MAIN_B] * inc);
      lastval[y+MIXER_MAIN_B] = midivals[y+MIXER_MAIN_B];
      sendmessage(mixmsgs[y+MIXER_MAIN_B],(float)midivals[y+MIXER_MAIN_B] * inc);
    }
  }

  for(int y = 0; y <=3; y++) { 
  
    if (lastval[y+MIXER_VCF1_SRC] != midivals[y+MIXER_VCF1_SRC]){
      mixer3.gain(y, (float)midivals[y+MIXER_VCF1_SRC] * inc);
      lastval[y+MIXER_VCF1_SRC] = midivals[y+MIXER_VCF1_SRC];
      sendmessage(mixmsgs[y+MIXER_VCF1_SRC],(float)midivals[y+MIXER_VCF1_SRC] * inc);
    }
  }

  for(int y = 0; y <=3; y++) { 
  
    if (lastval[y+MIXER_VCF1_MOD] != midivals[y+MIXER_VCF1_MOD]){
      mixer4.gain(y, ((float)midivals[y+MIXER_VCF1_MOD] - 64) * mixinc);
      lastval[y+MIXER_VCF1_MOD] = midivals[y+MIXER_VCF1_MOD];
      sendmessage(mixmsgs[y+MIXER_VCF1_MOD],((float)midivals[y+MIXER_VCF1_MOD] - 64) * mixinc);
    }
  }

  for(int y = 0; y <=3; y++) { 
  
    if (lastval[y+MIXER_VCA1_MOD] != midivals[y+MIXER_VCA1_MOD]){
      mixer5.gain(y, ((float)midivals[y+MIXER_VCA1_MOD] - 64) * mixinc);
      lastval[y+MIXER_VCA1_MOD] = midivals[y+MIXER_VCA1_MOD];
      sendmessage(mixmsgs[y+MIXER_VCA1_MOD],((float)midivals[y+MIXER_VCA1_MOD] - 64) * mixinc);
    }
  }

  for(int y = 0; y <=3; y++) { 
  
    if (lastval[y+MIXER_VCO1_MOD] != midivals[y+MIXER_VCO1_MOD]){
      mixer6.gain(y, ((float)midivals[y+MIXER_VCO1_MOD] - 64) * mixinc);
      lastval[y+MIXER_VCO1_MOD] = midivals[y+MIXER_VCO1_MOD];
      sendmessage(mixmsgs[y+MIXER_VCO1_MOD],((float)midivals[y+MIXER_VCO1_MOD] - 64) * mixinc);
    }
  }

  for(int y = 0; y <=3; y++) { 
  
    if (lastval[y+MIXER_VCO2_MOD] != midivals[y+MIXER_VCO2_MOD]){
      mixer7.gain(y, ((float)midivals[y+MIXER_VCO2_MOD] - 64) * mixinc);
      lastval[y+MIXER_VCO2_MOD] = midivals[y+MIXER_VCO2_MOD];
      sendmessage(mixmsgs[y+MIXER_VCO2_MOD],((float)midivals[y+MIXER_VCO2_MOD] - 64) * mixinc);
    }
  }

  for(int y = 0; y <=3; y++) { 
  
    if (lastval[y+MIXER_VCF2_SRC] != midivals[y+MIXER_VCF2_SRC]){
      mixer15.gain(y, (float)midivals[y+MIXER_VCF2_SRC] * inc);
      lastval[y+MIXER_VCF2_SRC] = midivals[y+MIXER_VCF2_SRC];
      sendmessage(mixmsgs[y+MIXER_VCF2_SRC],(float)midivals[y+MIXER_VCF2_SRC] * inc);
    }
  }

  for(int y = 0; y <=3; y++) { 
  
    if (lastval[y+MIXER_VCF2_MOD] != midivals[y+MIXER_VCF2_MOD]){
      mixer21.gain(y, ((float)midivals[y+MIXER_VCF2_MOD] - 64) * mixinc);
      lastval[y+MIXER_VCF2_MOD] = midivals[y+MIXER_VCF2_MOD];
      sendmessage(mixmsgs[y+MIXER_VCF2_MOD],((float)midivals[y+MIXER_VCF2_MOD] - 64) * mixinc);
    }
  }

  for(int y = 0; y <=3; y++) { 
  
    if (lastval[y+MIXER_VCA2_MOD] != midivals[y+MIXER_VCA2_MOD]){
      mixer22.gain(y, ((float)midivals[y+MIXER_VCA2_MOD] - 64) * mixinc);
      lastval[y+MIXER_VCA2_MOD] = midivals[y+MIXER_VCA2_MOD];
      sendmessage(mixmsgs[y+MIXER_VCA2_MOD],((float)midivals[y+MIXER_VCA2_MOD] - 64) * mixinc);
    }
  }

  for(int y = 0; y <=3; y++) { 
  
    if (lastval[y+MIXER_VCO3_MOD] != midivals[y+MIXER_VCO3_MOD]){
      mixer16.gain(y, ((float)midivals[y+MIXER_VCO3_MOD] - 64) * mixinc);
      lastval[y+MIXER_VCO3_MOD] = midivals[y+MIXER_VCO3_MOD];
      sendmessage(mixmsgs[y+MIXER_VCO3_MOD],((float)midivals[y+MIXER_VCO3_MOD] - 64) * mixinc);
    }
  }

  for(int y = 0; y <=3; y++) { 
  
    if (lastval[y+MIXER_VCO4_MOD] != midivals[y+MIXER_VCO4_MOD]){
      mixer17.gain(y, ((float)midivals[y+MIXER_VCO4_MOD] - 64) * mixinc);
      lastval[y+MIXER_VCO4_MOD] = midivals[y+MIXER_VCO4_MOD];
      sendmessage(mixmsgs[y+MIXER_VCO4_MOD],((float)midivals[y+MIXER_VCO4_MOD] - 64) * mixinc);
    }
  }

  for(int y = 0; y <=3; y++) { 
  
    if (lastval[y+MIXER_VCO5_MOD] != midivals[y+MIXER_VCO5_MOD]){
      mixer18.gain(y, ((float)midivals[y+MIXER_VCO5_MOD] - 64) * mixinc);
      lastval[y+MIXER_VCO5_MOD] = midivals[y+MIXER_VCO5_MOD];
      sendmessage(mixmsgs[y+MIXER_VCO5_MOD],((float)midivals[y+MIXER_VCO5_MOD] - 64) * mixinc);
    }
  }

  for(int y = 0; y <=3; y++) { 
  
    if (lastval[y+MIXER_VCF3_SRC] != midivals[y+MIXER_VCF3_SRC]){
      float _gain = (float)midivals[y+MIXER_VCF3_SRC] * inc;
      AudioNoInterrupts();
      mixer101.gain(y, _gain);
      mixer108.gain(y, _gain);
      mixer112.gain(y, _gain);
      mixer116.gain(y, _gain);
      mixer117.gain(y, _gain);
      mixer124.gain(y, _gain);
      mixer128.gain(y, _gain);
      mixer132.gain(y, _gain);
      AudioInterrupts();
      lastval[y+MIXER_VCF3_SRC] = midivals[y+MIXER_VCF3_SRC];
      sendmessage(mixmsgs[y+MIXER_VCF3_SRC],_gain);
    }
  }

  for(int y = 0; y <=3; y++) { 
  
    if (lastval[y+MIXER_VCO6_MOD] != midivals[y+MIXER_VCO6_MOD]){
      float _gain = ((float)midivals[y+MIXER_VCO6_MOD] - 64) * mixinc;
      AudioNoInterrupts();
      mixer120_1.gain(y, _gain);
      mixer120_2.gain(y, _gain);
      mixer120_3.gain(y, _gain);
      mixer120_4.gain(y, _gain);
      mixer120_5.gain(y, _gain);
      mixer120_6.gain(y, _gain);
      mixer120_7.gain(y, _gain);
      mixer120_8.gain(y, _gain);
      AudioInterrupts();
      lastval[y+MIXER_VCO6_MOD] = midivals[y+MIXER_VCO6_MOD];
      sendmessage(mixmsgs[y+MIXER_VCO6_MOD],_gain);
    }
  }

  for(int y = 0; y <=3; y++) { 
  
    if (lastval[y+MIXER_VCO7_MOD] != midivals[y+MIXER_VCO7_MOD]){
      float _gain = ((float)midivals[y+MIXER_VCO7_MOD] - 64) * mixinc;
      AudioNoInterrupts();
      mixer121_1.gain(y, _gain);
      mixer121_2.gain(y, _gain);
      mixer121_3.gain(y, _gain);
      mixer121_4.gain(y, _gain);
      mixer121_5.gain(y, _gain);
      mixer121_6.gain(y, _gain);
      mixer121_7.gain(y, _gain);
      mixer121_8.gain(y, _gain);
      AudioInterrupts();
      lastval[y+MIXER_VCO7_MOD] = midivals[y+MIXER_VCO7_MOD];
      sendmessage(mixmsgs[y+MIXER_VCO7_MOD],_gain);
    }
  }

  for(int y = 0; y <=3; y++) { 
  
    if (lastval[y+MIXER_VCO8_MOD] != midivals[y+MIXER_VCO8_MOD]){
      float _gain = ((float)midivals[y+MIXER_VCO8_MOD] - 64) * mixinc;
      AudioNoInterrupts();
      mixer122_1.gain(y,_gain);
      mixer122_2.gain(y,_gain);
      mixer122_3.gain(y,_gain);
      mixer122_4.gain(y,_gain);
      mixer122_5.gain(y,_gain);
      mixer122_6.gain(y,_gain);
      mixer122_7.gain(y,_gain);
      mixer122_8.gain(y,_gain);
      AudioInterrupts();
      lastval[y+MIXER_VCO8_MOD] = midivals[y+MIXER_VCO8_MOD];
      sendmessage(mixmsgs[y+MIXER_VCO8_MOD],_gain);
    }
  }

  for(int y = 0; y <=3; y++) { 
  
    if (lastval[y+MIXER_VCF3_MOD] != midivals[y+MIXER_VCF3_MOD]){
      lastval[y+MIXER_VCF3_MOD] = midivals[y+MIXER_VCF3_MOD];
      float _gain = ((float)midivals[y+MIXER_VCF3_MOD] - 64) * mixinc;
      AudioNoInterrupts();
      mixer103.gain(y,_gain);
      mixer105.gain(y,_gain);
      mixer109.gain(y,_gain);
      mixer113.gain(y,_gain);
      mixer118.gain(y,_gain);
      mixer125.gain(y,_gain);
      mixer129.gain(y,_gain);
      mixer133.gain(y,_gain);
      AudioInterrupts();
      sendmessage(mixmsgs[y+MIXER_VCF3_MOD],_gain);
    }
  }

  for(int y = 0; y <=3; y++) { 
  
    if (lastval[y+MIXER_VCA3_MOD] != midivals[y+MIXER_VCA3_MOD]){
      //vca 3 mod mix
      lastval[y+MIXER_VCA3_MOD] = midivals[y+MIXER_VCA3_MOD];
      float _gain = ((float)midivals[y+MIXER_VCA3_MOD] - 64) * mixinc;
      AudioNoInterrupts();
      mixer104.gain(y,_gain);
      mixer107.gain(y,_gain);
      mixer111.gain(y,_gain);
      mixer115.gain(y,_gain);
      mixer123.gain(y,_gain);
      mixer127.gain(y,_gain);
      mixer131.gain(y,_gain);
      mixer135.gain(y,_gain);
      AudioInterrupts();
      sendmessage(mixmsgs[y+MIXER_VCA3_MOD],_gain);
    }
  }
