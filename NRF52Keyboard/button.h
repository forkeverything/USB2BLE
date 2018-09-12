#ifndef BUTTON_H
  #define BUTTON_H
  
  /**
   * ON/OFF RGB Button
   */
  #define BUTTON_RED_PIN    (A0)
  #define BUTTON_GREEN_PIN  (A1)
  #define BUTTON_BLUE_PIN   (A2)
  #define COMMON_ANODE

  /**
   * Color Codes
   * Can't switch on strings so we define as ints
   */
  #define OFF 0
  #define ORANGE 1
  #define GREEN 2
  #define BLUE 3
  #define BLUERED 4
  #define PURPLE 5
  #define REDBLUE 6
  #define RED 7

  void buttonRGB(int red, int green, int blue);
  void buttonColor(int color);
  
#endif 
