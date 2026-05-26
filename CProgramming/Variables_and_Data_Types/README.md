# Variables and Data Types

This folder contains introductory C programming exercises, multiple-choice questions (MCQs), and basic programs focusing on variable declaration, initialization, data types, swapping logic, arithmetic operations, and precision.

## Contents

### 1. Multiple-Choice Questions (MCQs)
* **File:** [`mcq.txt`](./mcq.txt)
* **Description:** A set of 11 multiple-choice questions testing fundamental C variables, format specifiers (`%d`, `%f`, `%c`, `%lu`), variable scope, data type precision, overflow, and type conversion.

### 2. Variable Swap Challenge
* **File:** [`swap.c`](./swap.c)
* **Description:** A C program that swaps the values of two integer variables (`a = 5` and `b = 10`) using a temporary variable, and prints their new values on a single line.
* **Output:**
  ```text
  10 5
  ```

### 3. Temperature Converter (Celsius to Fahrenheit)
* **File:** [`temp_converter_1.c`](./temp_converter_1.c)
* **Description:** A C program that converts a temperature in Celsius (`20.5`) to Fahrenheit using floating-point math.
* **Output:**
  ```text
  68.900002
  ```

### 4. Temperature Converter - II (Fahrenheit to Celsius)
* **File:** [`temp_converter_2.c`](./temp_converter_2.c)
* **Description:** A C program that converts a temperature in Fahrenheit (`98.3`) to Celsius.
* **Output:**
  ```text
  36.833332
  ```

### 5. BMI Calculator
* **File:** [`bmi_calculator.c`](./bmi_calculator.c)
* **Description:** Computes the Body Mass Index (BMI) of Chef given a height of `1.82` meters and a weight of `72` kg.
* **Output:**
  ```text
  21.736506
  ```

---

## How to Compile and Run

To compile and run any of the C programs, open your terminal, navigate to this folder, and run:

```bash
gcc <filename.c> -o <output_name>
./<output_name>
```

**Example:**
```bash
gcc bmi_calculator.c -o bmi_calculator
./bmi_calculator
```
