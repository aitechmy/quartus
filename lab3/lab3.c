#define switches (volatile char*) 0x00002010
#define leds (volatile char*) 0x00002000


void main()
{
while(1)
*leds=*switches;
}