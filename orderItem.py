print("""Menu
    1.Gimbap
    2.Ramen
    3.Candies
    4.Mangoshake""")

gimbap="Gimbap"
ramen="Ramen"
candy= "Candy"
mango= "Mangoshake"


order= int(input("\nEnter option number: "))
quantity= int(input("Enter number of plates/quantity: "))

def serve(number, item):
    if(quantity>number):
        a=quantity-number
        print("\nYour order exceeded by", a, "items\n")
    else:
        print("---Your", item, "is ready---\n")

if(order==1):
    serve(4, gimbap)
elif(order==2):
    serve(5, ramen)
elif(order==3):
    serve(1, candy)
elif(order==4):
    serve(2, mango)
else:
    print("Enter correct option number")
    
