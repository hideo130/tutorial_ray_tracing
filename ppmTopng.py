import numpy as np
# from PIL import Image
import cv2
# img = Image.open("OneWeekend/final2.ppm")
img = cv2.imread("OneWeekend/final2.ppm")
cv2.imwrite("final2.png", img)