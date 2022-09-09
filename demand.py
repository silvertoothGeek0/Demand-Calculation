in_1 = input("What is the first price value?: ")
in_2 = input("What is the second price value?: ")
in_3 = input("What is the first demand value?: ")
in_4 = input("What is the second demand value?: ")

#Q = a+bP

#This finds the slope/b value of your question

b_1 = float(in_4) - float(in_3)
b_2 = float(in_2) - float(in_1)
b_fin = int(b_1/b_2)
print()
print(b_fin)
print()
print(" This is your b value in the equation Q = a+bP")
print()

a = int(in_3) - int(b_fin) * int(in_1)

print(a)

print()
print("This is your a value in the equation Q = a+bP")
print()

#This outputs and prints your answer

print("The demand equation is then")
print("Q = " + str(a) + "+" + str(b_fin) + "P")




