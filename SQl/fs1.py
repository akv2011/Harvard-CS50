from cs50 import SQL

db=SQL("sqlite:///favourites.db")#not cs50 specific
favourite=input("Favourite:")

#rows=db.execute("SELECT COUNT(*) AS n FROM favourites WHERE problem='Mario'")
rows=db.execute("SELECT COUNT(*) AS n FROM favourites WHERE problem=?",favourite)

#for row in rows:
#Using a loop (for row in rows) is
#more common when you expect multiple rows 
#in the result set, which is not the case with aggregate functions like COUNT.

'''In your code, you are using rows[0] because the db.execute method returns 
a list of dictionaries, where each dictionary represents a row of the result 
set. In this case, you are expecting a single row with the count, 
so you can directly access it using rows[0].

If you were expecting multiple rows in the result set,
 you might use a loop to iterate through them. However, 
 since you're using an aggregate function (COUNT), it typically 
 returns a single value, and you don't need a loop.'''






row=rows[0]
print(row["n"])