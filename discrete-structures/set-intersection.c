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
  int set1[] = {3, 4, 5, 6, 1, 7, 8};
  int set2[] = {4, 7, 8, 2, 1};

  // Length of the sets
  int set1_length = sizeof(set1) / sizeof(int);
  int set2_length = sizeof(set2) / sizeof(int);

  // Declare an array to hold the intersection values
  int set_intersection[100];
  // Variable to keep record of the index in which last value was inserted
  int current_index = 0;

  // Looping through the first set
  for (int i = 0; i < set1_length; i++) {
    // Looping through the second set
    for (int j = 0; j < set2_length; j++) {
      // Comparing if a certain element from the first set matches with
      // any element from the second set

      // If yes, insert that element to the intersection array
      if (set1[i] == set2[j]) {
        set_intersection[current_index] = set1[i];
        current_index++;
      }
    }
  }

  print_set("Set 1", set1, set1_length);
  print_set("Set 2", set2, set2_length);
  print_set("Intersection", set_intersection, current_index);

  return 0;
}
