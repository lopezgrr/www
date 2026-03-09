# **************************************************

import cv2
import matplotlib.pyplot as plt

# 1. Cargar la imagen en escala de grises
# (Canny trabaja sobre la intensidad de brillo, no necesita color)
img = cv2.imread('figurasColores.png', cv2.IMREAD_GRAYSCALE)

# 2. Aplicar un desenfoque Gaussiano (Opcional pero recomendado)
# Esto ayuda a que el algoritmo no detecte ruido como bordes
img_blur = cv2.GaussianBlur(img, (5, 5), 0)

# 3. Algoritmo de Canny
# Argumentos: (imagen, umbral_bajo, umbral_alto)
edges = cv2.Canny(img_blur, 100, 200)

# Visualización de resultados
plt.figure(figsize=(10, 5))

plt.subplot(1, 2, 1)
plt.title('Imagen Original (Gris)')
plt.imshow(img, cmap='gray')

plt.subplot(1, 2, 2)
plt.title('Detección de Bordes (Canny)')
plt.imshow(edges, cmap='gray')


plt.show()

# **************************************************
