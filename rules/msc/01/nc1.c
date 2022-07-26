typedef enum { Red, Green, Blue } Color;
const char* f(Color c) {
  switch (c) {
    case Red: return "Red";
    case Green: return "Green";
    case Blue: return "Blue";
  }
}
 
void g() {
  Color unknown = (Color)123;
  puts(f(unknown));
}