# Reverse Polish Notation Evaluator using Stack – C++

This project was developed as part of the **Algorithms & Data Structures (159.201)** course in the Bachelor of Information Sciences with a major in Data Science at Massey University, New Zealand.

## 📘 Course Context
- **Course name:** 159.201 Algorithms & Data Structures  
- **Semester:** Semester 1, 2022  
- **Institution:** Massey University  
- **Program:** Bachelor of Information Sciences – Major in Data Science

## 📊 Project Overview
The assignment required the implementation of a C++ program that reads and evaluates a Reverse Polish Notation (RPN) expression using a stack implemented via a linked list.

The program:
- Reads the RPN expression from a `.txt` file (one element per line).
- Supports `+`, `-`, `*`, and `/` operators (integer division).
- Handles errors such as too many operators or operands.
- Displays each read step and the final result.

## 🧰 Technologies Used
- C++
- Linked list-based stack implementation
- File input
- Command line arguments

## 📁 Repository Structure

- `assig2.cpp` – Main C++ source file
- `Assignment2_2022.pdf` – Original assignment brief
- `README.md` – Project documentation

## ▶️ How to Compile and Run

To compile:
```bash
g++ -o rpn_calculator assig2.cpp
