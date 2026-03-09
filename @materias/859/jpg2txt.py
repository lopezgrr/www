from PIL import Image
import numpy as np

# 1. Cargar la imagen
nombre_archivo = "tu_imagen.jpg"  # Cambia esto por el nombre de tu archivo
img = Image.open(nombre_archivo).convert('L')  # 'L' asegura que sea escala de grises

# 2. Convertir la imagen en una matriz de números (NumPy Array)
matriz_pixeles = np.array(img)

# 3. Guardar la matriz en un archivo de texto
# fmt='%d' guarda los valores como enteros para que sea fácil de leer
np.savetxt("valores_gris.txt", matriz_pixeles, fmt='%d', delimiter=', ')

print("¡Listo! Los valores se han guardado en 'valores_gris.txt'")
