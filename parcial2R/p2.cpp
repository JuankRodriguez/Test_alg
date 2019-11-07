int digit_sum(int digit) {
  int respuesta = 0;
  if(digit == 0){
    return 0;
  }else{
    respuesta = digit%10;
    return respuesta + digit_sum(digit/10);
  }
}
