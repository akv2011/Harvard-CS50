from cs50 import SQL

db=SQL("sqlite:///favourites.db")#not cs50 specific
favourite=input("Favourite:")

rows=db.execute("SELECT * FROM favourites WHERE problem='Mario'")
#exceute cs50 specific

for row in rows:
    print(row["Timestamp"])