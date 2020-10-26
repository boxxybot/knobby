unsigned long lastMicros1;
unsigned long lastMicros2;
unsigned long lastMicros3;

unsigned long offMicros1;
unsigned long offMicros2;
unsigned long offMicros3;

unsigned long note1 = 0;
unsigned long note2 = 0;
unsigned long note3 = 0;


void sequencer(){
    unsigned long currentMicros = micros();
    int bpm = midivals[SEQ1_BPM] + 1;
    bpm = bpm * 4;
    if (currentMicros - lastMicros1 >= round((60000/bpm)*1000)){
      int _notes = euclid[midivals[SEQ1_EUCLIDIAN]].length();
      lastMicros1 = currentMicros;
      note1 = (note1 + 1) % 8;
      if (midivals[SEQ1_ENTRY + note1] != 0){
        AudioNoInterrupts();
        cvbus1.amplitude((float)midivals[SEQ1_ENTRY + note1] * inc);
        //Serial.println("Seq1 " + String(midivals[SEQ1_ENTRY + note1] * inc));
        envelope1.noteOn();
        envelope2.noteOn();
        AudioInterrupts();
      }
    }
    bpm = midivals[SEQ2_BPM] + 1;
    bpm = bpm * 4;
    if (currentMicros - lastMicros2 >= round((60000/bpm)*1000)){
      lastMicros2 = currentMicros;
      note2 = (note2 + 1) % 8;
      float _intensity = ((midivals[SEQ2_EXPR_MIX] - 64) * mixinc) + (rms1.read() * (midivals[SEQ2_EXPR_MIX + 1] - 64) * mixinc) + (rms2.read() * (midivals[SEQ2_EXPR_MIX + 2] - 64) * mixinc) + (rms3.read() * (midivals[SEQ2_EXPR_MIX + 3] - 64) * mixinc) / 4;
      if (midivals[SEQ2_ENTRY + note2] != 0){
        AudioNoInterrupts();
        cvbus2.amplitude((float)midivals[SEQ2_ENTRY + note2] * inc);
        vel_cv2.amplitude(_intensity);
        //Serial.println(_intensity);
        envelope3.noteOn();
        envelope4.noteOn();
        AudioInterrupts();
      }
    }    


    bpm = midivals[SEQ3_BPM] + 1;
    bpm = bpm * 4;
    if (currentMicros - lastMicros3 >= round((60000/bpm)*1000)){
      lastMicros3 = currentMicros;
      note3 = (note3 + 1) % 8;
      if (midivals[SEQ3_ENTRY + note3] != 0){
          //create the pitch shift from the mixer
          float _intensity = ((midivals[SEQ3_EXPR_MIX] - 64) * mixinc) + (rms1.read() * (midivals[SEQ3_EXPR_MIX + 1] - 64) * mixinc) + (rms2.read() * (midivals[SEQ3_EXPR_MIX + 2] - 64) * mixinc) + (rms3.read() * (midivals[SEQ3_EXPR_MIX + 3] - 64) * mixinc) / 4;
          //_intensity = 1;
          float _note6 = noteFreqs[midivals[SEQ3_ENTRY + note3] + midivals[OSC6_FREQUENCY]];
          float _note7 = noteFreqs[midivals[SEQ3_ENTRY + note3] + midivals[OSC6_FREQUENCY] + midivals[OSC7_FREQUENCY]];
          float _note8 = noteFreqs[midivals[SEQ3_ENTRY + note3] + midivals[OSC6_FREQUENCY] + midivals[OSC7_FREQUENCY] + midivals[OSC8_FREQUENCY]];
          switch(_activestring % 8){
            case 0:
              AudioNoInterrupts();
              waveformMod101.frequency(_note6);
              waveformMod102.frequency(_note7);
              waveformMod103.frequency(_note8);
              vel_dc1.amplitude(_intensity);
              envelope101.noteOn();
              envelope102.noteOn();
              AudioInterrupts();
              //Serial.println(_note6);
            break;               
            case 1:
              AudioNoInterrupts();
              waveformMod104.frequency(_note6);
              waveformMod105.frequency(_note7);
              waveformMod106.frequency(_note8);
              vel_dc2.amplitude(_intensity);
              envelope103.noteOn();
              envelope104.noteOn();
              AudioInterrupts();
              //Serial.println(_note6);
            break;               
            case 2:
              AudioNoInterrupts();
              waveformMod107.frequency(_note6);
              waveformMod108.frequency(_note7);
              waveformMod109.frequency(_note8);
              vel_dc3.amplitude(_intensity);
              envelope105.noteOn();
              envelope106.noteOn();
              AudioInterrupts();
              //Serial.println(_note6);
            break;               
            case 3:
              AudioNoInterrupts();
              waveformMod110.frequency(_note6);
              waveformMod111.frequency(_note7);
              waveformMod112.frequency(_note8);
              vel_dc4.amplitude(_intensity);
              envelope107.noteOn();
              envelope108.noteOn();
              AudioInterrupts();
              //Serial.println(_note6);
            break;               
            case 4:
              AudioNoInterrupts();
              waveformMod115.frequency(_note6);
              waveformMod113.frequency(_note7);
              waveformMod114.frequency(_note8);
              vel_dc5.amplitude(_intensity);
              envelope109.noteOn();
              envelope110.noteOn();
              AudioInterrupts();
              //Serial.println(_note6);
            break;               
            case 5:
              AudioNoInterrupts();
              waveformMod118.frequency(_note6);
              waveformMod116.frequency(_note7);
              waveformMod117.frequency(_note8);
              vel_dc6.amplitude(_intensity);
              envelope111.noteOn();
              envelope112.noteOn();
              AudioInterrupts();
              //Serial.println(_note6);
            break;               
            case 6:
              AudioNoInterrupts();
              waveformMod121.frequency(_note6);
              waveformMod119.frequency(_note7);
              waveformMod120.frequency(_note8);
              vel_dc7.amplitude(_intensity);
              envelope113.noteOn();
              envelope114.noteOn();
              AudioInterrupts();
              //Serial.println(_note6);
            break;               
            case 7:
              AudioNoInterrupts();
              waveformMod124.frequency(_note6);
              waveformMod122.frequency(_note7);
              waveformMod123.frequency(_note8);
              vel_dc8.amplitude(_intensity);
              envelope115.noteOn();
              envelope116.noteOn();
              AudioInterrupts();
              //Serial.println(_note6);
            break;               
            
          }
          _activestring +=1;
        //Serial.println("Seq3 " + String(midivals[SEQ3_ENTRY + note3]));
      }      
    }  
/*     */  
}
