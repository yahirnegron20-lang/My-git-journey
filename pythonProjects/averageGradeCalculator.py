#created Aug 14 2026
#@author: Yahir

import math

"""Calculate the average grade of someone base on all of their grades."""

numgrades = int(input("Enter how many grades you have: "))
grades = []

for i in range(numgrades):
    grade = float(input(f"Enter grade {i + 1}: "))
    grades.append(grade)

if grades:
    average_grade = sum(grades) / len(grades)
    print(f"The average grade is: {average_grade}")
else:
    print("No grades given.")