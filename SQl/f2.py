import csv
with open("favourites.csv","r") as file:
    reader=csv.DictReader(file)
    Scratch,C,Python =0,0,0#initialization
    for rw in reader:
        favourite=rw["language"]#square as dict
        if(favourite=="Scratch"):
            Scratch+=1
        elif(favourite=="C"):
            C+=1
        elif(favourite=="Python"):
            Python+=1

print(f"Scratch",{Scratch})
print(f"C",{C})
print(f"Python",{Python})