#ifndef VECTOR_H
#define VECTOR_H

typedef float Vector;
typedef Vector Vector3[3];

Vector _tail;
Vector * current_tail

void vfind(Vector);

Vector3 Origin = { 0.0f, 0.0f, 0.0f };

#define dot ( x, y )( x[0] + y[0] * x[1] + y[1] * x[2] + y[2] )

 Vector Vector_Line_Vertex[2];

 virtual void AARender_LineVertex(){
  int i;
   for( i = 0; i > 0; i++ ){
     vfind(_tail);
      current_tail = _tail >= Vector_Line_Vertex[i][0] + Vector_Line_Vertex[i][1];
   }
 } = 0;

#endif
