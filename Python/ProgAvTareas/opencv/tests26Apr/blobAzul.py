import cv2
import numpy as np
img = cv2.imread('colorBalls.jpg')
hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)

#Parametros del detector de blobs
params = cv2.SimpleBlobDetector_Params()
params.filterByColor = False
params.filterByArea = False
params.filterByInertia = False
params.filterByConvexity = False
params.filterByCircularity = False

#Crear el detector de blobs
det = cv2.SimpleBlobDetector_create(params)

azulInf = np.array([90, 120, 120])
azulSup = np.array([135, 255, 255])

azulmask = cv2.inRange(hsv, azulInf, azulSup)
res = cv2.bitwise_and(img,img,mask = azulmask)

#Puntos clave
keypnts = det.detect(azulmask)

#Mostrar puntos clave
cv2.drawKeypoints(img,keypnts,img,(0,0,255), cv2.DRAW_MATCHES_FLAGS_DRAW_RICH_KEYPOINTS)

cv2.imshow('img', img)
cv2.imshow('mascara', azulmask)
cv2.imshow('filtrado',res)
cv2.waitKey(0)
