#define FUSE0 A2
#define FUSE1 5
#define FUSE2 6
#define FUSE3 7
#define FUSE4 8
#define FUSE5 4
#define FUSE6 3
#define FUSE7 2

#define V24 A3
#if HW == POWER_HUB
	#define W1 9
#else
	#define W1 7
#endif 

#define CAN_CS 10
#define EXPANDER_CS 9
#define TFT_CS 8
#define TFT_RS 14 // A0


#define RS485_RE A1 // auf den basis nodes 1.0 ist es auf pin 9 verdrahtet... muss umverdrahtet werden.
//#define RS485_RE 9

#define SOFTSERIAL_TX A0 
#define SOFTSERIAL_RX 0 // there is no pin 0
