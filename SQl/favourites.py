import csv as c
with open("favourites.csv","r") as file:


# just a open file
#The with statement ensures that the file is
#properly closed after its suite finishes,
#even if an exception occurs during the execution.


    reader=c.reader(file)
    
    #tells csv to do something in file 
    #You create a CSV reader object (reader) using the c.reader() function.
    # This reader object allows you to iterate over the rows in the CSV file.
    
    for rw in reader:
        print(rw[1])