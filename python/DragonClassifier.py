print("DRAGON ADOPTION PROGRAM")
name = input("Enter your name :- ")
age = int(input("Enter dragon's age :- "))

print("Hello",name)

if age < 0:
	print("Invalid input")
elif age ==0 :
	print("Egg detected")
elif age <5:
	print("Baby Dragon")
elif age == 5 and age < 10 :
    print("Young Dragon")
elif age >=10 :
	print("Old Dragon")
