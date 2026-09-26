#pragma once

typedef struct {
	uint16_t *frames;
	uint8_t num_frames;
} Frames;

typedef struct {
	Frames *animation;
	uint8_t num_animations;
} Animation;

uint16_t farr_1[] = {0x0101,0x0102,0x0104,0x0108,0x0110,0x0120,0x0140,0x0180};

uint16_t farr_2[] = {0x0001,0x0202,0x0304,0x0408,0x0510,0x0620,0x0740,0x0880};

uint16_t farr_3[] = {0x0201,0x0301,0x0401,0x0501,0x0601,0x0701,0x0810,0x0801};


Frames led_frames[] = {
		{.frames = farr_1, .num_frames = 8, },
		{.frames = farr_2, .num_frames = 8, },
		{.frames = farr_3, .num_frames = 8, }
};

Animation leds = {
		.animation = led_frames,
		.num_animations = 3,
};
