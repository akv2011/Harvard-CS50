import csv
with open("favourites.csv","r") as file:
    reader=csv.DictReader(file)

    #read fiel as dict with key values as even if change position of 
    #column still can print it 
    
    for rw in reader:
        favourite=rw["language"]
        print(favourite)