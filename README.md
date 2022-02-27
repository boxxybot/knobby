# knobby
As a basic entity, knobby allows control of 2048 things with 5 knobs. Those 2048 things are, in this case, MIDI control messages to knobby's internal synth engine.
Knobby's synth engine presently has 2 voltage controlled filters, 5 vcos for the two filters, and a multitude of mixer channels to control modulation from 3 lfos and 4 adsr generators as well as a line input envelope follower. One voice of knobby is 4 note FM polyphonic with six operators for each note, meaning knobby's synth engine actually has something more than 50 VCOs, 20 ADSR generators, etc. It's meant to emulate a nice rack of patchable gear as much as possible, sort of like an Arp 2600 combined with a minimoog  and a (limited) Yamaha DX without all the jacks and cables and (only five) knobs. Multiple knobby can be chained, allowing multiple points of access to controls or more than one person to play in a group.

knobby has several sequencers: two are step sequencers similar in function to the Five12 Vector, albeit limited due to knoby not having a patch bay for external voltage control and sync. These sequencers control the first two synth voices, which are "the mini" and "the 2500." Voice three is four note polyphonic and has a deterministic sequencer based on note probability and timing. The remaining four FM voices each have a topographic sequencer unlike any previously seen. It's based on navigating a plane of values, like flying over mountains,allowing a nearly infinite ability to set  sequences and beats using only (five) knobs and a 128x128 pixel color screen. 

With only 5 knobs, knobby is easy to build and easy to operate. The  combination of colors presented by "knobby" (the main control knob) and the four control
knobs determine what parameters one is controlling at the time. It works like this: https://youtu.be/uNARHQ3IWLY. The video was made before knobby was given a front panel; more details on that when the code is ready for another commit.
