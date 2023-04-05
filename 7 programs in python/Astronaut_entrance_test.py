print("Enter your age : ")
age = int(input())
if age >= 18 and age <= 45:
    print("Enter your weight : ")
    weight = float(input())
    if weight >= 50 and weight <= 80:
        print("Are you a smoker?(y/n) :")
        smoker = input()
        if smoker == "y":
            print("You are eligible.")
        else:
            print("You are not eligible.")
    else:
        print("You are not eligible")
else:
    print("You are ineligible to be an astronaut.")
