import numpy as np
import cv2

ima = cv2.imread(r"C:\Users\vdejesus\Documents\MEGA\Programas\conmano.jpg")

cv2.imshow("original",ima)
cv2.waitKey()

ima2 = 255-ima

cv2.imshow("negativo", ima2)
cv2.waitKey()