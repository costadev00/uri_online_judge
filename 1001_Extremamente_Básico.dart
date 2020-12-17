import 'dart:io';

void main() {
  int n1 = int.parse(stdin.readLineSync());
  int n2 = int.parse(stdin.readLineSync());
  var n3 = n1 + n2;

  print("X = ${n3}");
}
