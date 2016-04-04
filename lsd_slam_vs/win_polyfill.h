// Polyfills for some Windows functions

#pragma once

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <WinSock2.h>
#include <stdint.h>
#include <thread>
#include <chrono>

// http://stackoverflow.com/questions/10905892/equivalent-of-gettimeday-for-windows
int gettimeofday(struct timeval * tp, struct timezone * tzp);

int isnanf(float x);

void usleep(long long usec);
