// Create a structure
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];
};

struct myStructure copy(struct myStructure s1,struct myStructure s2){
    s2 = s1;
    return s2;
}

int main() {
  // Create a structure variable and assign values to it
  //no compilation error if declaration is missing parameters but logical errors.
  struct myStructure s1 = {33,'e',"gello"};

  // Print values
  printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

  //copy
  struct myStructure s2 = copy(s1,s2);

  printf("\n%d %c %s", s2.myNum, s2.myLetter, s2.myString);
  return 0;
}

//USING TYPEDEF

/*struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];
};

int main() {
  // Create a structure variable and assign values to it
  struct myStructure s1 = {13, 'B', "Some text"};

  // Print values
  printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

  return 0;
}*/


