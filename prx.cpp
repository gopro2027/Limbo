//assume all necessary code and files are included from the real menu

#include "Mods.h"

void loop() {
  //all looped functions go into here

}

void hook() {
  //this is the hooked function
  loop();
  if (menuIsOpen) {
    //this really doesn't need to be used
  }
}
