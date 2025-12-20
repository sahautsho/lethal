# accept the age of the user as input. convert the user input to float data type
age = float(input("enter age of user"))
print(age)
print(type(age))


# ask the user to input the year, make, model and color of their car, and print a formatted statement like "2018 Blue Chevrolet Silverado."
year = int(input("enter the year"))
make = input("enter car make")
model = input("enter the model")
color = input('enter the color of the car')
"My car is {} {} {} {}".format(year, color, make, model)
