"""
ques 1:
for i in range(5,51):
    if(i%2==0):
        print(i)
        


ques2
sum=0
for i in range(0,3):
    marks=int(input("Enter Marks: "))
    sum=sum+marks
    
print(sum)



ques 3
bill=0
print("Menu\n0:Exit\n1:Pizza\tRs 90\n2:French Fries\tRs 50\n3:Sauce\tRs 50\n4:Burger\tRs 100")
choice=int(input("Enter your choice: "))
if(choice==1):
    print("You Ordered Pizza")
    bill=bill+90
elif(choice==2):
    print("You Ordered French Fries")
    bill=bill+50
elif(choice==3):
    print("You Ordered Sauce")
    bill=bill+50
elif(choice==4):
    print("You Ordered Burger")
    bill=bill+100
print ("Your Bill: ", bill)



ques 4a:
for i in range(4):
    for j in range(i+1):
        print(j+1, end="")
    print("\n")



ques 4b:
for i in range(4):
    i=4-i
    print("#"*i)



ques 4c:
num=1
for i in range(1, 5):
    for j in range(1, i+1):
        if(num==10):
            print(0)
            break
        print(num, end="")
        num+=1
    print("\n")
"""
import re
print("Registration Form: ")
name=input("Enter full name: ")
dob= input("Enter DOB: ")
phn= input("Enter Phone number: ")
course= input("Enter course name: ")

name1= '[A-Za-z]+'
dob1= '[1-31][/][1-12][/][1980-2022]'
phn1= '[8-9]\d{9}'
course1= '[A-Z]+'

if (re.search(name1,name) or re.search(dob1, dob) or re.search(phn1, phn) or re.search(course1, course)):
    print("Enter Correct Value")