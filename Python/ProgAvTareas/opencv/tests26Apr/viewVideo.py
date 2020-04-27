import cv2
import numpy as np
cap = cv2.VideoCapture('tes_video.avi')
while(True):
    ret,frame = cap.read()
    if ret:
        cv2.imshow('video', frame)
    else:
        cap = cv2.VideoCapture('tes_video.avi')
    if cv2.waitKey(1) == 1048689: #espera la letra 'q' para salir del proceso
        break
cap.release()
cv2.destroyAllWindows()

