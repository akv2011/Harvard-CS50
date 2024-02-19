'''
from flask import Flask,render_template,request

app=Flask(__name__)

@app.route("/")
def index():
    return render_template("index.html") 

'''
'''
#index1
from flask import Flask,render_template,request

app=Flask(__name__)

@app.route("/")
def index():
    return render_template("index1.html") 
'''

'''
#index2 success and layout
from flask import Flask,render_template,request

app=Flask(__name__)

@app.route("/")
def index():
    return render_template("index2.html") 


@app.route("/register",methods=["POST"])
def register():
    return render_template("success.html")
'''
'''
#Storing registered in a dict
from flask import Flask,render_template,request

app=Flask(__name__)

REGISTRANTS={}

@app.route("/")
def index():
    return render_template("index2.html") 


@app.route("/register",methods=["POST"])
def register():
    name=request.form.get("Name")
    sport=request.form.get("Sport")
    REGISTRANTS [name]=sport
    return render_template("success.html")

@app.route("/registrants")
def registrants():
    return render_template("registrants.html",registrants=REGISTRANTS)
'''
'''
#registrants 1
from flask import Flask,render_template,request

app=Flask(__name__)

REGISTRANTS={}

@app.route("/")
def index():
    return render_template("index2.html") 


@app.route("/register",methods=["POST"])
def register():
    name=request.form.get("Name")
    sport=request.form.get("Sport")
    REGISTRANTS [name]=sport
    return render_template("success.html")

@app.route("/registrants")
def registrants():
    return render_template("registrants1.html",registrants=REGISTRANTS)
#while accessing use /registrants not registrants1
'''
'''
#registrants1 and index3
from flask import Flask,render_template,request

app=Flask(__name__)

REGISTRANTS={}

@app.route("/")
def index():
    return render_template("index3.html") 


@app.route("/register",methods=["POST"])
def register():
    name=request.form.get("Name")
    sport=request.form.get("Sport")
    REGISTRANTS [name]=sport
    return render_template("success.html")

@app.route("/registrants")
def registrants():
    return render_template("registrants1.html",registrants=REGISTRANTS)
'''
#to prevent changing sports using source and changing slection in html code to some other sport
#index4.html

from flask import Flask,render_template,request

app=Flask(__name__)

SPORTS=[
    "Basketball",
    "Volleyball",
    "Football"
]

REGISTRANTS={}

@app.route("/")
def index():
    return render_template("index4.html",sports=SPORTS) 


@app.route("/register",methods=["POST"])
def register():
    name=request.form.get("Name")
    if not name:
        return render_template("failure.html")
    sport=request.form.get("Sport")
    if sport not in SPORTS:
        return render_template("failure.html")
    REGISTRANTS [name]=sport
    return render_template("success.html")

@app.route("/registrants")
def registrants():
    return render_template("registrants1.html",registrants=REGISTRANTS)
