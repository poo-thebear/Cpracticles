#ques1
customers=dict(name= "Suho", age=29, salary= 30000, email="customer@gmail.com", phn=9999988888, city="chennai")

#ques2
print(customers.get('name'))
print(customers.get('phn'))

#ques3
if 'email' in customers.keys():
    print(customers.get('email'))
else:
    print("No Email Found!")

#ques4
a= 'city' in customers.keys()
print(a) 

#ques5
print(customers.keys())
#ques6
print(customers.values())

#ques7
for key,value in customers.items():
    print("Your",key, "is",value)

#ques8
customers2=dict(hobby="painting", job="teacher")
customers.update(customers2)
print(customers)

#ques9
L1= dict.fromkeys(['Fries','Pizza','Fanta','Medicine'],100)
print(L1)

#ques10
Pname=['Maggi', 'Yipee', 'Top Ramen', 'Oats', 'Chocolate']
Pprice=[45, 30, 45, 80, 80]
prod= dict(zip(Pname, Pprice))
print(prod)

#ques11
prod.pop('Yipee')
print(prod)

#ques12
prod.clear()
print(prod)

