typedef enum { Red, Green, Blue } Color;
const char* f(Color c) {
  switch (c) {
    case Red: return "Red";
    case Green: return "Green";
    case Blue: return "Blue";
  }
  return "Unknown color";   /* Necessary */
}