"""#ques1
Subject=[]
for i in range(3):
    sName= input("Enter Subject name: ")
    Subject.append(sName)
print(Subject)
"""

#ques2
Subjectname=[]
Subjectmarks=[]
internal=[]
external=[]
for i in range(3):
    sName= input("Enter Subject name: ")
    for j in range(1):
        value= int(input("Enter internal marks: "))
        value1= int(input("Enter external marks: "))
    if(value>40 or value1>60):
        print("Enter correct value")
        break
    internal.append(value)
    external.append(value1)
    Subjectname.append(sName)  
Subjectmarks.append(internal)
Subjectmarks.append(external)
  
print("Subject:",Subjectmarks)

#ques3
total=[]
for i in range(len(internal)):
    total.append(internal[i]+external[i])

p=0
for elem in total:
    p=p+1
    print("Total Marks of Subject:",p, elem )

#ques 9
for name in range(len(Subjectname)):
    if(total[name]<40):
        print("Subject name(marks below 40):",Subjectname[name])


sumI=0
sumE=0
for i in range(len(internal)):

#ques 4
    if(internal[i]<16):
        internal[i]= (16-internal[i])+internal[i]
    sumI= sumI + internal[i]
print("Internal marks:",internal)

#ques 5
count=0
for elem in internal:
    if(elem==16):
        count= count+1
print("Number of elements with exactly 16 marks in internal are: ", count)

#ques6
newlist=[]
newlist.extend(total)
newSubjects=[27,21,32,48,50]
newlist.extend(newSubjects)
print("Newlist:",newlist)

#ques 7
total.sort(reverse=True)
print("Descending order of Total",total)

#ques8
total2=[72, 84, 63, 48, 55]
size= 0#cmp(total, total2)
if(size==-1):
    print("total2 > total")

elif(size==1):
    print("total2 < total")

elif(size==0):
    print("total2 = total")


#ques 10
for marks in total:
    if(marks<40):
        total.remove(marks)
print(total)

#ques 11
print("Maximum in Total",max(total))
print("Minimum in Total",min(total))


