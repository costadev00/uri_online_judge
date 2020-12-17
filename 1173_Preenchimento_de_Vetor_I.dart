import 'dart:io';

void main() {
  int x = int.parse(stdin.readLineSync());
  var list = new List(10);
  list[0] = x;
  print("N[0] = ${list[0]}");
  for (int i = 1; i < 10; i++) {
    list[i] = list[i - 1] * 2;
    print("N[${i}] = ${list[i]}");
  }
}
