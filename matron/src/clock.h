#pragma once

#include <lua.h>

void clock_init();
bool clock_schedule_resume_sleep(int thread_id, float seconds);
bool clock_schedule_resume_sync(int thread_id, float beats);
void clock_update_counter(int beats, float beat_duration);
int clock_counter_get();
void clock_sync(float quant);
void clock_cancel_all();
float clock_gettime_beats();
void clock_cancel(int);
void clock_cancel_coro(int);