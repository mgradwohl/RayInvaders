#pragma once

#include <chrono>

//SO MANY CONSTANTS! AAAAAAAH!

//I didn't wanna make PLAYER_SIZE, ENEMY_SIZE, BULLET_SIZE, so I just defined the base size.
constexpr unsigned char BASE_SIZE = 16;
constexpr unsigned char ENEMY_BULLET_SPEED = 2;
//I explained this in "Enemy.hpp". AND I DON'T LIKE TO REPEAT MYSELF!
constexpr unsigned char ENEMY_HIT_TIMER_DURATION = 2;
//The more enemies we kill, the faster they become.
constexpr unsigned char ENEMY_MOVE_PAUSE_DECREASE = 1;
//Setting this to 1 or even 0 results in terrible enemy movement. So don't do it.
//...
//...
//You're gonna do it anyway, aren't you?
constexpr unsigned char ENEMY_MOVE_PAUSE_MIN = 3;
//"Why not 64?" - you may ask. Well, it's because if we set it to 0, they will still have 1 frame pause. So 63 + 1 = 64.
constexpr unsigned char ENEMY_MOVE_PAUSE_START = 63;
constexpr unsigned char ENEMY_MOVE_PAUSE_START_MIN = 47;
constexpr unsigned char ENEMY_MOVE_SPEED = 2;
constexpr unsigned char ENEMY_TYPES = 3;
constexpr unsigned char EXPLOSION_ANIMATION_SPEED = 2;
//Same logic with ENEMY_MOVE_PAUSE_START.
constexpr unsigned char FAST_RELOAD_DURATION = 7;
//The transition to the next level will last 64 frames or about 1 second.
constexpr unsigned char NEXT_LEVEL_TRANSITION = 64;
constexpr unsigned char PLAYER_BULLET_SPEED = 4;
constexpr unsigned char PLAYER_MOVE_SPEED = 2;
constexpr unsigned char POWERUP_ANIMATION_SPEED = 16;
constexpr unsigned char POWERUP_SPEED = 2;
constexpr unsigned char POWERUP_TYPES = 4;
constexpr unsigned char RELOAD_DURATION = 31;
constexpr unsigned char SCREEN_RESIZE = 4;
constexpr unsigned char TOTAL_LEVELS = 8;
constexpr unsigned char UFO_ANIMATION_SPEED = 8;
constexpr unsigned char UFO_MOVE_SPEED = 1;

//There are 64 enemies. So the probability that at least one of them shoots is 1 - (1 - 1 / 4096)^64 = 1.55%
//Keep in mind that we do this every frame.
constexpr unsigned short ENEMY_SHOOT_CHANCE = 4096;
constexpr unsigned short ENEMY_SHOOT_CHANCE_INCREASE = 64;
constexpr unsigned short ENEMY_SHOOT_CHANCE_MIN = 1024;
constexpr unsigned short POWERUP_DURATION = 512;
constexpr unsigned short SCREEN_HEIGHT = 180;
constexpr unsigned short SCREEN_WIDTH = 320;
//The UFO will appear after this number of frames.
constexpr unsigned short UFO_TIMER_MAX = 1024;
constexpr unsigned short UFO_TIMER_MIN = 768;

constexpr std::chrono::microseconds FRAME_DURATION(16667);

typedef struct
{
	unsigned int width;
	unsigned int height;
} IntSize;

typedef struct
{
	unsigned int x;
	unsigned int y;
} IntPoint;

typedef struct
{
	unsigned int left;
	unsigned int top;
	unsigned int width;
	unsigned int height;
} IntRect;

typedef struct
{
	unsigned int x;
	unsigned int y;
} IntVector2;

typedef struct
{
	unsigned int r;
	unsigned int g;
	unsigned int b;
	unsigned int a;
} Color;

typedef struct
{
	unsigned int r;
	unsigned int g;
	unsigned int b;
} Color3;

typedef unsigned char byte;
typedef unsigned short word;