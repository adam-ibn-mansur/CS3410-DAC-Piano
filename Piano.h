//Adam Habil / Philip Sobczak
//Dr. Iliya Georgiev
//CS 3410 - Embedded Systems
//12.4.2018

// **************Piano_Init*********************
// Initialize piano key inputs
// Input: none
// Output: none
void Piano_Init(void); 
  

// **************Piano_In*********************
// Input from piano key inputs
// Input: none 
// Output: 0 to 15 depending on keys
// 0x01 is key 0 pressed, 0x02 is key 1 pressed,
// 0x04 is key 2 pressed, 0x08 is key 3 pressed
//Switches connected to PE0-3 are used as keys
unsigned long Piano_In(void);
