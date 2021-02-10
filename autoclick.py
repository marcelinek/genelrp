import keyboard
import pyautogui 

def clicker():
    while True:
        pyautogui.click()
        try:# it will stop clicking if key 'f8' is pressed 
            if keyboard.is_pressed('f8'):  
                print("Stopped")
                break
        except: # if 'f8' is not pressed, it continues clicking
            continue  
while True:  
    try:# if key 'f7' is pressed, it starts clicking
        if keyboard.is_pressed('f7'):  
            print("Started")
            clicker() 
    except: # if 'f7' is not pressed, it listens for the key press
        continue 
    try:# if key 'esc' is pressed, it quits from the program
        if keyboard.is_pressed('esc'):  
            print("Thanks for using!")
            break
            sys.exit(0)
    except: # if 'esc' is not pressed, it listens for the key press
        continue 
