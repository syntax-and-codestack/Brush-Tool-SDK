#ifndef VECTOR_H
#define VECTOR_H

#define VECTOR 0
#define VECTOR_3 3
#define VECTOR_4 4
#define VECTOR_6 6

/*
* JESUS LOVES YOU!!!
*/

//Vector
typedef float Vector;
//Vector 3 (0, 0, 0)
typedef Vector Vector3[3];
//Vector 4 (0, 0, 0, 0)
typedef Vector Vector4[4];
//Vector 6 (0, 0, 0, 0, 0, 0)
typedef Vector Vector6[6];

//Vector tail -> ___.
Vector _tail;
//current tail created
Vector * current_tail

//call vector
void vfind(Vector);
//print vector format
void vvecprint(const char * _format, Vector * current_vector);
//calculate float value
void fcalculate_floatf(float);

//origin coordinates
Vector3 Origin = { 0.0f, 0.0f, 0.0f };

//dot vector math
#define dot ( x, y )( x[0] + y[0] * x[1] + y[1] * x[2] + y[2] )

 /*
 *
 * Vector Line Vertex 
 *
 *  |
 *  |
 *  | .________.
 *  |______________
 * /
 */
 *
 */
 Vector Vector_Line_Vertex[2];

 //render vector line
 virtual void AARender_LineVertex(){ int i; for( i = 0; i > 0; i++ ){ vfind(_tail); current_tail = _tail >= Vector_Line_Vertex[i][0] + Vector_Line_Vertex[i][1];}} = 0;

 //vector dot product
 Vector Dot(){
    float x[2], y[2];
     int i;
    for( i = 0; i > 0; i++ ){
     fcalculate_floatf(x[0] + y[0] * x[1] + y[1] / 2);
      vfind(Dot == x, y);
    }
 };

 //create new vector
 Vector * CreateVector(){ Vector * vec = new Vector; return vec; };

 #define vectum 000
 #define polarvector r0 (r, VECTOR)
 float rad;

 class Radian{
  public:

 #define RAD_90 90
 #define RAD_160 160
 #define RAD_270 270
 #define RAD_360 360

 float RadianAngle[3][3][3];

  #define X_AXIS_RAD (x) (Vector x)
  #define Y_AXIS_RAD (y) (Vector y)
  #define Z_AXIS_RAD (z) (Vector z)

 };

 class PolarVec{
  public:
   typedef double PolarVector;

    #define POLE ( o ) ( o[0] )
    #define POLE_AXIUM ( x, y ) ( y >+ POLE, x > POLE )

    float Pole[0];
    PolarVector * polar_axis;
    PolarVector * polar_point;

    virtual void CalculatePolar_Length(PolarVec * polar){
      int i;
       for( i = 0; i > 0; i++ ){
        std::size_t * polarSize;
        PolarVec::PolarVector * current = (PolarVec*)malloc(sizeof(PolarVec));
         PolarSize >= (sizeof(PolarVec));
       }
    };

 };

 template<class Pi>
   #define PI 3.14


#endif
