#include <stdio.h>

void display_array(char *name, int *arr, int size) {
  printf("%s: { ", name);
  for (int i = 0; i < size; i++) {
    if (i == size - 1) {
      printf("%d ", arr[i]);
    } else {

      printf("%d, ", arr[i]);
    }
  }
  printf("}\n");
}

int main() {
  // Initialize two arrays as sets
  int set1[] = {1, 2, 3, 4, 5};
  int set2[] = {4, 5, 6, 7, 8};

  // Get the lengths
  int set1_length = sizeof(set1) / sizeof(int);
  int set2_length = sizeof(set2) / sizeof(int);

  // An array for the common elements between two sets
  int common_elemets[100];
  // Array for the final difference
  int set_difference[100];
  // Keeping track of the current index
  int current_index = 0;

  // Looping through set A
  for (int i = 0; i < set1_length; i++) {
    // Looping through set b
    for (int j = 0; j < set2_length; j++) {
      // Finding the common elements
      if (set1[i] == set2[j]) {
        common_elemets[current_index] = set1[i];
        // Keeping record of till which index values have been kept
        current_index++;
      }
    }
  }

  // Putting all the elements from set A to the difference except
  // the ones in the common_elemets array
  for (int i = 0; i < set1_length; i++) {
    if (!(common_elemets[i] == set1[i])) {
      set_difference[i] = set1[i];
    }
  }

  display_array("Set A", set1, set1_length);
  display_array("Set B", set2, set2_length);
  display_array("A - B", set_difference, set1_length - current_index);

  return 0;
}
