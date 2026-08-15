#created Aug 14 2026
#@author: Yahir

import math

"""Calculate the average grade of someone base on all of their grades."""

while True:
    try:
        numgrades = int(input("Enter how many grades you have: "))
        break
    except ValueError:
        print("Please enter a valid number.", "\n")

grades = []

for i in range(numgrades):
    while True:
        try:
            grade = float(input(f"Enter grade {i + 1}: "))
            break
        except ValueError:
            print("Please enter a valid number.", "\n")
    grades.append(grade)

if grades:
    average_grade = sum(grades) / len(grades)
    print(f"The average grade is: {average_grade}")
else:
    print("No grades given.")