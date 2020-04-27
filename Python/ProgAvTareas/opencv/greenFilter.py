import cv2
import numpy as np
img = cv2.imread("color_balls_small.png")
imgHSV = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)
cv2.imshow('image',img)
lower_green = np.array([60,120,120])
upper_green = np.array([90,255,255])
greenMask = cv2.inRange(imgHSV,lower_green,upper_green)
cv2.imshow('mask',greenMask)
res = cv2.bitwise_and(img, img, mask=greenMask)
cv2.imshow('green',res)
cv2.waitKey(0)
