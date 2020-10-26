void midisend(){
    for(int y = 0; y <=255; y++) { 
      if (abs(midivals[y]) != abs(newpos[y] / 4) % midiquant[y]){
        if (midiquant[y] == 128){
          midivals[y] = abs(newpos[y] / 4) % 128;
        }
        if (midiquant[y] == 8192){
          midivals[y] = newpos[y] / 4 % 8192;
        }
        Serial.print(y);
        Serial.print("--");
        Serial.print(midichans[y],HEX);
        Serial.print(":");
        Serial.print(midiports[y]);
        Serial.print(":");
        Serial.print(midivals[y]);
        Serial.println();
        usbMIDI.sendControlChange(midiports[y],midivals[y],midichans[y] & 0x0f,0);
        printarray();
      }
    }  
}

bool midiChange(int port){
     if (lastval[port] != midivals[port]){
      lastval[port] = midivals[port];
      return 1;
     } else {
        return 0;
     }
}
