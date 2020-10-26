 

#define _WAVEFORM_SINE 0
#define _WAVEFORM_SAWTOOTH 1
#define _WAVEFORM_SAWTOOTH_REVERSE 2
#define _WAVEFORM_TRIANGLE_VARIABLE 3
#define _WAVEFORM_PULSE 4
#define _WAVEFORM_SAMPLE_HOLD 5             

#define LFO1_SHAPE 96
#define LFO1_SPEED 97
#define LFO1_CRUNCH 98
#define LFO1_PHASE 99

#define LFO2_SHAPE 100
#define LFO2_SPEED 101
#define LFO2_CRUNCH 102
#define LFO2_PHASE 103

#define LFO3_SHAPE 104
#define LFO3_SPEED 105
#define LFO3_CRUNCH 106
#define LFO3_PHASE 107

#define LFO4_SHAPE 148
#define LFO4_SPEED 149
#define LFO4_CRUNCH 150
#define LFO4_PHASE 151

#define LFO5_SHAPE 152
#define LFO5_SPEED 153
#define LFO5_CRUNCH 154
#define LFO5_PHASE 155

#define LFO6_SHAPE 156
#define LFO6_SPEED 157
#define LFO6_CRUNCH 158
#define LFO6_PHASE 159

#define LFO4_PHASE_OFFSET 144
#define LFO5_PHASE_OFFSET 145
#define LFO6_PHASE_OFFSET 146


#define SEQ1_BPM 108
#define SEQ2_BPM 109
#define SEQ3_BPM 110
#define SEQ4_BPM 111

#define OSC1_SHAPE 112
#define OSC1_FREQUENCY 113
#define OSC1_SHAPEMOD 114
#define OSC1_FREQMOD 115

#define OSC2_SHAPE 116
#define OSC2_FREQUENCY 117
#define OSC2_SHAPEMOD 118
#define OSC2_FREQMOD 119

#define OSC3_SHAPE 120
#define OSC3_FREQUENCY 121
#define OSC3_PHASEMOD 122
#define OSC3_FREQMOD 123

#define OSC4_SHAPE 124
#define OSC4_FREQUENCY 125
#define OSC4_PHASEMOD 126
#define OSC4_FREQMOD 127

#define OSC5_SHAPE 128
#define OSC5_FREQUENCY 129
#define OSC5_PHASEMOD 130
#define OSC5_FREQMOD 131

#define OSC6_SHAPE 132
#define OSC6_FREQUENCY 133
#define OSC6_FREQMOD 134
#define OSC6_QUANTIZE 135

#define OSC7_SHAPE 136
#define OSC7_FREQUENCY 137
#define OSC7_FREQMOD 138
#define OSC7_QUANTIZE 139

#define OSC8_SHAPE 140
#define OSC8_FREQUENCY 141
#define OSC8_FREQMOD 142
#define OSC8_QUANTIZE 143

#define FILTER1_FREQUENCY 160
#define FILTER1_RESONANCE 161
#define FILTER1_RANGE 162
#define FILTER1_CRUNCH 163

#define FILTER2_FREQUENCY 164
#define FILTER2_RESONANCE 165
#define FILTER2_TYPE 166
#define FILTER2_CRUNCH 167

#define FILTER3_FREQUENCY 168
#define FILTER3_RESONANCE 169
#define FILTER3_TYPE 170
#define FILTER3_TRACKING 171

#define FREEVERB1_SIZE 190
#define FREEVERB1_DAMPING 191
#define CRUSHER1_BITS 188
#define CRUSHER1_SAMPLERATE 189

#define DELAY1_TIME 176
#define DELAY2_TIME 177
#define DELAY3_TIME 178
#define DELAY4_TIME 179

#define DELAY_OUT_MIX 172
#define DELAY_SEND_MIX 180
#define REVERB_SEND_MIX 184

#define ADSR1_ATTACK 192
#define ADSR1_DECAY 193
#define ADSR1_SUSTAIN 194
#define ADSR1_RELEASE 195

#define ADSR2_ATTACK 196
#define ADSR2_DECAY 197
#define ADSR2_SUSTAIN 198
#define ADSR2_RELEASE 199

#define ADSR3_ATTACK 200
#define ADSR3_DECAY 201
#define ADSR3_SUSTAIN 202
#define ADSR3_RELEASE 203

#define ADSR4_ATTACK 204
#define ADSR4_DECAY 205
#define ADSR4_SUSTAIN 206
#define ADSR4_RELEASE 207

#define ADSR5_ATTACK 208
#define ADSR5_DECAY 209
#define ADSR5_SUSTAIN 210
#define ADSR5_RELEASE 211

#define ADSR6_ATTACK 212
#define ADSR6_DECAY 213
#define ADSR6_SUSTAIN 214
#define ADSR6_RELEASE 215

#define SEQ2_EXPR_MIX 216
#define SEQ3_EXPR_MIX 220

#define MAX_LFO_PHASE 360
#define MAX_LFO_OFFSET 90
#define MAX_LFO_SPEED 3
#define MAX_FILTER_Q 5
#define MIN_FILTER_Q 0.707
#define MAX_OSC_TRACKING 10
#define MAX_OSC_PHASE 360  
#define MAX_FILTER_TRACKING 7
#define MAX_ADSR_DELAY 5000

#define CV_LP_HI 90
#define CV_LP_MID 80
#define CV_LP_LO 60
#define CV_LP_HIQ 0.707
#define CV_LP_LOQ 0.53

#define SEQ1_ENTRY 224
#define SEQ2_ENTRY 232
#define SEQ3_ENTRY 240

//define SEQ4_ENTRY 248

#define SEQ1_EUCLIDIAN 248
#define SEQ1_BEHAVIOR 249
#define SEQ2_EUCLIDIAN 250
#define SEQ2_BEHAVIOR 251
#define SEQ3_EUCLIDIAN 252
#define SEQ3_BEHAVIOR 253
#define UNUSED_EUCLIDIAN 254
#define UNUSED_BEHAVIOR 255


#define MIXER_MAIN_A 0
#define MIXER_MAIN_B 4
#define MIXER_VCF1_SRC 8
#define MIXER_VCF1_MOD 12
#define MIXER_VCA1_MOD 16
#define MIXER_VCO1_MOD 20
#define MIXER_VCO2_MOD 24
#define MIXER_VCF2_SRC 28
#define MIXER_VCF2_MOD 32
#define MIXER_VCA2_MOD 36
#define MIXER_VCO3_MOD 40
#define MIXER_VCO4_MOD 44
#define MIXER_VCO5_MOD 48
#define MIXER_VCF3_SRC 52
#define MIXER_VCF3_MOD 56
#define MIXER_VCA3_MOD 60
#define MIXER_VCO6_MOD 64
#define MIXER_VCO7_MOD 68
#define MIXER_VCO8_MOD 72


#define CHORUS_DELAY_LENGTH (16*AUDIO_BLOCK_SAMPLES)

// GUItool: begin automatically generated code
AudioSynthWaveform       lfo3_2;         //xy=217,1659
AudioSynthWaveform       lfo3_3;         //xy=220,1882
AudioSynthWaveform       lfo2_2;         //xy=224,1615
AudioSynthWaveform       lfo2_3;         //xy=227,1838
AudioSynthWaveform       lfo1_2;         //xy=229,1581
AudioSynthWaveform       lfo1_3;         //xy=232,1804
AudioSynthWaveform       lfo3_1;         //xy=234,1425
AudioSynthWaveform       lfo2_1;         //xy=241,1381
AudioSynthWaveform       lfo1_1;         //xy=246,1347
AudioSynthWaveform       lfo3_4;         //xy=245,2112
AudioSynthWaveform       lfo2_4;         //xy=252,2068
AudioSynthWaveform       lfo1_4;         //xy=257,2034
AudioEffectBitcrusher    crush3_2;       //xy=324,1656
AudioEffectBitcrusher    crush3_3;       //xy=327,1879
AudioEffectBitcrusher    crush2_2;       //xy=330,1614
AudioEffectBitcrusher    crush1_2;    //xy=332,1579
AudioEffectBitcrusher    crush2_3;       //xy=333,1837
AudioEffectBitcrusher    crush3_1;       //xy=341,1422
AudioEffectBitcrusher    crush1_3;       //xy=340,1802
AudioEffectBitcrusher    crush2_1;       //xy=347,1380
AudioEffectBitcrusher    crush1_1;       //xy=354,1345
AudioEffectBitcrusher    crush3_4;       //xy=352,2109
AudioEffectBitcrusher    crush2_4;       //xy=358,2067
AudioEffectBitcrusher    crush1_4;       //xy=365,2032
AudioFilterBiquad        biquad11;       //xy=446,1580
AudioFilterBiquad        biquad13;       //xy=446,1656
AudioFilterBiquad        biquad14;       //xy=449,1803
AudioFilterBiquad        biquad16;       //xy=449,1879
AudioFilterBiquad        biquad12;       //xy=453,1616
AudioFilterBiquad        biquad15;       //xy=456,1839
AudioFilterBiquad        biquad8;        //xy=463,1346
AudioFilterBiquad        biquad10;       //xy=463,1422
AudioFilterBiquad        biquad9;        //xy=470,1382
AudioFilterBiquad        biquad17;       //xy=473,2033
AudioFilterBiquad        biquad19;       //xy=473,2109
AudioFilterBiquad        biquad18;       //xy=480,2069
AudioSynthWaveform       waveform2;      //xy=660.0000114440918,733.0000228881836
AudioSynthWaveform       waveform3;      //xy=692.0000114440918,926.0000267028809
AudioMixer4              mixer122_2;     //xy=713,1683
AudioMixer4              mixer122_3;     //xy=716,1906
AudioMixer4              mixer121_2;     //xy=721,1619
AudioMixer4              mixer120_2;     //xy=724,1551
AudioMixer4              mixer121_3;     //xy=724,1842
AudioMixer4              mixer120_3;     //xy=727,1774
AudioMixer4              mixer122_1;     //xy=730,1449
AudioMixer4              mixer121_1;     //xy=738,1385
AudioMixer4              mixer120_1;     //xy=741,1317
AudioMixer4              mixer122_4;     //xy=740,2136
AudioSynthWaveform       waveform1;      //xy=751.0000152587891,580.000020980835
AudioMixer4              mixer121_4;     //xy=748,2072
AudioMixer4              mixer120_4;     //xy=751,2004
AudioSynthWaveformDc     cvbus2;         //xy=839,1076
AudioEffectBitcrusher    bitcrusher5;    //xy=847,706
AudioSynthWaveformDc     cvbus1;         //xy=851,186
AudioEffectBitcrusher    bitcrusher6;    //xy=851,906
AudioEffectBitcrusher    bitcrusher4;    //xy=873,543.1999969482422
AudioFilterBiquad        biquad7;        //xy=942,1076
AudioFilterBiquad        biquad4;        //xy=954,187
AudioMixer4              mixer7;         //xy=955,261
AudioSynthWaveformModulated waveformMod111; //xy=958,2069
AudioSynthWaveformModulated waveformMod112; //xy=959,2109
AudioSynthWaveformModulated waveformMod110; //xy=960,2026
AudioFilterBiquad        biquad6;        //xy=972,945
AudioFilterBiquad        biquad3;        //xy=974,728
AudioSynthWaveformModulated waveformMod108; //xy=970,1845
AudioSynthWaveformModulated waveformMod109; //xy=971,1885
AudioSynthWaveformModulated waveformMod107; //xy=972,1802
AudioFilterBiquad        biquad2;        //xy=977,587
AudioSynthWaveformModulated waveformMod105; //xy=979,1623
AudioSynthWaveformModulated waveformMod106; //xy=980,1663
AudioSynthWaveformModulated waveformMod104; //xy=981,1580
AudioSynthWaveformModulated waveformMod102; //xy=988,1382
AudioSynthWaveformModulated waveformMod103; //xy=989,1422
AudioSynthWaveformModulated waveformMod101; //xy=990,1339
AudioAnalyzeRMS          rms3;           //xy=1102,934
AudioMixer4              mixer6;         //xy=1131.0000038146973,116
AudioSynthWaveformDc     vel_dc4;        //xy=1129,2149
AudioEffectBitcrusher    bitcrusher111;  //xy=1131,2071
AudioEffectBitcrusher    bitcrusher112;  //xy=1131,2109
AudioEffectBitcrusher    bitcrusher110;  //xy=1133,2028
AudioSynthWaveformDc     dc2;            //xy=1142,473
AudioSynthWaveformDc     vel_dc3;        //xy=1141,1925
AudioEffectBitcrusher    bitcrusher108;  //xy=1143,1847
AudioEffectBitcrusher    bitcrusher109;  //xy=1143,1885
AudioAnalyzeRMS          rms2;           //xy=1148,703
AudioEffectBitcrusher    bitcrusher107;  //xy=1145,1804
AudioSynthWaveformDc     vel_dc2;        //xy=1150,1703
AudioEffectBitcrusher    bitcrusher105;  //xy=1152,1625
AudioEffectBitcrusher    bitcrusher106;  //xy=1152,1663
AudioEffectBitcrusher    bitcrusher104;  //xy=1154,1582
AudioSynthWaveformDc     vel_dc1;        //xy=1159,1462
AudioEffectBitcrusher    bitcrusher102;  //xy=1161,1384
AudioEffectBitcrusher    bitcrusher103;  //xy=1161,1422
AudioEffectBitcrusher    bitcrusher101;  //xy=1163,1341
AudioAnalyzeRMS          rms1;           //xy=1167,564
AudioSynthWaveformDc     dc3;            //xy=1174,388
AudioMixer4              mixer19;        //xy=1175.0000267028809,1090
AudioEffectEnvelope      envelope107;    //xy=1277,2182
AudioEffectEnvelope      envelope105;    //xy=1289,1958
AudioEffectMultiply      multiply3;      //xy=1298,446
AudioMixer4              mixer9;         //xy=1301,309
AudioEffectEnvelope      envelope103;    //xy=1298,1736
AudioMixer4              mixer8;         //xy=1308,232
AudioEffectEnvelope      envelope101;    //xy=1307,1495
AudioEffectMultiply      multiply2;      //xy=1322,371
AudioMixer4              mixer116;       //xy=1321,2061
AudioMixer4              mixer112;       //xy=1333,1837
AudioMixer4              mixer108;       //xy=1342,1615
AudioMixer4              mixer101;       //xy=1351,1374
AudioMixer4              mixer17;        //xy=1372.0000648498535,917.0000305175781
AudioMixer4              mixer18;        //xy=1403,1145
AudioSynthWaveformDc     dc1;            //xy=1413,2557
AudioMixer4              mixer16;        //xy=1427.0000343322754,850.9999847412109
AudioMixer4              mixer113;       //xy=1448,2160
AudioEffectEnvelope      envelope108;    //xy=1458,2217
AudioMixer4              mixer109;       //xy=1460,1936
AudioMixer4              mixer105;       //xy=1469,1714
AudioFilterStateVariable filter104;      //xy=1468,2085
AudioEffectEnvelope      envelope106;    //xy=1470,1993
AudioMixer4              mixer103;       //xy=1478,1459
AudioEffectEnvelope      envelope104;    //xy=1479,1771
AudioFilterStateVariable filter103;      //xy=1480,1861
AudioEffectEnvelope      envelope102;    //xy=1488,1530
AudioFilterStateVariable filter102;      //xy=1489,1639
AudioFilterStateVariable filter101;      //xy=1498,1398
AudioEffectEnvelope      envelope1;      //xy=1511,571
AudioSynthWaveformModulated waveformMod1;   //xy=1518,365
AudioSynthWaveformModulated waveformMod2;   //xy=1518,419
AudioSynthNoisePink      pink1;          //xy=1541,473
AudioMixer4              mixer114;       //xy=1591,2092
AudioMixer4              mixer110;       //xy=1603,1868
AudioMixer4              mixer106;       //xy=1612,1646
AudioMixer4              mixer102;       //xy=1621,1405
AudioMixer4              mixer115;       //xy=1625,2162
AudioMixer4              mixer104;       //xy=1632,1484
AudioMixer4              mixer111;       //xy=1637,1938
AudioMixer4              mixer107;       //xy=1646,1716
AudioSynthWaveformModulated waveformMod4;   //xy=1655,916
AudioSynthWaveformModulated waveformMod5;   //xy=1655,950
AudioSynthWaveformModulated waveformMod6;   //xy=1655,986
AudioEffectRectifier     rect1;          //xy=1677,243
AudioMixer4              mixer3;         //xy=1719,415
AudioEffectEnvelope      envelope2;      //xy=1721,592
AudioMixer4              mixer4;         //xy=1731,517
AudioSynthNoiseWhite     noise1;         //xy=1759,1032
AudioFilterBiquad        biquad1;        //xy=1783,145
AudioEffectMultiply      multiply9;      //xy=1794,2090
AudioEffectMultiply      multiply8;      //xy=1806,1866
AudioEffectMultiply      multiply7;      //xy=1815,1644
AudioEffectMultiply      multiply6;      //xy=1824,1403
AudioFilterBiquad        biquad5;        //xy=1855,1032
AudioEffectBitcrusher    bitcrusher1;    //xy=1891,420
AudioMixer4              mixer5;         //xy=1895,566
AudioMixer4              mixer10;        //xy=1913,496
AudioEffectEnvelope      envelope3;      //xy=1927.00004196167,1147.0000438690186
AudioSynthWaveform       lfo3_5;         //xy=1958,1953
AudioSynthWaveform       lfo3_6;         //xy=1959,2185
AudioSynthWaveform       lfo2_5;         //xy=1965,1909
AudioSynthWaveform       lfo2_6;         //xy=1966,2141
AudioSynthWaveform       lfo3_7;         //xy=1967,2421
AudioSynthWaveform       lfo1_5;         //xy=1970,1875
AudioSynthWaveform       lfo1_6;         //xy=1971,2107
AudioSynthWaveform       lfo2_7;         //xy=1974,2377
AudioSynthWaveform       lfo1_7;         //xy=1979,2343
AudioAnalyzePeak         peak1;          //xy=1990,189
AudioSynthWaveform       lfo3_8;         //xy=2000,2669
AudioSynthWaveform       lfo2_8;         //xy=2007,2625
AudioSynthWaveform       lfo1_8;         //xy=2012,2591
AudioMixer4              mixer15;        //xy=2022,971
AudioSynthWaveformDc     vel_cv2;            //xy=2027.0000953674316,1210.3333883285522
AudioMixer4              mixer28;        //xy=2034,1540
AudioEffectBitcrusher    crush3_5;       //xy=2065,1951
AudioEffectBitcrusher    crush3_6;       //xy=2066,2183
AudioEffectBitcrusher    crush2_5;       //xy=2071,1909
AudioAnalyzeRMS          rms4;           //xy=2078,581
AudioEffectBitcrusher    crush2_6;       //xy=2072,2141
AudioEffectBitcrusher    crush3_7;       //xy=2074,2419
AudioEffectBitcrusher    crush1_5;       //xy=2078,1874
AudioEffectBitcrusher    crush1_6;       //xy=2079,2106
AudioEffectBitcrusher    crush2_7;       //xy=2080,2377
AudioFilterStateVariable filter1;        //xy=2090,433
AudioEffectBitcrusher    crush1_7;       //xy=2087,2342
AudioEffectBitcrusher    crush3_8;       //xy=2107,2667
AudioEffectBitcrusher    crush2_8;       //xy=2113,2625
AudioMixer4              mixer21;        //xy=2125,1052
AudioEffectBitcrusher    crush1_8;       //xy=2120,2590
AudioFilterBiquad        biquad20;       //xy=2187,1874
AudioFilterBiquad        biquad22;       //xy=2187,1950
AudioFilterBiquad        biquad23;       //xy=2188,2106
AudioFilterBiquad        biquad25;       //xy=2188,2182
AudioFilterBiquad        biquad21;       //xy=2194,1910
AudioEffectBitcrusher    bitcrusher2;    //xy=2199,894
AudioFilterBiquad        biquad24;       //xy=2195,2142
AudioFilterBiquad        biquad26;       //xy=2196,2342
AudioFilterBiquad        biquad28;       //xy=2196,2418
AudioFilterStateVariable filter2;        //xy=2205,966
AudioFilterBiquad        biquad27;       //xy=2203,2378
AudioEffectEnvelope      envelope4;      //xy=2227,1152
AudioFilterBiquad        biquad29;       //xy=2229,2590
AudioFilterBiquad        biquad31;       //xy=2229,2666
AudioFilterBiquad        biquad30;       //xy=2236,2626
AudioEffectMultiply      multiply1;      //xy=2246,490
AudioMixer4              mixer27;        //xy=2261,1569
AudioMixer4              mixer20;        //xy=2335,973
AudioMixer4              mixer22;        //xy=2386,1123
AudioInputI2S            i2s1;           //xy=2402,231
AudioAnalyzeRMS          rms5;           //xy=2409,1199
AudioMixer4              mixer122_5;     //xy=2454,1977
AudioMixer4              mixer122_6;     //xy=2455,2209
AudioMixer4              mixer121_5;     //xy=2462,1913
AudioMixer4              mixer121_6;     //xy=2463,2145
AudioMixer4              mixer120_5;     //xy=2465,1845
AudioMixer4              mixer122_7;     //xy=2463,2445
AudioMixer4              mixer120_6;     //xy=2466,2077
AudioMixer4              mixer121_7;     //xy=2471,2381
AudioMixer4              mixer120_7;     //xy=2474,2313
AudioMixer4              mixer122_8;     //xy=2496,2693
AudioMixer4              mixer121_8;     //xy=2504,2629
AudioMixer4              mixer120_8;     //xy=2507,2561
AudioMixer4              mixer11;        //xy=2543.000066757202,619.0000133514404
AudioMixer4              mixer12;        //xy=2578.0000381469727,1173.9999980926514
AudioAnalyzeNoteFrequency notefreq1;      //xy=2612,191
AudioEffectMultiply      multiply4;      //xy=2609,963
AudioSynthWaveformModulated waveformMod116; //xy=2676,2146
AudioEffectFreeverbStereo freeverbs1;     //xy=2683,624
AudioSynthWaveformModulated waveformMod117; //xy=2677,2186
AudioSynthWaveformModulated waveformMod118; //xy=2678,2103
AudioSynthWaveformModulated waveformMod113; //xy=2696,1910
AudioSynthWaveformModulated waveformMod114; //xy=2697,1950
AudioSynthWaveformModulated waveformMod115; //xy=2698,1867
AudioSynthWaveformModulated waveformMod119; //xy=2714,2390
AudioSynthWaveformModulated waveformMod120; //xy=2715,2430
AudioSynthWaveformModulated waveformMod121; //xy=2716,2347
AudioEffectDelay         delay1;         //xy=2727,1130
AudioSynthWaveformModulated waveformMod122; //xy=2734,2620
AudioSynthWaveformModulated waveformMod123; //xy=2735,2660
AudioSynthWaveformModulated waveformMod124; //xy=2736,2577
AudioSynthWaveformDc     vel_dc6;        //xy=2847,2226
AudioEffectBitcrusher    bitcrusher116;  //xy=2849,2148
AudioEffectBitcrusher    bitcrusher117;  //xy=2849,2186
AudioEffectBitcrusher    bitcrusher118;  //xy=2851,2105
AudioSynthWaveformDc     vel_dc5;        //xy=2867,1990
AudioEffectBitcrusher    bitcrusher113;  //xy=2869,1912
AudioEffectBitcrusher    bitcrusher114;  //xy=2869,1950
AudioEffectBitcrusher    bitcrusher115;  //xy=2871,1869
AudioEffectFade          dlyfade1;       //xy=2885,1058
AudioSynthWaveformDc     vel_dc7;        //xy=2885,2470
AudioEffectFade          dlyfade5;       //xy=2891,1172
AudioEffectBitcrusher    bitcrusher119;  //xy=2887,2392
AudioEffectBitcrusher    bitcrusher120;  //xy=2887,2430
AudioEffectBitcrusher    bitcrusher121;  //xy=2889,2349
AudioEffectFade          dlyfade3;       //xy=2899,1112
AudioEffectFade          dlyfade7;       //xy=2901,1221
AudioSynthWaveformDc     vel_dc8;        //xy=2905,2700
AudioEffectBitcrusher    bitcrusher122;  //xy=2907,2622
AudioEffectBitcrusher    bitcrusher123;  //xy=2907,2660
AudioEffectBitcrusher    bitcrusher124;  //xy=2909,2579
AudioMixer4              mixer1;         //xy=2918,334
AudioMixer4              mixer2;         //xy=2925,494
AudioEffectFade          dlyfade0;       //xy=2989,1033
AudioEffectFade          dlyfade2;       //xy=2997,1076
AudioEffectEnvelope      envelope111;    //xy=2995,2259
AudioEffectEnvelope      envelope109;    //xy=3015,2023
AudioEffectFade          dlyfade4;       //xy=3024,1152
AudioEffectFade          dlyfade6;       //xy=3025,1198
AudioEffectEnvelope      envelope113;    //xy=3033,2503
AudioMixer4              mixer124;       //xy=3039,2138
AudioEffectEnvelope      envelope115;    //xy=3053,2733
AudioMixer4              mixer117;       //xy=3059,1902
AudioMixer4              mixer128;       //xy=3077,2382
AudioMixer4              mixer132;       //xy=3097,2612
AudioMixer4              mixer24;        //xy=3165,1170
AudioMixer4              mixer23;        //xy=3167,1096
AudioMixer4              mixer125;       //xy=3166,2237
AudioEffectEnvelope      envelope112;    //xy=3176,2294
AudioMixer4              mixer118;       //xy=3186,2001
AudioFilterStateVariable filter106;      //xy=3186,2162
AudioEffectEnvelope      envelope110;    //xy=3196,2058
AudioFilterStateVariable filter105;      //xy=3206,1926
AudioMixer4              mixer129;       //xy=3204,2481
AudioEffectEnvelope      envelope114;    //xy=3214,2538
AudioFilterStateVariable filter107;      //xy=3224,2406
AudioMixer4              mixer133;       //xy=3224,2711
AudioEffectEnvelope      envelope116;    //xy=3234,2768
AudioFilterStateVariable filter108;      //xy=3244,2636
AudioOutputI2S           i2s2;           //xy=3259,483
AudioOutputUSB           usb1;           //xy=3266,339
AudioMixer4              mixer13;        //xy=3274,862
AudioMixer4              mixer14;        //xy=3278,948
AudioMixer4              mixer126;       //xy=3309,2169
AudioMixer4              mixer119;       //xy=3329,1933
AudioMixer4              mixer127;       //xy=3343,2239
AudioMixer4              mixer25;        //xy=3347.5001258850098,1125.7499828338623
AudioMixer4              mixer130;       //xy=3347,2413
AudioMixer4              mixer123;       //xy=3363,2003
AudioMixer4              mixer134;       //xy=3367,2643
AudioMixer4              mixer131;       //xy=3381,2483
AudioMixer4              mixer135;       //xy=3401,2713
AudioEffectMultiply      multiply11;     //xy=3512,2167
AudioEffectMultiply      multiply10;     //xy=3532,1931
AudioEffectMultiply      multiply12;     //xy=3550,2411
AudioEffectMultiply      multiply13;     //xy=3570,2641
AudioMixer4              mixer29;        //xy=3821,2347
AudioConnection          patchCord1(lfo3_2, crush3_2);
AudioConnection          patchCord2(lfo3_3, crush3_3);
AudioConnection          patchCord3(lfo2_2, crush2_2);
AudioConnection          patchCord4(lfo2_3, crush2_3);
AudioConnection          patchCord5(lfo1_2, crush1_2);
AudioConnection          patchCord6(lfo1_3, crush1_3);
AudioConnection          patchCord7(lfo3_1, crush3_1);
AudioConnection          patchCord8(lfo2_1, crush2_1);
AudioConnection          patchCord9(lfo1_1, crush1_1);
AudioConnection          patchCord10(lfo3_4, crush3_4);
AudioConnection          patchCord11(lfo2_4, crush2_4);
AudioConnection          patchCord12(lfo1_4, crush1_4);
AudioConnection          patchCord13(crush3_2, biquad13);
AudioConnection          patchCord14(crush3_3, biquad16);
AudioConnection          patchCord15(crush2_2, biquad12);
AudioConnection          patchCord16(crush1_2, biquad11);
AudioConnection          patchCord17(crush2_3, biquad15);
AudioConnection          patchCord18(crush3_1, biquad10);
AudioConnection          patchCord19(crush1_3, biquad14);
AudioConnection          patchCord20(crush2_1, biquad9);
AudioConnection          patchCord21(crush1_1, biquad8);
AudioConnection          patchCord22(crush3_4, biquad19);
AudioConnection          patchCord23(crush2_4, biquad18);
AudioConnection          patchCord24(crush1_4, biquad17);
AudioConnection          patchCord25(biquad11, 0, mixer122_2, 0);
AudioConnection          patchCord26(biquad11, 0, mixer120_2, 0);
AudioConnection          patchCord27(biquad11, 0, mixer121_2, 0);
AudioConnection          patchCord28(biquad11, 0, mixer105, 0);
AudioConnection          patchCord29(biquad11, 0, mixer107, 0);
AudioConnection          patchCord30(biquad13, 0, mixer122_2, 2);
AudioConnection          patchCord31(biquad13, 0, mixer120_2, 2);
AudioConnection          patchCord32(biquad13, 0, mixer121_2, 2);
AudioConnection          patchCord33(biquad13, 0, mixer105, 2);
AudioConnection          patchCord34(biquad13, 0, mixer107, 2);
AudioConnection          patchCord35(biquad14, 0, mixer122_3, 0);
AudioConnection          patchCord36(biquad14, 0, mixer120_3, 0);
AudioConnection          patchCord37(biquad14, 0, mixer121_3, 0);
AudioConnection          patchCord38(biquad14, 0, mixer109, 0);
AudioConnection          patchCord39(biquad14, 0, mixer111, 0);
AudioConnection          patchCord40(biquad16, 0, mixer122_3, 2);
AudioConnection          patchCord41(biquad16, 0, mixer120_3, 2);
AudioConnection          patchCord42(biquad16, 0, mixer121_3, 2);
AudioConnection          patchCord43(biquad16, 0, mixer109, 2);
AudioConnection          patchCord44(biquad16, 0, mixer111, 2);
AudioConnection          patchCord45(biquad12, 0, mixer122_2, 1);
AudioConnection          patchCord46(biquad12, 0, mixer120_2, 1);
AudioConnection          patchCord47(biquad12, 0, mixer121_2, 1);
AudioConnection          patchCord48(biquad12, 0, mixer105, 1);
AudioConnection          patchCord49(biquad12, 0, mixer107, 1);
AudioConnection          patchCord50(biquad15, 0, mixer122_3, 1);
AudioConnection          patchCord51(biquad15, 0, mixer120_3, 1);
AudioConnection          patchCord52(biquad15, 0, mixer121_3, 1);
AudioConnection          patchCord53(biquad15, 0, mixer109, 1);
AudioConnection          patchCord54(biquad15, 0, mixer111, 1);
AudioConnection          patchCord55(biquad8, 0, mixer122_1, 0);
AudioConnection          patchCord56(biquad8, 0, mixer120_1, 0);
AudioConnection          patchCord57(biquad8, 0, mixer121_1, 0);
AudioConnection          patchCord58(biquad8, 0, mixer103, 0);
AudioConnection          patchCord59(biquad8, 0, mixer104, 0);
AudioConnection          patchCord60(biquad10, 0, mixer122_1, 2);
AudioConnection          patchCord61(biquad10, 0, mixer120_1, 2);
AudioConnection          patchCord62(biquad10, 0, mixer121_1, 2);
AudioConnection          patchCord63(biquad10, 0, mixer103, 2);
AudioConnection          patchCord64(biquad10, 0, mixer104, 2);
AudioConnection          patchCord65(biquad9, 0, mixer122_1, 1);
AudioConnection          patchCord66(biquad9, 0, mixer120_1, 1);
AudioConnection          patchCord67(biquad9, 0, mixer121_1, 1);
AudioConnection          patchCord68(biquad9, 0, mixer103, 1);
AudioConnection          patchCord69(biquad9, 0, mixer104, 1);
AudioConnection          patchCord70(biquad17, 0, mixer122_4, 0);
AudioConnection          patchCord71(biquad17, 0, mixer120_4, 0);
AudioConnection          patchCord72(biquad17, 0, mixer121_4, 0);
AudioConnection          patchCord73(biquad17, 0, mixer113, 0);
AudioConnection          patchCord74(biquad17, 0, mixer115, 0);
AudioConnection          patchCord75(biquad19, 0, mixer122_4, 2);
AudioConnection          patchCord76(biquad19, 0, mixer120_4, 2);
AudioConnection          patchCord77(biquad19, 0, mixer121_4, 2);
AudioConnection          patchCord78(biquad19, 0, mixer113, 2);
AudioConnection          patchCord79(biquad19, 0, mixer115, 2);
AudioConnection          patchCord80(biquad18, 0, mixer122_4, 1);
AudioConnection          patchCord81(biquad18, 0, mixer120_4, 1);
AudioConnection          patchCord82(biquad18, 0, mixer121_4, 1);
AudioConnection          patchCord83(biquad18, 0, mixer113, 1);
AudioConnection          patchCord84(biquad18, 0, mixer115, 1);
AudioConnection          patchCord85(waveform2, bitcrusher5);
AudioConnection          patchCord86(waveform3, bitcrusher6);
AudioConnection          patchCord87(mixer122_2, 0, waveformMod106, 0);
AudioConnection          patchCord88(mixer122_3, 0, waveformMod109, 0);
AudioConnection          patchCord89(mixer121_2, 0, waveformMod105, 0);
AudioConnection          patchCord90(mixer120_2, 0, waveformMod104, 0);
AudioConnection          patchCord91(mixer121_3, 0, waveformMod108, 0);
AudioConnection          patchCord92(mixer120_3, 0, waveformMod107, 0);
AudioConnection          patchCord93(mixer122_1, 0, waveformMod103, 0);
AudioConnection          patchCord94(mixer121_1, 0, waveformMod102, 0);
AudioConnection          patchCord95(mixer120_1, 0, waveformMod101, 0);
AudioConnection          patchCord96(mixer122_4, 0, waveformMod112, 0);
AudioConnection          patchCord97(waveform1, bitcrusher4);
AudioConnection          patchCord98(mixer121_4, 0, waveformMod111, 0);
AudioConnection          patchCord99(mixer120_4, 0, waveformMod110, 0);
AudioConnection          patchCord100(cvbus2, biquad7);
AudioConnection          patchCord101(bitcrusher5, biquad3);
AudioConnection          patchCord102(cvbus1, biquad4);
AudioConnection          patchCord103(bitcrusher6, biquad6);
AudioConnection          patchCord104(bitcrusher4, biquad2);
AudioConnection          patchCord105(biquad7, 0, mixer18, 3);
AudioConnection          patchCord106(biquad7, 0, mixer17, 3);
AudioConnection          patchCord107(biquad7, 0, mixer16, 3);
AudioConnection          patchCord108(biquad7, 0, mixer19, 3);
AudioConnection          patchCord109(biquad7, 0, mixer21, 2);
AudioConnection          patchCord110(biquad4, 0, mixer8, 1);
AudioConnection          patchCord111(biquad4, 0, mixer9, 1);
AudioConnection          patchCord112(biquad4, 0, mixer10, 1);
AudioConnection          patchCord113(mixer7, 0, multiply3, 0);
AudioConnection          patchCord114(mixer7, 0, mixer9, 0);
AudioConnection          patchCord115(waveformMod111, bitcrusher111);
AudioConnection          patchCord116(waveformMod112, bitcrusher112);
AudioConnection          patchCord117(waveformMod110, bitcrusher110);
AudioConnection          patchCord118(biquad6, 0, mixer18, 0);
AudioConnection          patchCord119(biquad6, 0, mixer17, 0);
AudioConnection          patchCord120(biquad6, 0, mixer16, 0);
AudioConnection          patchCord121(biquad6, 0, mixer19, 0);
AudioConnection          patchCord122(biquad6, 0, mixer21, 1);
AudioConnection          patchCord123(biquad6, 0, mixer22, 1);
AudioConnection          patchCord124(biquad6, rms3);
AudioConnection          patchCord125(biquad3, 0, mixer5, 1);
AudioConnection          patchCord126(biquad3, 0, mixer4, 1);
AudioConnection          patchCord127(biquad3, 0, mixer6, 1);
AudioConnection          patchCord128(biquad3, 0, mixer7, 1);
AudioConnection          patchCord129(biquad3, 0, mixer16, 1);
AudioConnection          patchCord130(biquad3, 0, mixer17, 1);
AudioConnection          patchCord131(biquad3, 0, mixer18, 1);
AudioConnection          patchCord132(biquad3, 0, mixer19, 1);
AudioConnection          patchCord133(biquad3, 0, mixer21, 0);
AudioConnection          patchCord134(biquad3, 0, mixer22, 0);
AudioConnection          patchCord135(biquad3, rms2);
AudioConnection          patchCord136(waveformMod108, bitcrusher108);
AudioConnection          patchCord137(waveformMod109, bitcrusher109);
AudioConnection          patchCord138(waveformMod107, bitcrusher107);
AudioConnection          patchCord139(biquad2, 0, mixer5, 0);
AudioConnection          patchCord140(biquad2, 0, mixer4, 0);
AudioConnection          patchCord141(biquad2, 0, mixer7, 0);
AudioConnection          patchCord142(biquad2, 0, mixer6, 0);
AudioConnection          patchCord143(biquad2, rms1);
AudioConnection          patchCord144(waveformMod105, bitcrusher105);
AudioConnection          patchCord145(waveformMod106, bitcrusher106);
AudioConnection          patchCord146(waveformMod104, bitcrusher104);
AudioConnection          patchCord147(waveformMod102, bitcrusher102);
AudioConnection          patchCord148(waveformMod103, bitcrusher103);
AudioConnection          patchCord149(waveformMod101, bitcrusher101);
AudioConnection          patchCord150(mixer6, 0, multiply2, 0);
AudioConnection          patchCord151(mixer6, 0, mixer8, 0);
AudioConnection          patchCord152(vel_dc4, envelope107);
AudioConnection          patchCord153(vel_dc4, envelope108);
AudioConnection          patchCord154(bitcrusher111, 0, mixer116, 1);
AudioConnection          patchCord155(bitcrusher112, 0, mixer116, 2);
AudioConnection          patchCord156(bitcrusher110, 0, mixer116, 0);
AudioConnection          patchCord157(dc2, 0, multiply3, 1);
AudioConnection          patchCord158(vel_dc3, envelope105);
AudioConnection          patchCord159(vel_dc3, envelope106);
AudioConnection          patchCord160(bitcrusher108, 0, mixer112, 1);
AudioConnection          patchCord161(bitcrusher109, 0, mixer112, 2);
AudioConnection          patchCord162(bitcrusher107, 0, mixer112, 0);
AudioConnection          patchCord163(vel_dc2, envelope103);
AudioConnection          patchCord164(vel_dc2, envelope104);
AudioConnection          patchCord165(bitcrusher105, 0, mixer108, 1);
AudioConnection          patchCord166(bitcrusher106, 0, mixer108, 2);
AudioConnection          patchCord167(bitcrusher104, 0, mixer108, 0);
AudioConnection          patchCord168(vel_dc1, envelope101);
AudioConnection          patchCord169(vel_dc1, envelope102);
AudioConnection          patchCord170(bitcrusher102, 0, mixer101, 1);
AudioConnection          patchCord171(bitcrusher103, 0, mixer101, 2);
AudioConnection          patchCord172(bitcrusher101, 0, mixer101, 0);
AudioConnection          patchCord173(dc3, 0, multiply2, 1);
AudioConnection          patchCord174(mixer19, 0, waveformMod6, 1);
AudioConnection          patchCord175(mixer19, 0, waveformMod5, 1);
AudioConnection          patchCord176(mixer19, 0, waveformMod4, 1);
AudioConnection          patchCord177(envelope107, 0, mixer113, 3);
AudioConnection          patchCord178(envelope105, 0, mixer109, 3);
AudioConnection          patchCord179(multiply3, 0, waveformMod2, 1);
AudioConnection          patchCord180(mixer9, 0, waveformMod2, 0);
AudioConnection          patchCord181(envelope103, 0, mixer105, 3);
AudioConnection          patchCord182(mixer8, 0, waveformMod1, 0);
AudioConnection          patchCord183(envelope101, 0, mixer103, 3);
AudioConnection          patchCord184(multiply2, 0, waveformMod1, 1);
AudioConnection          patchCord185(mixer116, 0, filter104, 0);
AudioConnection          patchCord186(mixer112, 0, filter103, 0);
AudioConnection          patchCord187(mixer108, 0, filter102, 0);
AudioConnection          patchCord188(mixer101, 0, filter101, 0);
AudioConnection          patchCord189(mixer17, 0, waveformMod5, 0);
AudioConnection          patchCord190(mixer18, 0, waveformMod6, 0);
AudioConnection          patchCord191(dc1, envelope1);
AudioConnection          patchCord192(dc1, envelope2);
AudioConnection          patchCord193(dc1, 0, mixer122_1, 3);
AudioConnection          patchCord194(dc1, 0, mixer121_1, 3);
AudioConnection          patchCord195(dc1, 0, mixer120_1, 3);
AudioConnection          patchCord196(dc1, 0, mixer120_2, 3);
AudioConnection          patchCord197(dc1, 0, mixer121_2, 3);
AudioConnection          patchCord198(dc1, 0, mixer122_2, 3);
AudioConnection          patchCord199(dc1, 0, mixer120_3, 3);
AudioConnection          patchCord200(dc1, 0, mixer121_3, 3);
AudioConnection          patchCord201(dc1, 0, mixer122_3, 3);
AudioConnection          patchCord202(dc1, 0, mixer120_4, 3);
AudioConnection          patchCord203(dc1, 0, mixer121_4, 3);
AudioConnection          patchCord204(dc1, 0, mixer122_4, 3);
AudioConnection          patchCord205(dc1, 0, mixer120_5, 3);
AudioConnection          patchCord206(dc1, 0, mixer121_5, 3);
AudioConnection          patchCord207(dc1, 0, mixer122_5, 3);
AudioConnection          patchCord208(dc1, 0, mixer120_6, 3);
AudioConnection          patchCord209(dc1, 0, mixer121_6, 3);
AudioConnection          patchCord210(dc1, 0, mixer122_6, 3);
AudioConnection          patchCord211(dc1, 0, mixer120_7, 3);
AudioConnection          patchCord212(dc1, 0, mixer121_7, 3);
AudioConnection          patchCord213(dc1, 0, mixer122_7, 3);
AudioConnection          patchCord214(dc1, 0, mixer120_8, 3);
AudioConnection          patchCord215(dc1, 0, mixer121_8, 3);
AudioConnection          patchCord216(dc1, 0, mixer122_8, 3);
AudioConnection          patchCord217(mixer16, 0, waveformMod4, 0);
AudioConnection          patchCord218(mixer113, 0, filter104, 1);
AudioConnection          patchCord219(envelope108, 0, mixer115, 3);
AudioConnection          patchCord220(mixer109, 0, filter103, 1);
AudioConnection          patchCord221(mixer105, 0, filter102, 1);
AudioConnection          patchCord222(filter104, 0, mixer114, 0);
AudioConnection          patchCord223(filter104, 1, mixer114, 1);
AudioConnection          patchCord224(filter104, 2, mixer114, 2);
AudioConnection          patchCord225(envelope106, 0, mixer111, 3);
AudioConnection          patchCord226(mixer103, 0, filter101, 1);
AudioConnection          patchCord227(envelope104, 0, mixer107, 3);
AudioConnection          patchCord228(filter103, 0, mixer110, 0);
AudioConnection          patchCord229(filter103, 1, mixer110, 1);
AudioConnection          patchCord230(filter103, 2, mixer110, 2);
AudioConnection          patchCord231(envelope102, 0, mixer104, 3);
AudioConnection          patchCord232(filter102, 0, mixer106, 0);
AudioConnection          patchCord233(filter102, 1, mixer106, 1);
AudioConnection          patchCord234(filter102, 2, mixer106, 2);
AudioConnection          patchCord235(filter101, 0, mixer102, 0);
AudioConnection          patchCord236(filter101, 1, mixer102, 1);
AudioConnection          patchCord237(filter101, 2, mixer102, 2);
AudioConnection          patchCord238(envelope1, 0, mixer4, 3);
AudioConnection          patchCord239(envelope1, 0, mixer6, 3);
AudioConnection          patchCord240(envelope1, 0, mixer7, 3);
AudioConnection          patchCord241(waveformMod1, 0, mixer3, 0);
AudioConnection          patchCord242(waveformMod2, 0, mixer3, 1);
AudioConnection          patchCord243(pink1, 0, mixer3, 2);
AudioConnection          patchCord244(mixer114, 0, multiply9, 0);
AudioConnection          patchCord245(mixer110, 0, multiply8, 0);
AudioConnection          patchCord246(mixer106, 0, multiply7, 0);
AudioConnection          patchCord247(mixer102, 0, multiply6, 0);
AudioConnection          patchCord248(mixer115, 0, multiply9, 1);
AudioConnection          patchCord249(mixer104, 0, multiply6, 1);
AudioConnection          patchCord250(mixer111, 0, multiply8, 1);
AudioConnection          patchCord251(mixer107, 0, multiply7, 1);
AudioConnection          patchCord252(waveformMod4, 0, mixer15, 0);
AudioConnection          patchCord253(waveformMod5, 0, mixer15, 1);
AudioConnection          patchCord254(waveformMod6, 0, mixer15, 2);
AudioConnection          patchCord255(rect1, biquad1);
AudioConnection          patchCord256(mixer3, bitcrusher1);
AudioConnection          patchCord257(envelope2, 0, mixer5, 3);
AudioConnection          patchCord258(mixer4, 0, mixer10, 0);
AudioConnection          patchCord259(noise1, biquad5);
AudioConnection          patchCord260(biquad1, 0, mixer4, 2);
AudioConnection          patchCord261(biquad1, 0, mixer5, 2);
AudioConnection          patchCord262(biquad1, peak1);
AudioConnection          patchCord263(biquad1, 0, mixer6, 2);
AudioConnection          patchCord264(biquad1, 0, mixer7, 2);
AudioConnection          patchCord265(biquad1, 0, mixer16, 2);
AudioConnection          patchCord266(biquad1, 0, mixer17, 2);
AudioConnection          patchCord267(biquad1, 0, mixer18, 2);
AudioConnection          patchCord268(biquad1, 0, mixer19, 2);
AudioConnection          patchCord269(biquad1, 0, mixer22, 2);
AudioConnection          patchCord270(multiply9, 0, mixer28, 3);
AudioConnection          patchCord271(multiply8, 0, mixer28, 2);
AudioConnection          patchCord272(multiply7, 0, mixer28, 1);
AudioConnection          patchCord273(multiply6, 0, mixer28, 0);
AudioConnection          patchCord274(biquad5, 0, mixer15, 3);
AudioConnection          patchCord275(biquad5, 0, mixer101, 3);
AudioConnection          patchCord276(biquad5, 0, mixer108, 3);
AudioConnection          patchCord277(biquad5, 0, mixer116, 3);
AudioConnection          patchCord278(biquad5, 0, mixer112, 3);
AudioConnection          patchCord279(biquad5, 0, mixer117, 3);
AudioConnection          patchCord280(biquad5, 0, mixer124, 3);
AudioConnection          patchCord281(biquad5, 0, mixer128, 3);
AudioConnection          patchCord282(biquad5, 0, mixer132, 3);
AudioConnection          patchCord283(bitcrusher1, 0, filter1, 0);
AudioConnection          patchCord284(mixer5, 0, multiply1, 1);
AudioConnection          patchCord285(mixer5, rms4);
AudioConnection          patchCord286(mixer10, 0, filter1, 1);
AudioConnection          patchCord287(envelope3, 0, mixer21, 3);
AudioConnection          patchCord288(lfo3_5, crush3_5);
AudioConnection          patchCord289(lfo3_6, crush3_6);
AudioConnection          patchCord290(lfo2_5, crush2_5);
AudioConnection          patchCord291(lfo2_6, crush2_6);
AudioConnection          patchCord292(lfo3_7, crush3_7);
AudioConnection          patchCord293(lfo1_5, crush1_5);
AudioConnection          patchCord294(lfo1_6, crush1_6);
AudioConnection          patchCord295(lfo2_7, crush2_7);
AudioConnection          patchCord296(lfo1_7, crush1_7);
AudioConnection          patchCord297(lfo3_8, crush3_8);
AudioConnection          patchCord298(lfo2_8, crush2_8);
AudioConnection          patchCord299(lfo1_8, crush1_8);
AudioConnection          patchCord300(mixer15, bitcrusher2);
AudioConnection          patchCord301(vel_cv2, envelope3);
AudioConnection          patchCord302(vel_cv2, envelope4);
AudioConnection          patchCord303(mixer28, 0, mixer27, 0);
AudioConnection          patchCord304(crush3_5, biquad22);
AudioConnection          patchCord305(crush3_6, biquad25);
AudioConnection          patchCord306(crush2_5, biquad21);
AudioConnection          patchCord307(crush2_6, biquad24);
AudioConnection          patchCord308(crush3_7, biquad28);
AudioConnection          patchCord309(crush1_5, biquad20);
AudioConnection          patchCord310(crush1_6, biquad23);
AudioConnection          patchCord311(crush2_7, biquad27);
AudioConnection          patchCord312(filter1, 0, multiply1, 0);
AudioConnection          patchCord313(crush1_7, biquad26);
AudioConnection          patchCord314(crush3_8, biquad31);
AudioConnection          patchCord315(crush2_8, biquad30);
AudioConnection          patchCord316(mixer21, 0, filter2, 1);
AudioConnection          patchCord317(crush1_8, biquad29);
AudioConnection          patchCord318(biquad20, 0, mixer122_5, 0);
AudioConnection          patchCord319(biquad20, 0, mixer120_5, 0);
AudioConnection          patchCord320(biquad20, 0, mixer121_5, 0);
AudioConnection          patchCord321(biquad20, 0, mixer118, 0);
AudioConnection          patchCord322(biquad20, 0, mixer123, 0);
AudioConnection          patchCord323(biquad22, 0, mixer122_5, 2);
AudioConnection          patchCord324(biquad22, 0, mixer120_5, 2);
AudioConnection          patchCord325(biquad22, 0, mixer121_5, 2);
AudioConnection          patchCord326(biquad22, 0, mixer118, 2);
AudioConnection          patchCord327(biquad22, 0, mixer123, 2);
AudioConnection          patchCord328(biquad23, 0, mixer122_6, 0);
AudioConnection          patchCord329(biquad23, 0, mixer120_6, 0);
AudioConnection          patchCord330(biquad23, 0, mixer121_6, 0);
AudioConnection          patchCord331(biquad23, 0, mixer125, 0);
AudioConnection          patchCord332(biquad23, 0, mixer127, 0);
AudioConnection          patchCord333(biquad25, 0, mixer122_6, 2);
AudioConnection          patchCord334(biquad25, 0, mixer120_6, 2);
AudioConnection          patchCord335(biquad25, 0, mixer121_6, 2);
AudioConnection          patchCord336(biquad25, 0, mixer125, 2);
AudioConnection          patchCord337(biquad25, 0, mixer127, 2);
AudioConnection          patchCord338(biquad21, 0, mixer122_5, 1);
AudioConnection          patchCord339(biquad21, 0, mixer120_5, 1);
AudioConnection          patchCord340(biquad21, 0, mixer121_5, 1);
AudioConnection          patchCord341(biquad21, 0, mixer118, 1);
AudioConnection          patchCord342(biquad21, 0, mixer123, 1);
AudioConnection          patchCord343(bitcrusher2, 0, filter2, 0);
AudioConnection          patchCord344(biquad24, 0, mixer122_6, 1);
AudioConnection          patchCord345(biquad24, 0, mixer120_6, 1);
AudioConnection          patchCord346(biquad24, 0, mixer121_6, 1);
AudioConnection          patchCord347(biquad24, 0, mixer125, 1);
AudioConnection          patchCord348(biquad24, 0, mixer127, 1);
AudioConnection          patchCord349(biquad26, 0, mixer122_7, 0);
AudioConnection          patchCord350(biquad26, 0, mixer120_7, 0);
AudioConnection          patchCord351(biquad26, 0, mixer121_7, 0);
AudioConnection          patchCord352(biquad26, 0, mixer129, 0);
AudioConnection          patchCord353(biquad26, 0, mixer131, 0);
AudioConnection          patchCord354(biquad28, 0, mixer122_7, 2);
AudioConnection          patchCord355(biquad28, 0, mixer120_7, 2);
AudioConnection          patchCord356(biquad28, 0, mixer121_7, 2);
AudioConnection          patchCord357(biquad28, 0, mixer129, 2);
AudioConnection          patchCord358(biquad28, 0, mixer131, 2);
AudioConnection          patchCord359(filter2, 0, mixer20, 0);
AudioConnection          patchCord360(filter2, 1, mixer20, 1);
AudioConnection          patchCord361(filter2, 2, mixer20, 2);
AudioConnection          patchCord362(biquad27, 0, mixer122_7, 1);
AudioConnection          patchCord363(biquad27, 0, mixer120_7, 1);
AudioConnection          patchCord364(biquad27, 0, mixer121_7, 1);
AudioConnection          patchCord365(biquad27, 0, mixer129, 1);
AudioConnection          patchCord366(biquad27, 0, mixer131, 1);
AudioConnection          patchCord367(envelope4, 0, mixer22, 3);
AudioConnection          patchCord368(biquad29, 0, mixer122_8, 0);
AudioConnection          patchCord369(biquad29, 0, mixer120_8, 0);
AudioConnection          patchCord370(biquad29, 0, mixer121_8, 0);
AudioConnection          patchCord371(biquad29, 0, mixer133, 0);
AudioConnection          patchCord372(biquad29, 0, mixer135, 0);
AudioConnection          patchCord373(biquad31, 0, mixer122_8, 2);
AudioConnection          patchCord374(biquad31, 0, mixer120_8, 2);
AudioConnection          patchCord375(biquad31, 0, mixer121_8, 2);
AudioConnection          patchCord376(biquad31, 0, mixer133, 2);
AudioConnection          patchCord377(biquad31, 0, mixer135, 2);
AudioConnection          patchCord378(biquad30, 0, mixer122_8, 1);
AudioConnection          patchCord379(biquad30, 0, mixer120_8, 1);
AudioConnection          patchCord380(biquad30, 0, mixer121_8, 1);
AudioConnection          patchCord381(biquad30, 0, mixer133, 1);
AudioConnection          patchCord382(biquad30, 0, mixer135, 1);
AudioConnection          patchCord383(multiply1, 0, mixer1, 1);
AudioConnection          patchCord384(multiply1, 0, mixer2, 1);
AudioConnection          patchCord385(multiply1, 0, mixer11, 0);
AudioConnection          patchCord386(multiply1, 0, mixer12, 0);
AudioConnection          patchCord387(mixer27, 0, mixer12, 2);
AudioConnection          patchCord388(mixer27, 0, mixer11, 2);
AudioConnection          patchCord389(mixer27, 0, mixer13, 1);
AudioConnection          patchCord390(mixer27, 0, mixer14, 1);
AudioConnection          patchCord391(mixer20, 0, multiply4, 0);
AudioConnection          patchCord392(mixer22, 0, multiply4, 1);
AudioConnection          patchCord393(mixer22, rms5);
AudioConnection          patchCord394(i2s1, 0, mixer1, 0);
AudioConnection          patchCord395(i2s1, 0, mixer3, 3);
AudioConnection          patchCord396(i2s1, 0, notefreq1, 0);
AudioConnection          patchCord397(i2s1, 0, rect1, 0);
AudioConnection          patchCord398(i2s1, 0, mixer12, 3);
AudioConnection          patchCord399(i2s1, 1, mixer2, 0);
AudioConnection          patchCord400(mixer122_5, 0, waveformMod114, 0);
AudioConnection          patchCord401(mixer122_6, 0, waveformMod117, 0);
AudioConnection          patchCord402(mixer121_5, 0, waveformMod113, 0);
AudioConnection          patchCord403(mixer121_6, 0, waveformMod116, 0);
AudioConnection          patchCord404(mixer120_5, 0, waveformMod115, 0);
AudioConnection          patchCord405(mixer122_7, 0, waveformMod120, 0);
AudioConnection          patchCord406(mixer120_6, 0, waveformMod118, 0);
AudioConnection          patchCord407(mixer121_7, 0, waveformMod119, 0);
AudioConnection          patchCord408(mixer120_7, 0, waveformMod121, 0);
AudioConnection          patchCord409(mixer122_8, 0, waveformMod123, 0);
AudioConnection          patchCord410(mixer121_8, 0, waveformMod122, 0);
AudioConnection          patchCord411(mixer120_8, 0, waveformMod124, 0);
AudioConnection          patchCord412(mixer11, freeverbs1);
AudioConnection          patchCord413(mixer12, delay1);
AudioConnection          patchCord414(multiply4, 0, mixer11, 1);
AudioConnection          patchCord415(multiply4, 0, mixer13, 0);
AudioConnection          patchCord416(multiply4, 0, mixer14, 0);
AudioConnection          patchCord417(multiply4, 0, mixer12, 1);
AudioConnection          patchCord418(waveformMod116, bitcrusher116);
AudioConnection          patchCord419(freeverbs1, 0, mixer1, 3);
AudioConnection          patchCord420(freeverbs1, 1, mixer2, 3);
AudioConnection          patchCord421(waveformMod117, bitcrusher117);
AudioConnection          patchCord422(waveformMod118, bitcrusher118);
AudioConnection          patchCord423(waveformMod113, bitcrusher113);
AudioConnection          patchCord424(waveformMod114, bitcrusher114);
AudioConnection          patchCord425(waveformMod115, bitcrusher115);
AudioConnection          patchCord426(waveformMod119, bitcrusher119);
AudioConnection          patchCord427(waveformMod120, bitcrusher120);
AudioConnection          patchCord428(waveformMod121, bitcrusher121);
AudioConnection          patchCord429(delay1, 0, dlyfade0, 0);
AudioConnection          patchCord430(delay1, 1, dlyfade1, 0);
AudioConnection          patchCord431(delay1, 2, dlyfade2, 0);
AudioConnection          patchCord432(delay1, 3, dlyfade3, 0);
AudioConnection          patchCord433(delay1, 4, dlyfade4, 0);
AudioConnection          patchCord434(delay1, 5, dlyfade5, 0);
AudioConnection          patchCord435(delay1, 6, dlyfade6, 0);
AudioConnection          patchCord436(delay1, 7, dlyfade7, 0);
AudioConnection          patchCord437(waveformMod122, bitcrusher122);
AudioConnection          patchCord438(waveformMod123, bitcrusher123);
AudioConnection          patchCord439(waveformMod124, bitcrusher124);
AudioConnection          patchCord440(vel_dc6, envelope111);
AudioConnection          patchCord441(vel_dc6, envelope112);
AudioConnection          patchCord442(bitcrusher116, 0, mixer124, 1);
AudioConnection          patchCord443(bitcrusher117, 0, mixer124, 2);
AudioConnection          patchCord444(bitcrusher118, 0, mixer124, 0);
AudioConnection          patchCord445(vel_dc5, envelope109);
AudioConnection          patchCord446(vel_dc5, envelope110);
AudioConnection          patchCord447(bitcrusher113, 0, mixer117, 1);
AudioConnection          patchCord448(bitcrusher114, 0, mixer117, 2);
AudioConnection          patchCord449(bitcrusher115, 0, mixer117, 0);
AudioConnection          patchCord450(dlyfade1, 0, mixer23, 1);
AudioConnection          patchCord451(vel_dc7, envelope113);
AudioConnection          patchCord452(vel_dc7, envelope114);
AudioConnection          patchCord453(dlyfade5, 0, mixer24, 1);
AudioConnection          patchCord454(bitcrusher119, 0, mixer128, 1);
AudioConnection          patchCord455(bitcrusher120, 0, mixer128, 2);
AudioConnection          patchCord456(bitcrusher121, 0, mixer128, 0);
AudioConnection          patchCord457(dlyfade3, 0, mixer23, 3);
AudioConnection          patchCord458(dlyfade7, 0, mixer24, 3);
AudioConnection          patchCord459(vel_dc8, envelope115);
AudioConnection          patchCord460(vel_dc8, envelope116);
AudioConnection          patchCord461(bitcrusher122, 0, mixer132, 1);
AudioConnection          patchCord462(bitcrusher123, 0, mixer132, 2);
AudioConnection          patchCord463(bitcrusher124, 0, mixer132, 0);
AudioConnection          patchCord464(mixer1, 0, i2s2, 0);
AudioConnection          patchCord465(mixer1, 0, usb1, 0);
AudioConnection          patchCord466(mixer2, 0, i2s2, 1);
AudioConnection          patchCord467(mixer2, 0, usb1, 1);
AudioConnection          patchCord468(dlyfade0, 0, mixer23, 0);
AudioConnection          patchCord469(dlyfade2, 0, mixer23, 2);
AudioConnection          patchCord470(envelope111, 0, mixer125, 3);
AudioConnection          patchCord471(envelope109, 0, mixer118, 3);
AudioConnection          patchCord472(dlyfade4, 0, mixer24, 0);
AudioConnection          patchCord473(dlyfade6, 0, mixer24, 2);
AudioConnection          patchCord474(envelope113, 0, mixer129, 3);
AudioConnection          patchCord475(mixer124, 0, filter106, 0);
AudioConnection          patchCord476(envelope115, 0, mixer133, 3);
AudioConnection          patchCord477(mixer117, 0, filter105, 0);
AudioConnection          patchCord478(mixer128, 0, filter107, 0);
AudioConnection          patchCord479(mixer132, 0, filter108, 0);
AudioConnection          patchCord480(mixer24, 0, mixer14, 3);
AudioConnection          patchCord481(mixer24, 0, mixer25, 1);
AudioConnection          patchCord482(mixer23, 0, mixer13, 3);
AudioConnection          patchCord483(mixer23, 0, mixer25, 0);
AudioConnection          patchCord484(mixer125, 0, filter106, 1);
AudioConnection          patchCord485(envelope112, 0, mixer127, 3);
AudioConnection          patchCord486(mixer118, 0, filter105, 1);
AudioConnection          patchCord487(filter106, 0, mixer126, 0);
AudioConnection          patchCord488(filter106, 1, mixer126, 1);
AudioConnection          patchCord489(filter106, 2, mixer126, 2);
AudioConnection          patchCord490(envelope110, 0, mixer123, 3);
AudioConnection          patchCord491(filter105, 0, mixer119, 0);
AudioConnection          patchCord492(filter105, 1, mixer119, 1);
AudioConnection          patchCord493(filter105, 2, mixer119, 2);
AudioConnection          patchCord494(mixer129, 0, filter107, 1);
AudioConnection          patchCord495(envelope114, 0, mixer131, 3);
AudioConnection          patchCord496(filter107, 0, mixer130, 0);
AudioConnection          patchCord497(filter107, 1, mixer130, 1);
AudioConnection          patchCord498(filter107, 2, mixer130, 2);
AudioConnection          patchCord499(mixer133, 0, filter108, 1);
AudioConnection          patchCord500(envelope116, 0, mixer135, 3);
AudioConnection          patchCord501(filter108, 0, mixer134, 0);
AudioConnection          patchCord502(filter108, 1, mixer134, 1);
AudioConnection          patchCord503(filter108, 2, mixer134, 2);
AudioConnection          patchCord504(mixer13, 0, mixer1, 2);
AudioConnection          patchCord505(mixer14, 0, mixer2, 2);
AudioConnection          patchCord506(mixer126, 0, multiply11, 0);
AudioConnection          patchCord507(mixer119, 0, multiply10, 0);
AudioConnection          patchCord508(mixer127, 0, multiply11, 1);
AudioConnection          patchCord509(mixer25, 0, mixer11, 3);
AudioConnection          patchCord510(mixer130, 0, multiply12, 0);
AudioConnection          patchCord511(mixer123, 0, multiply10, 1);
AudioConnection          patchCord512(mixer134, 0, multiply13, 0);
AudioConnection          patchCord513(mixer131, 0, multiply12, 1);
AudioConnection          patchCord514(mixer135, 0, multiply13, 1);
AudioConnection          patchCord515(multiply11, 0, mixer29, 1);
AudioConnection          patchCord516(multiply10, 0, mixer29, 0);
AudioConnection          patchCord517(multiply12, 0, mixer29, 2);
AudioConnection          patchCord518(multiply13, 0, mixer29, 3);
AudioConnection          patchCord519(mixer29, 0, mixer27, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=2985,132
// GUItool: end automatically generated code
