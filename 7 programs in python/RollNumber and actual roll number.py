def fibo(f1, f2, n):
    pass

# Main
while True:    #This simulates a Do Loop
    print("Enter your roll number in the format 220XY:")
    rollNumber = int(input())
    if not(rollNumber < 22000 or rollNumber > 22099): break   #Exit loop
n = 0
rno = rollNumber
for i in range(0, 4 + 1, 1):
    temp = float(rno) / 10
    n = n + rno - temp * 10
    rno = float(rno) / 10
print(n)
arrayMonth = [""] * (12)

actualRollnumber = rollNumber % 100
print(actualRollnumber)
month = actualRollnumber % 12
print("The month is:" + str(month))
arrayMonth[0] = "January"
arrayMonth[1] = "Febraury"
arrayMonth[2] = "March"
arrayMonth[3] = "April"
arrayMonth[4] = "May"
arrayMonth[5] = "June"
arrayMonth[6] = "July"
arrayMonth[7] = "August"
arrayMonth[8] = "September"
arrayMonth[9] = "October"
arrayMonth[10] = "November"
arrayMonth[11] = "December"
charMonth = arrayMonth[month - 1]
print(charMonth)
