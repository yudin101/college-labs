#include <stdbool.h>
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
  int set1[] = {3, 4, 5, 6, 1};
  int set2[] = {4, 7, 8, 2, 1};

  int set1_length = sizeof(set1) / sizeof(int);
  int set2_length = sizeof(set2) / sizeof(int);

  // Declare an array to hold the union values
  int set_union[100];
  // Variable to keep record of the index in which last value was inserted
  int current_index = 0;

  // Insert all the elements from the first set into the union array
  for (int i = 0; i < set1_length; i++) {
    set_union[current_index] = set1[i];
    current_index++;
  }

  // Loop through the second set
  for (int i = 0; i < set2_length; i++) {
    // Variable to later check if current element of second set is found
    // in the union array
    bool found = false;

    // Loop through the already existing values of the union array
    for (int j = 0; j < current_index; j++) {

      // If the current value from second set is found in union set,
      // set the found variable to true
      if (set_union[j] == set2[i]) {
        found = true;
      }
    }

    // Insert the current element from the second set into the union
    // array only if current element from the second set was not already
    // present in the union array
    if (!found) {
      set_union[current_index] = set2[i];
      current_index++;
    }
  }

  print_set("Set 1", set1, set1_length);
  print_set("Set 2", set2, set2_length);
  print_set("Union", set_union, current_index);

  return 0;
}
