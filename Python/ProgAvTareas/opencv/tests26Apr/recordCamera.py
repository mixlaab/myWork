import cv2
import numpy as np
cap = cv2.VideoCapture(1)
codec = cv2.VideoWriter_fourcc(*'XVID')
vidWrite = cv2.VideoWriter('tes_video.avi',codec,100,(640,480))
while(True):
    ret,frame = cap.read()
    vidWrite.write(frame)
    cv2.imshow('video', frame)
    if cv2.waitKey(1) == 1048689: #espera la letra 'q' para salir del proceso
        break
cap.release()
vidWrite.release()
cv2.destroyAllWindows()

