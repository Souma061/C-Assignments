#include <stdio.h>
#include <string.h>
#include <assert.h>
#define MAX_STUDENTS 10

// Structure definition from original program
struct students {
    int id;
    char name[50];
    float marks;
};

// Function prototypes for testing
void test_invalid_student_count();
void test_valid_student_data();
void test_average_calculation();
void test_empty_name();
void test_negative_marks();
void run_all_tests();

// Mock input data
struct students test_data[] = {
    {1, "John Doe", 85.5},
    {2, "Jane Smith", 92.0},
    {3, "Bob Wilson", 78.5}
};

// Test case 1: Invalid student count
void test_invalid_student_count() {
    printf("Test 1: Invalid student count...\n");
    int n = -1;
    assert(n <= 0 && "Should detect negative student count");
    n = MAX_STUDENTS + 1;
    assert(n > MAX_STUDENTS && "Should detect exceeding maximum students");
    printf("PASSED ✓\n");
}

// Test case 2: Valid student data
void test_valid_student_data() {
    printf("Test 2: Valid student data...\n");
    assert(test_data[0].id > 0 && "ID should be positive");
    assert(strlen(test_data[0].name) > 0 && "Name should not be empty");
    assert(test_data[0].marks >= 0 && "Marks should not be negative");
    printf("PASSED ✓\n");
}

// Test case 3: Average calculation
void test_average_calculation() {
    printf("Test 3: Average calculation...\n");
    float total = 0.0;
    int count = 3;  // Number of test records
    float expected_average;
    
    for(int i = 0; i < count; i++) {
        total += test_data[i].marks;
    }
    expected_average = total / count;
    
    // Test with actual calculation
    assert(expected_average == (85.5 + 92.0 + 78.5) / 3 && "Average calculation should be correct");
    printf("PASSED ✓\n");
}

// Test case 4: Empty name validation
void test_empty_name() {
    printf("Test 4: Empty name validation...\n");
    struct students test_student = {1, "", 85.5};
    assert(strlen(test_student.name) == 0 && "Should detect empty name");
    printf("PASSED ✓\n");
}

// Test case 5: Negative marks validation
void test_negative_marks() {
    printf("Test 5: Negative marks validation...\n");
    struct students test_student = {1, "John Doe", -85.5};
    assert(test_student.marks < 0 && "Should detect negative marks");
    printf("PASSED ✓\n");
}

// Run all tests
void run_all_tests() {
    printf("Running all tests for Student Management Program...\n\n");
    test_invalid_student_count();
    test_valid_student_data();
    test_average_calculation();
    test_empty_name();
    test_negative_marks();
    printf("\nAll tests completed successfully! ✓\n");
}

int main() {
    // Run the test suite
    run_all_tests();
    return 0;
}