from tkinter import *

root = Tk()

root.title("Minimum Number of Coins")

root.geometry("500x500")
root.config(bg="black")

mylabel = Label(root, text="                                ", bg="black").pack()

mylabel1 = Label(root, text="Enter the amount: ").pack()
e1 = Entry(root)
e1.pack()

mylabel2 = Label(root, text="                                ", bg="black").pack()

def findMinR():
    mylabel3 = Label(root, text="     Following is minimal number of change in Rupee denomination for the entered amount:      ").pack()
    V = int(e1.get())
    rcoins = [1, 2, 5, 10, 20, 50,
              100,200, 500, 2000]
    n = len(rcoins)

    # Traverse through all coinsmination
    i = n - 1

    while (i >= 0):
        a = 0
        # Find coinsminations
        while (V >= rcoins[i]):
            V = V - rcoins[i]
            a = a + 1
        if (a > 0):
            a1 = str(a)
            coins = str(rcoins[i])
            finalans = str("we need " + a1 + " coins of " + coins + " denomination")
            mylabel4 = Label(root, text=finalans).pack(fill=BOTH)
        i = i - 1

myButton1 = Button(root, text="Rupee Denominations", command=findMinR)
myButton1.place(x=70, y=90)

def findMinD():
    mylabel5 = Label(root, text="     Following is minimal number of change in Dollar denomination for the entered amount:      ").pack()
    V1 = int(e1.get())
    dcoins = [1,2,5,10,20,50,100]
    n = len(dcoins)

    # Traverse through all coinsmination
    i = n - 1

    while (i >= 0):
        a = 0
        # Find coinsminations
        while (V1 >= dcoins[i]):
            V1 -= dcoins[i]
            a = a + 1
        if (a > 0):
            a1 = str(a)
            coins = str(dcoins[i])
            finalans = str("we need " + a1 + " coins of " + coins + " denomination")
            mylabel6 = Label(root, text=finalans).pack(fill=BOTH)
        i -= 1

myButton2 = Button(root, text="Dollar Denominations   ", command=findMinD)
myButton2.place(x=300, y=90)

def findMinE():
    mylabel7 = Label(root, text="     Following is minimal number of change in Euro denomination for the entered amount:      ").pack()
    V2 = int(e1.get())
    ecoins = [1,2,5,10,20,50,100,200]
    n = len(ecoins)

    # Traverse through all coinsmination
    i = n - 1

    while (i >= 0):
        a = 0
        # Find coinsminations
        while (V2 >= ecoins[i]):
            V2 -= ecoins[i]
            a = a + 1
        if (a > 0):
            a1 = str(a)
            coins = str(ecoins[i])
            finalans = str("we need " + a1 + " coins of " + coins + " denomination")
            mylabel8 = Label(root, text=finalans).pack(fill=BOTH)
        i -= 1

myButton3 = Button(root, text="Euro Denominations   ", command=findMinE)
myButton3.place(x=70, y=120)


def findMinAED():
    mylabel9 = Label(root, text="     Following is minimal number of change in Dirham denomination for the entered amount:      ").pack()
    V3 = int(e1.get())
    aedcoins = [1,2,5,10,20,50,100,200,500,1000]
    n = len(aedcoins)

    # Traverse through all coinsmination
    i = n - 1

    while (i >= 0):
        a = 0
        # Find coinsminations
        while (V3 >= aedcoins[i]):
            V3 -= aedcoins[i]
            a = a + 1
        if (a > 0):
            a1 = str(a)
            coins = str(aedcoins[i])
            finalans = str("we need " + a1 + " coins of " + coins + " denomination")
            mylabel10 = Label(root, text=finalans).pack(fill=BOTH)
        i -= 1

myButton4 = Button(root, text="Dirham Denominations", command = findMinAED)
myButton4.place(x=300, y=120)

root.mainloop()