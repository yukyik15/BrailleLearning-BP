# potentiometer.py
from flask import Flask, request, render_template
import serial
import time
import gtts  
from playsound import playsound

app = Flask(__name__)
@app.route('/')
def index():
    return render_template('index.html')

@app.route('/button', methods=['POST'])
def receive():
    word_data = request.json
    print(request.json)
    ser = serial.Serial('/dev/cu.usbmodem101', 9600, timeout=1)
    time.sleep(2)
    ser.write(bytes(word_data["word"], 'utf-8'))
    
    t1=gtts.gTTS(word_data["word"])
    t1.save("welcome.mp3")
    playsound("welcome.mp3")

    return word_data

if __name__ == '_main_':
    app.run()

# make sure the 'COM#' is set according the Windows Device Manager
# ser = serial.Serial('/dev/cu.usbmodem101', 9600, timeout=1)
# time.sleep(2)

# while True:
#     line = ser.readline()   # read a byte
#     if line:
#         string = line.decode()  # convert the byte string to a unicode string
#         #num = int(string) # convert the unicode string to an int
#         print(string)

# #ser.close()
