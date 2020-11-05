import 'dart:io';

void main() {
  var l, c;
  l = int.parse(stdin.readLineSync());
  c = int.parse(stdin.readLineSync());
  if ((l % 2 == 0 && c % 2 == 0) || (l % 2 != 0 && c % 2 != 0)) {
    print("1");
  } else {
    print("0");
  }
}
