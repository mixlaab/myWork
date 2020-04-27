import cv2
import numpy as np
img = cv2.imread('colorBalls.jpg')
imgHSV = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)
lowerBlue = np.array([80,130,130])
upperBlue = np.array([130,255,255])
blueMask = cv2.inRange(imgHSV, lowerBlue, upperBlue)
blueFilter = cv2.bitwise_and(img,img,mask = blueMask)
cv2.imshow('img',img)
cv2.imshow('mask',blueMask)
cv2.imshow('filtered',blueFilter)
cv2.waitKey(0)
