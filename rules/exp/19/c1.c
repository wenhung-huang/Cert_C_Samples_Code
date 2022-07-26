
int main(){
int privileges;
 
if (invalid_login()) {
  if (allow_guests()) {
    privileges = 0;
  }
} else {
  privileges = 7;
}
}