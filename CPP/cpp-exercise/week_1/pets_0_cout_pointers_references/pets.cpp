// if you use cout (encouraged), you will need these three lines:
#include <iostream>
using std::cout;
using std::endl;

// if you want to use printf, you will need this line:
#include <cstdio>
// you can try cout as well as printf in order to compare these two solutions

// TODO: write the missing functions here
// Declare function `printPetInfo`
// Parameter `char*`; gibt Tierart an
// Parameter `unsigned`; Tieralter
void printPetInfo(const char* pet_species, unsigned pet_age) 
{
  cout << "That's a " << pet_species << "-year-old" << pet_age << endl;
}

void happyBirthdayWithPointer (unsigned* petAge) {
  (*petAge)++;
}

void happyBirthdayWithReference (unsigned& petAge ) {
  petAge++;
}

int main()
{
  char first_pet_species[] = "bunny";
  unsigned first_pet_age = 3;
  char second_pet_species[] = "dog";
  unsigned second_pet_age = 14;

  printPetInfo(first_pet_species, first_pet_age);
  printPetInfo(second_pet_species, second_pet_age);
  
  happyBirthdayWithPointer(&first_pet_age);
  happyBirthdayWithReference(second_pet_age);
  
  printPetInfo(first_pet_species, first_pet_age);
  printPetInfo(second_pet_species, second_pet_age);
     return 0;
}
