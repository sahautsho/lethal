class Student:
    print("college name is DSU\n")
    print("adding new students in database\n")

    def __init__(self, name, marks, roll):
        self.name = name
        self.marks = marks
        self.roll = roll
        print("first year")


s1 = Student("karan\n", "marks obtained = 97\n", "roll = 50\n")
print(s1.name, s1.marks, s1.roll)

s2 = Student("arjun\n", "marks = 88\n", "roll = 31\n")
print(s2.name, s2.marks, s2.roll)
