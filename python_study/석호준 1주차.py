from datetime import date
name = str(input("input your name: "))
stdID = int(input("input your stdID: "))
birth = str(input("input your birth(YYMMDD): "))
today = date.today()
age = int(today.year) - int("1900")-int(birth[:2])+1

print("*--<STUDENT CARD>--*")
print(f"lname: {name:>12}l")
print(f"lstdID: {stdID:>11}l")
print(f"lage : {age:>12}l")
print("*------------------*")
