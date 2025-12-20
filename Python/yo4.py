# write a python program to take threee subjects as input find the average then if the average is above 90 print as distintion
# above 80 first class above 70 second class and fail below 70
sub1 = int(input("enter a sub1"))
sub2 = int(input("enter a sub2"))
sub3 = int(input("enter a sub3"))
avg = sub1+sub2+sub3/3
if avg > 90:
    print("distinction")
elif avg > 80 and avg <= 90:
    print("first class")
elif avg > 70 and avg <= 80:
    print("second class")
else:
    print("fail")
