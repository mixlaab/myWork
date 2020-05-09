import cv2
import numpy as np
cap = cv2.VideoCapture('http://192.168.15.10:4747/video')
while(True):
    ret,frame = cap.read()
    flipped = cv2.flip(frame, flipCode = 0)
    cv2.imshow('video', flipped)
    if cv2.waitKey(1) & 0xff == ord('q'): #espera la letra 'q' para salir del proceso
        break
cap.release()
cv2.destroyAllWindows()

