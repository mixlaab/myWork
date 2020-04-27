import cv2
import numpy as np
cap = cv2.VideoCapture(1)
while(True):
    ret,frame = cap.read()
    cv2.imshow('video', frame)
    if cv2.waitKey(1) == 1048689: #espera la letra 'q' para salir del proceso
        break
cap.release()
cv2.destroyAllWindows()

