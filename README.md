# Decimal to Hexadecimal Converter (Recursive)
### Created by **Michael Black**  
**Course:** CMPS — Fall Data Structures  
**Date:** October 10, 2024  

A simple yet educational C++ program that converts a decimal number into its hexadecimal representation **using a recursive algorithm**.  
This project demonstrates recursion, string manipulation, modulus/division logic, and basic error handling.

---

# 📌 Program Features

- Converts **any non-negative decimal number** into hexadecimal  
- Uses a **recursive function** to build the hex string  
- Utilizes character mapping via a `switch` statement  
- Automatically **reverses** the output after recursion  
- Includes **full error handling** so the program never crashes on bad input  
- Clean formatting and easy to understand logic  

---

# 🔢 How the Conversion Works (Algorithm Steps)

1. Divide the number by **16** and store the **remainder**  
2. Keep dividing the quotient by 16 until the number becomes **less than 16**  
3. Convert each remainder into its hexadecimal character using:
   - `0–9`  
   - `A–F`  
4. Recursively build the result string  
5. **Reverse the string** to form the final hexadecimal output  

---

# 🧠 Recursive Function Logic

The recursive function performs:

- **Base Case:**  
  When `x < 16`, return its corresponding hex digit.

- **Recursive Case:**  
  - Compute the remainder  
  - Reduce the number (`x = x / 16`)  
  - Append the remainder’s hex value to the recursive result  

This continues until all divisions are complete.

---

# 🛡 Error Handling

The program validates user input using:

- `cin.fail()` checking  
- Clearing errors with `cin.clear()`  
- Removing invalid characters with `cin.ignore()`  
- Ensures the program **never breaks** from bad input

The input loop continues until a **valid non-negative integer** is provided.

---

# 💻 Code Structure Breakdown

### ## `hexa(int x, int y, string a)`
A recursive function that:

- Accepts the number to convert  
- Computes remainders  
- Maps each remainder to hex characters using a `switch`  
- Builds the hexadecimal string recursively  

---

### ## `main()`

1. Displays introduction  
2. Prompts user for input **with full input validation**  
3. Calls the recursive conversion function  
4. Reverses the resulting string  
5. Prints the final hexadecimal result  

---

# 📦 Variables Breakdown

### **int x**  
User’s input number (decimal).  
Validated by the input loop.

### **int y**  
Stores the remainder from division by 16.

### **string a**  
Accumulator string used during recursive building.

### **string HX**  
Final hexadecimal result string.

---