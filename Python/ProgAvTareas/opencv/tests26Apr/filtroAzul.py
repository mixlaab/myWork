import cv2
import numpy as np
img = cv2.imread('colorBalls.jpg')
hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)
azulInf = np.array([90, 120, 120])
azulSup = np.array([135, 255, 255])

azulmask = cv2.inRange(hsv, azulInf, azulSup)
res = cv2.bitwise_and(img,img,mask = azulmask)

cv2.imshow('img', img)
cv2.imshow('mascara', azulmask)
cv2.imshow('filtrado',res)
cv2.waitKey(0)
