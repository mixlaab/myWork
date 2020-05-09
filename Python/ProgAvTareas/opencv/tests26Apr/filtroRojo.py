import cv2
import numpy as np
img = cv2.imread('colorBalls.jpg')
hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)
rojoInf1 = np.array([0, 120, 120])
rojoSup1 = np.array([25, 255, 255])
rojoInf2 = np.array([150, 120, 120])
rojoSup2 = np.array([180, 255, 255])

rojomask1 = cv2.inRange(hsv, rojoInf1, rojoSup1)
rojomask2 = cv2.inRange(hsv, rojoInf2, rojoSup2)
rojomask = cv2.add(rojomask1, rojomask2)
res = cv2.bitwise_and(img,img,mask = rojomask)

cv2.imshow('img', img)
cv2.imshow('mascara', rojomask)
cv2.imshow('filtrado',res)
cv2.waitKey(0)
