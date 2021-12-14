#include <iostream>

int main() {
  
  int year = 0;
  
  std::cout << "Please enter a year \n";
  std::cin >> year;
  
  if (year < 1000 || year > 9999)  {
    std::cout << "Invalid Entry. Please pick a year between 1000 and 9999.\n";
    
  }
  else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)  {
    
    std::cout << year;
    std::cout << " is a leap year!\n";
  }
  
  else {
        std::cout << year;
        std::cout << " is NOT a leap year\n";
      }
  
      
      }
      
  

  
  
