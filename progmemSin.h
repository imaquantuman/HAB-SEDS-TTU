// The scale of the second sin table
#define TABLE2_SCALE 1.0f


// Store only 1/4th of a sin wave (plus one byte) to save progmem space.
// afsk_read_sample() does the math for the other 3/4ths.
uint16_t afsk_sine_table1[129] = {
2047,
2072,
2097,
2122,
2147,
2173,
2198,
2223,
2248,
2273,
2298,
2323,
2348,
2372,
2397,
2422,
2447,
2471,
2496,
2520,
2545,
2569,
2593,
2617,
2642,
2666,
2689,
2713,
2737,
2761,
2784,
2807,
2831,
2854,
2877,
2900,
2923,
2945,
2968,
2990,
3012,
3035,
3056,
3078,
3100,
3121,
3143,
3164,
3185,
3206,
3226,
3247,
3267,
3287,
3307,
3327,
3346,
3366,
3385,
3404,
3422,
3441,
3459,
3477,
3495,
3513,
3530,
3547,
3564,
3581,
3598,
3614,
3630,
3646,
3662,
3677,
3692,
3707,
3721,
3736,
3750,
3764,
3777,
3791,
3804,
3816,
3829,
3841,
3853,
3865,
3876,
3887,
3898,
3909,
3919,
3929,
3939,
3949,
3958,
3967,
3975,
3984,
3992,
3999,
4007,
4014,
4021,
4027,
4034,
4040,
4045,
4051,
4056,
4060,
4065,
4069,
4073,
4076,
4080,
4083,
4085,
4087,
4089,
4091,
4093,
4094,
4094,
4095,
4095,
};


#define SINSCALE(x)     (uint16_t)((((float)(x)-2047.0f) * TABLE2_SCALE) + 2047.49f)


// After noticing on the oscilloscope that one of the frequency signals come accross at
// higher aplitutde than the others, I added the ability to have two sine-wave tables,
// one a scale from the other. The scale (TABLE2_SCALE) was should be determined experimentally.
uint16_t afsk_sine_table2[129] = {
  SINSCALE(2047),
  SINSCALE(2072),
  SINSCALE(2097),
  SINSCALE(2122),
  SINSCALE(2147),
  SINSCALE(2173),
  SINSCALE(2198),
  SINSCALE(2223),
  SINSCALE(2248),
  SINSCALE(2273),
  SINSCALE(2298),
  SINSCALE(2323),
  SINSCALE(2348),
  SINSCALE(2372),
  SINSCALE(2397),
  SINSCALE(2422),
  SINSCALE(2447),
  SINSCALE(2471),
  SINSCALE(2496),
  SINSCALE(2520),
  SINSCALE(2545),
  SINSCALE(2569),
  SINSCALE(2593),
  SINSCALE(2617),
  SINSCALE(2642),
  SINSCALE(2666),
  SINSCALE(2689),
  SINSCALE(2713),
  SINSCALE(2737),
  SINSCALE(2761),
  SINSCALE(2784),
  SINSCALE(2807),
  SINSCALE(2831),
  SINSCALE(2854),
  SINSCALE(2877),
  SINSCALE(2900),
  SINSCALE(2923),
  SINSCALE(2945),
  SINSCALE(2968),
  SINSCALE(2990),
  SINSCALE(3012),
  SINSCALE(3035),
  SINSCALE(3056),
  SINSCALE(3078),
  SINSCALE(3100),
  SINSCALE(3121),
  SINSCALE(3143),
  SINSCALE(3164),
  SINSCALE(3185),
  SINSCALE(3206),
  SINSCALE(3226),
  SINSCALE(3247),
  SINSCALE(3267),
  SINSCALE(3287),
  SINSCALE(3307),
  SINSCALE(3327),
  SINSCALE(3346),
  SINSCALE(3366),
  SINSCALE(3385),
  SINSCALE(3404),
  SINSCALE(3422),
  SINSCALE(3441),
  SINSCALE(3459),
  SINSCALE(3477),
  SINSCALE(3495),
  SINSCALE(3513),
  SINSCALE(3530),
  SINSCALE(3547),
  SINSCALE(3564),
  SINSCALE(3581),
  SINSCALE(3598),
  SINSCALE(3614),
  SINSCALE(3630),
  SINSCALE(3646),
  SINSCALE(3662),
  SINSCALE(3677),
  SINSCALE(3692),
  SINSCALE(3707),
  SINSCALE(3721),
  SINSCALE(3736),
  SINSCALE(3750),
  SINSCALE(3764),
  SINSCALE(3777),
  SINSCALE(3791),
  SINSCALE(3804),
  SINSCALE(3816),
  SINSCALE(3829),
  SINSCALE(3841),
  SINSCALE(3853),
  SINSCALE(3865),
  SINSCALE(3876),
  SINSCALE(3887),
  SINSCALE(3898),
  SINSCALE(3909),
  SINSCALE(3919),
  SINSCALE(3929),
  SINSCALE(3939),
  SINSCALE(3949),
  SINSCALE(3958),
  SINSCALE(3967),
  SINSCALE(3975),
  SINSCALE(3984),
  SINSCALE(3992),
  SINSCALE(3999),
  SINSCALE(4007),
  SINSCALE(4014),
  SINSCALE(4021),
  SINSCALE(4027),
  SINSCALE(4034),
  SINSCALE(4040),
  SINSCALE(4045),
  SINSCALE(4051),
  SINSCALE(4056),
  SINSCALE(4060),
  SINSCALE(4065),
  SINSCALE(4069),
  SINSCALE(4073),
  SINSCALE(4076),
  SINSCALE(4080),
  SINSCALE(4083),
  SINSCALE(4085),
  SINSCALE(4087),
  SINSCALE(4089),
  SINSCALE(4091),
  SINSCALE(4093),
  SINSCALE(4094),
  SINSCALE(4094),
  SINSCALE(4095),
  SINSCALE(4095),

};
