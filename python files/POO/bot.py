import pyautogui
import webbrowser as web
from time import sleep

web.open("https://web.whatsapp.com/send?phone=+524922003219")
sleep(10)
for i in range(100):
    pyautogui.typewrite("oye")
    pyautogui.press("enter")
