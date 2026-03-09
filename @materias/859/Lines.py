import cv2
import numpy as np

# 1. Cargar la imagen
image = cv2.imread('carretera.jpg')
gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

# 2. Preprocesamiento: Filtro Gaussiano para reducir ruido
blur = cv2.GaussianBlur(gray, (5, 5), 0)

# 3. Detección de bordes con Canny
# Los valores 50 y 150 son los umbrales (thresholds)
edges = cv2.Canny(blur, 50, 150)

# 4. Transformada de Hough Probabilística
# Devuelve un array con los puntos iniciales y finales (x1, y1, x2, y2) de cada línea
lines = cv2.HoughLinesP(edges, 1, np.pi/180, threshold=100, 
                        minLineLength=100, maxLineGap=10)

# 5. Dibujar las líneas sobre la imagen original
if lines is not None:
    for line in lines:
        x1, y1, x2, y2 = line[0]
        cv2.line(image, (x1, y1), (x2, y2), (0, 255, 0), 3)

# Mostrar resultados
cv2.imshow('Líneas Detectadas', image)
cv2.waitKey(0)
cv2.destroyAllWindows()
