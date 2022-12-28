#include <iostream>

int main() {
  // Prompt the user to enter an integer N
  std::cout << "Enter an integer N: ";

  // Read N from the user
  int N;
  std::cin >> N;

  // Find the last digit of N
  int last_digit = N % 10;

  // Calculate the remaining part of N
  int remaining = N / 10;

  // Initialize K to 1
  int K = 1;

  // Keep looping until we find the smallest positive integer K such that X is divisible by N
  while (true) {
    // Calculate X by adding the result of multiplying K by the last digit of N to the remaining part of N
    int X = K * last_digit + remaining;

    // If X is divisible by N, we have found the smallest positive integer K such that X is divisible by N
    if (X % N == 0) {
      break;
    }

    // Otherwise, increment K and try again
    K++;
  }

  // Output the smallest positive integer K such that X is divisible by N
  std::cout << "The smallest positive integer K such that X is divisible by N is: " << K << std::endl;

  return 0;
}
