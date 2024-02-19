'''from flask import Flask,render_template, request

app=Flask(__name__)
@app.route("/")
def indec():
    return "Hello,World!"'''


'''
from flask import Flask, render_template, request

app = Flask(__name__)

@app.route("/")
def index():
    if "name" in request.args:
        name = request.args["name"]
    else:
        name = "world"
    return render_template("index.html", placeholder=name)
# To right click and view html in page source option

#request.args is flask special dict which 
#can accept url specific request like url/?name=Arun      
        
'''

'''
from flask import Flask, render_template, request

app = Flask(__name__)

@app.route("/")
def index():
    name=request.args.get=("name","world")
    return render_template("index1.html", placeholder=name)
'''

'''
#for index1
from flask import Flask, render_template, request

app = Flask(__name__)

@app.route("/")
def index():
    return render_template("index1.html")
'''
'''
#using greet and index1
from flask import Flask, render_template, request

app = Flask(__name__)

@app.route("/")
def index():
    return render_template("index1.html")

@app.route("/Greet")
def greet():
    return render_template("greet.html",name=request.args.get('name',"world"))
    '''
'''
#usign index2 layout and greet2
from flask import Flask, render_template, request

app = Flask(__name__)

@app.route("/")
def index():
    return render_template("index2.html")

@app.route("/Greet")
def greet():
    return render_template("greet2.html",name=request.args.get('name',"world"))
'''
'''
#using post index so that what i type in search box dopesn't show on url
from flask import Flask, render_template, request

app = Flask(__name__)

@app.route("/")
def index():
    return render_template("index3.html")

@app.route("/Greet",methods=["POST"])
def greet():
    return render_template("greet2.html",name=request.args.get('name',"world"))
#after executing hello,arun see in source-paylod as dev what went to server 
'''
#index4 
from flask import Flask, render_template, request

app = Flask(__name__)

@app.route("/",methods=["GET",'POST'])
def index():
    if request.method=="GET":
        return render_template("index4.html")
    elif request.method=="POST":
        #return render_template("greet2.html",name=request.args.get ("name","world"))
        #need request .from as post otherwise just prints hello world 
        return render_template("greet2.html",name=request.form.get("name","world"))
