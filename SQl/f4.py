import csv

with open("favourites.csv","r") as file:
    reader=csv.DictReader(file)
    count=dict()
    for rw in reader:
        fav=rw["language"]
        if fav in count:
            count[fav]+=1
        else:
            count[fav]=1

'''def get_val(language):
 return count[language]
'''

for fav in sorted(count, key=lambda language :count[language],reverse=True):
    print(f"{fav},{count[fav]}")