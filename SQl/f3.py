import csv
with open("favourites.csv","r") as file:
    reader=csv.DictReader(file)
    count={}#dict()
    #creating a dictionary
    for rw in reader:
        favourite=rw["language"]
        if favourite in count:
            count[favourite]+=1
        else:
            count[favourite]=1#initailzation if brand new key as 1

'''
for rw in reader:: This loop iterates over each row (rw) in the CSV file.

fav = rw["language"]: It retrieves the value in the "language" 
column from the current row and assigns it to the variable fav.

if fav in count:: It checks if the language fav is already a key in the count dictionary.

If fav is already in count, then count[fav] += 1 increments the count for that language.

If fav is not in count, then count[fav] = 1 initializes the count for that language to 1.



'''

#for favourite in count:
for favourite in sorted(count):
    #for favourite in sorted(count, reverse=True):
    print(f"{favourite}",{count[favourite]})
