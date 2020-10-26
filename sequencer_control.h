
//seq
    
    if (midiChange(SEQ1_BPM)){
      sendmessage("SEQ1 BPM:",(float)midivals[SEQ1_BPM] * 4);
    }
    if (midiChange(SEQ2_BPM)){
      sendmessage("SEQ2 BPM:",(float)midivals[SEQ2_BPM] * 4);
    }
    if (midiChange(SEQ3_BPM)){
      sendmessage("SEQ3 BPM:",(float)midivals[SEQ3_BPM] * 4);
    }

    if (midiChange(SEQ1_EUCLIDIAN)){
      sendmessage("Euclidian Type :",(float)midivals[SEQ1_EUCLIDIAN]);
    }
    if (midiChange(SEQ2_EUCLIDIAN)){
      sendmessage("Euclidian Type :",(float)midivals[SEQ2_EUCLIDIAN]);
    }
    if (midiChange(SEQ3_EUCLIDIAN)){
      sendmessage("Euclidian Type :",(float)midivals[SEQ3_EUCLIDIAN]);
    }

    if (midiChange(SEQ1_BEHAVIOR)){
      sendmessage("Behavior:",(float)midivals[SEQ1_BEHAVIOR]);
    }
    if (midiChange(SEQ2_BEHAVIOR)){
      sendmessage("Behavior:",(float)midivals[SEQ2_BEHAVIOR]);
    }
    if (midiChange(SEQ3_BEHAVIOR)){
      sendmessage("Behavior:",(float)midivals[SEQ3_BEHAVIOR]);
    }
