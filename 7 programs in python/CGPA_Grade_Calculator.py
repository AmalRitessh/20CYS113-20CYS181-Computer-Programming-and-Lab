print("Enter the numbers of students:")
n = int(input())
maths = [0] * (n)
social = [0] * (n)
science = [0] * (n)
rno = [0] * (n)
total = [0] * (n)
cGPA = [0] * (n)
name = [""] * (n)
grade = [""] * (n)
avg = [0] * (n)

for i in range(0, n - 1 + 1, 1):
    print("Enter the student name:")
    name[i] = input()
    print("Enter you roll number:")
    rno[i] = int(input())
    while True:    #This simulates a Do Loop
        print("Enter your marks in maths: (Valid marks 0-100)")
        maths[i] = int(input())
        if not(maths[i] < 0 or maths[i] > 100): break   #Exit loop
    while True:    #This simulates a Do Loop
        print("Enter your marks in social: (Valid marks 0-100)")
        social[i] = int(input())
        if not(social[i] < 0 or social[i] > 100): break   #Exit loop
    while True:    #This simulates a Do Loop
        print("Enter your marks in science: (Valid marks 0-100)")
        science[i] = int(input())
        if not(science[i] < 0 or science[i] > 100): break   #Exit loop
    total[i] = maths[i] + social[i] + science[i]
    avg[i] = float(total[i]) / 3
    cGPA[i] = avg[i] / 10
    if cGPA[i] < 5:
        grade[i] = "F"
    else:
        if cGPA[i] >= 5 and cGPA[i] <= 6:
            grade[i] = "E"
        else:
            if cGPA[i] > 6 and cGPA[i] <= 7:
                grade[i] = "D"
            else:
                if cGPA[i] > 7 and cGPA[i] <= 7.5:
                    grade[i] = "C"
                else:
                    if cGPA[i] > 7.5 and cGPA[i] <= 8:
                        grade[i] = "B"
                    else:
                        if cGPA[i] > 8 and cGPA[i] <= 8.5:
                            grade[i] = "B+"
                        else:
                            if cGPA[i] > 8.5 and cGPA[i] <= 9:
                                grade[i] = "A"
                            else:
                                if cGPA[i] > 9 and cGPA[i] <= 9.5:
                                    grade[i] = "A+"
                                else:
                                    if cGPA[i] > 9.5 and cGPA[i] <= 10:
                                        grade[i] = "S"
for i in range(0, n - 1 + 1, 1):
    print("Name:" + name[i])
    print("Roll number:" + str(rno[i]))
    print("Grade:" + grade[i])
