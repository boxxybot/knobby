/* Knobby midi control palette
*/

#include <Encoder.h>
#include <MIDI.h>
#include <Bounce.h>
#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>
#include "definitions.h"
#include "miditables.h"

MIDI_CREATE_INSTANCE(HardwareSerial, Serial1, MIDI1);
//MIDI_CREATE_INSTANCE(HardwareSerial, Serial2, MIDI2);
//MIDI_CREATE_INSTANCE(HardwareSerial, Serial3, MIDI3);
//MIDI_CREATE_INSTANCE(HardwareSerial, Serial4, MIDI4);
//MIDI_CREATE_INSTANCE(HardwareSerial, Serial5, MIDI5);
//MIDI_CREATE_INSTANCE(HardwareSerial, Serial6, MIDI6);
//MIDI_CREATE_INSTANCE(HardwareSerial, Serial7, MIDI7);
//MIDI_CREATE_INSTANCE(HardwareSerial, Serial8, MIDI8);


short delayline[CHORUS_DELAY_LENGTH];
int n_chorus = 3;
const int myInput = AUDIO_INPUT_MIC;
const int redPin =  2;
const int greenPin =  3;
const int bluePin =  4;
const int mredPin =  37;
const int mgreenPin =  36;
const int mbluePin =  33;

Encoder knobby(34, 35);
Encoder knob0(32, 31);
Encoder knob1(30, 29);
Encoder knob2(28, 27);
Encoder knob3(26, 25);

long positionKnobby,positionKnob0,positionKnob1,positionKnob2,positionKnob3  = 0;
long newKnobby,newKnob0,newKnob1,newKnob2,newKnob3 = 0;

int i;
int indexer;
int _lastindexer = -1;
int _lastchan = -1;
int _delayfade1 = 0;
int _delayfade2 = 0;
int _delayfade3 = 0;
int _delayfade4 = 0;
int _activestring = 0;

const float mixinc = (float)1/64;
const float inc = (float)1/128;
const float biginc = (float)1/32768;

#include "init.h"
#include "knobs.h"
#include "messages.h"
#include "sequencer.h"
#include "knobbymidi.h"

void playportstest(){
  #include "mixers.h"
  #include "oscillators.h"
  #include "filters.h"
  #include "envelopes.h"
  #include "expression.h"
  #include "sequencer_control.h"
}

void loop(){

  newKnobby = knobby.read();
  if (abs(newKnobby - positionKnobby) >= 2) {
    i = abs(newKnobby / 4);
    int rowNum = i % 64 / 8;
    int chanNum = i % 8;
    indexer = (i % 64);
    knobcolor(rowNum);
    knobscolor(chanNum);
    positionKnobby = newKnobby;
    knob0.write(newpos[indexer * 4]);
    knob1.write(newpos[indexer * 4 + 1]);
    knob2.write(newpos[indexer * 4 + 2]);
    knob3.write(newpos[indexer * 4 + 3]);
    sendprompt(indexer);
  }

  newKnob0 = knob0.read();
  if (abs(newKnob0 - positionKnob0) >= 2) {
    newpos[indexer * 4] = newKnob0;
    positionKnob0 = newKnob0;
  }

  newKnob1 = knob1.read();
  if (abs(newKnob1 - positionKnob1) >= 2) {
    newpos[indexer * 4 + 1]  = newKnob1;
    positionKnob1 = newKnob1;
  }

  newKnob2 = knob2.read();
  if (abs(newKnob2 - positionKnob2) >= 2) {
    newpos[indexer * 4 + 2] = newKnob2;
    positionKnob2 = newKnob2;
  }

  newKnob3 = knob3.read();
  if (abs(newKnob3 - positionKnob3) >= 2) {
    newpos[indexer * 4 + 3] = newKnob3;
    positionKnob3 = newKnob3;
  }
  midisend();
  playportstest();
  sequencer();
}
