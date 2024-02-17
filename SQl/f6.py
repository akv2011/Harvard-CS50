import csv

with open("favourites.csv","r") as file:
    reader=csv.DictReader(file)
    count=dict()
    for rw in reader:
        fav=rw["problem"]
        if fav in count:
            count[fav]+=1
        else:
            count[fav]=1

fav=input("Favourite:")
if fav in count:
    print(f"{fav}:{count[fav]}")