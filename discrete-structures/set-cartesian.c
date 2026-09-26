#include <stdio.h>

// Function to print the contents of a set
void print_set(char *name, int *set, int size) {
  printf("%s: { ", name);
  for (int i = 0; i < size; i++) {
    // Print no comma if not last element
    if (i == size - 1) {
      printf("%d ", set[i]);
    } else {
      printf("%d, ", set[i]);
    }
  }
  printf("}\n");
}

int main() {
  // Initialize two arrays as sets
  int set1[] = {3, 4};
  int set2[] = {4, 7};

  // Get the lengths
  int set1_length = sizeof(set1) / sizeof(int);
  int set2_length = sizeof(set2) / sizeof(int);

  // Get the number of total possible pairs
  int number_of_pairs = set1_length * set2_length;

  // 2d array to hold the cartesian products
  int cartesian_product[number_of_pairs][2];
  int current_index = 0;

  // Loop through the sets and fill the cartesian_product array
  for (int i = 0; i < set1_length; i++) {
    for (int j = 0; j < set2_length; j++) {
      cartesian_product[current_index][0] = set1[i];
      cartesian_product[current_index][1] = set2[j];
      current_index++;
    }
  }

  print_set("Set A", set1, set1_length);
  print_set("Set B", set2, set2_length);

  printf("A x B: { ");
  for (int i = 0; i < number_of_pairs; i++) {
    for (int j = 0; j < 1; j++) {
      if (i == number_of_pairs - 1) {
        printf("(%d, %d)", cartesian_product[i][j],
               cartesian_product[i][j + 1]);
      } else {

        printf("(%d, %d), ", cartesian_product[i][j],
               cartesian_product[i][j + 1]);
      }
    }
  }
  printf(" }\n");

  return 0;
}
