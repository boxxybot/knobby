//adsr

    if (midiChange(ADSR1_ATTACK)){
      envelope1.attack((MAX_ADSR_DELAY * ((float)midivals[ADSR1_ATTACK] * inc)) + 10.5);//TEST Attack min limit to 10.5ms
      sendmessage("ADSR1 Attack:",(MAX_ADSR_DELAY * ((float)midivals[ADSR1_ATTACK] * inc)) + 10.5);
    }
    
    if (midiChange(ADSR1_DECAY)){
      envelope1.decay(MAX_ADSR_DELAY * ((float)midivals[ADSR1_DECAY] * inc));
      sendmessage("ADSR1 Decay:",(MAX_ADSR_DELAY * ((float)midivals[ADSR1_DECAY] * inc)));
    }

    if (midiChange(ADSR1_SUSTAIN)){
      envelope1.sustain((float)midivals[ADSR1_SUSTAIN] * inc);
      sendmessage("ADSR1 Sustain:",(float)midivals[ADSR1_SUSTAIN] * inc);
    }

    if (midiChange(ADSR1_RELEASE)){
      envelope1.release((MAX_ADSR_DELAY * (midivals[ADSR1_RELEASE] * inc)) + .5);
      sendmessage("ADSR1 Release:",(MAX_ADSR_DELAY * (midivals[ADSR1_RELEASE] * inc)) + .5);
    }

    if (midiChange(ADSR2_ATTACK)){
      envelope2.attack((MAX_ADSR_DELAY * ((float)midivals[ADSR2_ATTACK] * inc)) + 10.5);//TEST Attack min limit to 10.5ms
      sendmessage("ADSR2 Attack:",(MAX_ADSR_DELAY * ((float)midivals[ADSR2_ATTACK] * inc)) + 10.5);
    }
    
    if (midiChange(ADSR2_DECAY)){
      envelope2.decay(MAX_ADSR_DELAY * ((float)midivals[ADSR2_DECAY] * inc));
      sendmessage("ADSR2 Decay:",(MAX_ADSR_DELAY * ((float)midivals[ADSR2_DECAY] * inc)));
    }

    if (midiChange(ADSR2_SUSTAIN)){
      envelope2.sustain((float)midivals[ADSR2_SUSTAIN] * inc);
      sendmessage("ADSR2 Sustain:",(float)midivals[ADSR2_SUSTAIN] * inc);
    }

    if (midiChange(ADSR2_RELEASE)){
      envelope2.release((MAX_ADSR_DELAY * (midivals[ADSR2_RELEASE] * inc)) + .5);
      sendmessage("ADSR2 Release:",(MAX_ADSR_DELAY * (midivals[ADSR2_RELEASE] * inc)) + .5);
    }

    if (midiChange(ADSR3_ATTACK)){
      envelope3.attack((MAX_ADSR_DELAY * ((float)midivals[ADSR3_ATTACK] * inc)) + 10.5);//TEST Attack min limit to 10.5ms
      sendmessage("ADSR3 Attack:",(MAX_ADSR_DELAY * ((float)midivals[ADSR3_ATTACK] * inc)) + 10.5);
    }
    
    if (midiChange(ADSR3_DECAY)){
      envelope3.decay(MAX_ADSR_DELAY * ((float)midivals[ADSR3_DECAY] * inc));
      sendmessage("ADSR3 Decay:",(MAX_ADSR_DELAY * ((float)midivals[ADSR3_DECAY] * inc)));
    }

    if (midiChange(ADSR3_SUSTAIN)){
      envelope3.sustain((float)midivals[ADSR3_SUSTAIN] * inc);
      sendmessage("ADSR3 Sustain:",(float)midivals[ADSR3_SUSTAIN] * inc);
    }

    if (midiChange(ADSR3_RELEASE)){
      envelope3.release((MAX_ADSR_DELAY * (midivals[ADSR3_RELEASE] * inc)) + .5);
      sendmessage("ADSR3 Release:",(MAX_ADSR_DELAY * (midivals[ADSR3_RELEASE] * inc)) + .5);
    }

    if (midiChange(ADSR4_ATTACK)){
      envelope4.attack((MAX_ADSR_DELAY * ((float)midivals[ADSR4_ATTACK] * inc)) + 10.5);//TEST Attack min limit to 10.5ms
      sendmessage("ADSR4 Attack:",(MAX_ADSR_DELAY * ((float)midivals[ADSR4_ATTACK] * inc)) + 10.5);
    }
    
    if (midiChange(ADSR4_DECAY)){
      envelope4.decay(MAX_ADSR_DELAY * ((float)midivals[ADSR4_DECAY] * inc));
      sendmessage("ADSR4 Decay:",(MAX_ADSR_DELAY * ((float)midivals[ADSR4_DECAY] * inc)));
    }

    if (midiChange(ADSR4_SUSTAIN)){
      envelope4.sustain((float)midivals[ADSR4_SUSTAIN] * inc);
      sendmessage("ADSR4 Sustain:",(float)midivals[ADSR4_SUSTAIN] * inc);
    }

    if (midiChange(ADSR4_RELEASE)){
      envelope4.release((MAX_ADSR_DELAY * (midivals[ADSR4_RELEASE] * inc)) + .5);
      sendmessage("ADSR4 Release:",(MAX_ADSR_DELAY * (midivals[ADSR4_RELEASE] * inc)) + .5);
    }

    if (midiChange(ADSR5_ATTACK)){
      float _attack5 = (MAX_ADSR_DELAY * ((float)midivals[ADSR5_ATTACK] * inc)) + 10.5;
      envelope101.attack(_attack5);
      envelope103.attack(_attack5);
      envelope105.attack(_attack5);
      envelope107.attack(_attack5);
      envelope109.attack(_attack5);
      envelope111.attack(_attack5);
      envelope113.attack(_attack5);
      envelope115.attack(_attack5);
      sendmessage("ADSR5 Attack:",_attack5);
    }
    
    if (midiChange(ADSR5_DECAY)){
      float _decay5 = MAX_ADSR_DELAY * ((float)midivals[ADSR5_DECAY] * inc);
      envelope101.decay(_decay5);
      envelope103.decay(_decay5);
      envelope105.decay(_decay5);
      envelope107.decay(_decay5);
      envelope109.decay(_decay5);
      envelope111.decay(_decay5);
      envelope113.decay(_decay5);
      envelope115.decay(_decay5);
      sendmessage("ADSR5 Decay:",(_decay5));
    }

    if (midiChange(ADSR5_SUSTAIN)){
      float _sustain5 = (float)midivals[ADSR5_SUSTAIN] * inc;
      envelope101.sustain(_sustain5);
      envelope103.sustain(_sustain5);
      envelope105.sustain(_sustain5);
      envelope107.sustain(_sustain5);
      envelope109.sustain(_sustain5);
      envelope111.sustain(_sustain5);
      envelope113.sustain(_sustain5);
      envelope115.sustain(_sustain5);
      sendmessage("ADSR5 Sustain:",_sustain5);
    }

    if (midiChange(ADSR5_RELEASE)){
      float _release5 = (MAX_ADSR_DELAY * (midivals[ADSR5_RELEASE] * inc)) + .5;
      envelope101.release(_release5);
      envelope103.release(_release5);
      envelope105.release(_release5);
      envelope107.release(_release5);
      envelope109.release(_release5);
      envelope111.release(_release5);
      envelope113.release(_release5);
      envelope115.release(_release5);
      sendmessage("ADSR5 Release:",_release5);
    }

    if (midiChange(ADSR6_ATTACK)){
      float _attack6 = (MAX_ADSR_DELAY * ((float)midivals[ADSR6_ATTACK] * inc)) + 10.5;
      envelope102.attack(_attack6);
      envelope104.attack(_attack6);
      envelope106.attack(_attack6);
      envelope108.attack(_attack6);
      envelope110.attack(_attack6);
      envelope112.attack(_attack6);
      envelope114.attack(_attack6);
      envelope116.attack(_attack6);
      sendmessage("ADSR6 Attack:",_attack6);
    }
    
    if (midiChange(ADSR6_DECAY)){
      float _decay6 = MAX_ADSR_DELAY * ((float)midivals[ADSR6_DECAY] * inc);
      envelope102.decay(_decay6);
      envelope104.decay(_decay6);
      envelope106.decay(_decay6);
      envelope108.decay(_decay6);
      envelope110.decay(_decay6);
      envelope112.decay(_decay6);
      envelope114.decay(_decay6);
      envelope116.decay(_decay6);
      sendmessage("ADSR6 Decay:",_decay6);
    }

    if (midiChange(ADSR6_SUSTAIN)){
      float _sustain6 = (float)midivals[ADSR6_SUSTAIN] * inc;
      envelope102.sustain(_sustain6);
      envelope104.sustain(_sustain6);
      envelope106.sustain(_sustain6);
      envelope108.sustain(_sustain6);
      envelope110.sustain(_sustain6);
      envelope112.sustain(_sustain6);
      envelope114.sustain(_sustain6);
      envelope116.sustain(_sustain6);
      sendmessage("ADSR6 Sustain:",_sustain6);
    }

    if (midiChange(ADSR6_RELEASE)){
      float _release6 = (MAX_ADSR_DELAY * (midivals[ADSR6_RELEASE] * inc)) + .5;
      envelope102.release(_release6);
      envelope104.release(_release6);
      envelope106.release(_release6);
      envelope108.release(_release6);
      envelope110.release(_release6);
      envelope112.release(_release6);
      envelope114.release(_release6);
      envelope116.release(_release6);
      sendmessage("ADSR6 Release:",_release6);
    }

    
