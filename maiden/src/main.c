#include "io.h"
#include "ui.h"


//-------------------------
//---- function definitions
  
int main(int argc, char** argv) {
  ui_init();
  // io_init launches chilt thread for ui_loop()
  if(io_init() == 0) {
	io_loop();   // waits for threads and children to exit
  }
  
}
