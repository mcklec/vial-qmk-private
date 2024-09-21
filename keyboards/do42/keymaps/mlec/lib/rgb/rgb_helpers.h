#include <stdbool.h>
#include <stdint.h>


void refresh_rgb(void);       // refreshes the activity timer and RGB, invoke whenever any activity happens
void check_rgb_timeout(void); // checks if enough time has passed for RGB to timeout
