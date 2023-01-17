greetings= ['Hi!', 'Hello', 'Howdy!', 'Umm..Hi']
godbye= ['Bye', 'Ha..Get the hell out. Bye ', 'Goodnight', 'Goodbye']

keywords=['depressed', 'book', 'new jeans', 'chocolates']
ans=['Me too buddy', 'books are used by mellenials use internet\nbe a material girl', 'u got money for that?', 'i want chocolates']

user= input("talk to bot: ")
user=user.lower()
while(keyword_found!=False):
    keyword_found=False
    for i in keywords:
        if (keywords[i]in user):
            print("Bot: " + ans[i])
            keyword_found=True
    if(keyword_found==False):
        print("I don't have a fucking clue what u r saying")
