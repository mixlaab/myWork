import numpy as np
import cv2

cap = cv2.VideoCapture(1)

while(True):
	ret,frame = cap.read()
	cv2.imshow('frame',frame)
	cv2.waitKey(1)
cap.release()
cv2.destroyAllWindows()
