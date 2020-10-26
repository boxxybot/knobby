
void sendmessage(String _message, float _value){
  _message = _message + " " + String(_value,4);
  Serial.println(_message);  
}

void sendprompt(int _indexer){
  if (_lastindexer != _indexer){
    _lastindexer = _indexer;  
    Serial.println(midiprompts[_indexer]);
  }
}

void printarray(){
    Serial.println();
    int c = 0;
    for(int y = 0; y <=255; y++) { 
      Serial.print(newpos[y]);
      Serial.print(",");
      c +=1;
      if (c ==  32){
        Serial.println();
        c = 0;
      }
    }  
  Serial.println();
  Serial.print("all=");
  Serial.print(AudioProcessorUsage());
  Serial.print("%,");
  Serial.print(AudioProcessorUsageMax());
  Serial.print("%    ");
  Serial.print("Memory: ");
  Serial.print(AudioMemoryUsage());
  Serial.print("blks,");
  Serial.print(AudioMemoryUsageMax());
  Serial.println("blks");
}
