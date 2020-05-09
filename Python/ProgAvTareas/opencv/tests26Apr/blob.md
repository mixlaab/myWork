Detección de blobs
Un blob es una colección de píxeles similares. Es importante mencionar que para una computadora, un pixel es un pixel y no puede distinguir entre una imagen de una pelota y una imagen de una caja. Esto es lo que hace a la visión computacional todo un reto. Se han desarrollado diferentes técnicas para intentar extrapolar información sobre una imagen; cada una tiene sus trade-offs en términos de velocidad y precisión.

Muchas técnicas utilizan un proceso llamado extracción de rasgos, el cual es un término general para una colección de algoritmos que catalogan rasgos que sobresalen en una imagen, como lo son líneas, bordes, áreas extensas de color, etc.

Una vez que los rasgos han sido extraídos, pueden ser analizados o comparados con otros rasgos para tomar decisiones sobre la imagen. Así es como funcionan aplicaciones de detección facial y de movimiento.

Usaremos las técnicas de filtrado de color anteriores para identificar áreas extensas de color. Después usaremos funciones de openCV para recolectar información sobre grupos de pixeles. A esta técnica se le llama detección de blobs.

Encontrar un blob

Una vez que la imagen sido filtrada podemos usar la máscara para una detección de blob limpia. La clase SimpleBlobDetector de OpenCV identifica la localización y tamaño del blob.

El método para ajustar los parámetros es SimpleBlobDetector_Params(). El método para crear el detector es SimpleBlobDetector_create().
 
Una vez que los parámetros son ajustados y el detector creado, se usa el método detect() para identificar los puntos clave. En el caso del detector de blobs simple, los puntos clave representan el centro y tamaño de cualquier blob detectado.

Finalmente, usamos el método drawKeyPoints() para dibujar un circulo alrededor de nuestro blob.
