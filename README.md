# knobby
As a basic entity, knobby allows control of 256 things with 5 knobs. Those 256 things are, in this case, MIDI control messages to knobby's internal synth engine.
Knobby's synth engine presently has 3 state variable filters, 8 VCOs, 24 4-input mixer channels to control modulation from 6 lfos and 6 adsr generators as well
as a line input envelope follower. One voice of knobby is 8 note polyphonic, meaning knobby's synth engine actually has something more like 29 VCOs, 27 LFOs,
20 ADSR generators, etc. It's meant to emulate a nice rack of patchable gear as much as possible, sort of like an Arp 2600 without the jacks and (only five) knobs.

With only 5 knobs, knobby is easy to build and easy to operate. The  combination of colors presented by "knobby" (the main control knob) and the four control
knobs determine what parameters one is controlling at the time. It works like this: https://youtu.be/uNARHQ3IWLY
