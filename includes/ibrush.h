//ibrush.h

#ifndef I_BRUSH
#define I_BRUSH
#endif

#include <set>
#include "Brush.h"

#define BRUSH_MAIN "brush"

//ibrush table
class ibrush{
public:
 ibrush();
  int I_BRUSH_MAXTABLE[9999];

  const void ibrush_set(ibrush t){
   std::set<brush_t> i = i.begin() && != i.end();
    (*i.size(0));
  };

};

typedef void ( *PFN_BRUSH_ADD_TO_LIST )( brush_t * b );
typedef void ( *PFN_BRUSH_SIZE )( std::size_t iSize = size += sizeof(*brush_t), brush_t * b );
typedef void ( *PFN_BRUSH_HASH_TABLE )( const char * pfn_key, const char * pfn_value, brush_t * b );
typedef void ( *PFN_BRUSH_NAME )( const char * const pfn_brush_name(brush_t * b), brush_t * bname );
typedef void ( *PFN_BRUSH_BUFFER )( static char pfn_brush_buffer[1024], brush_t(*brush_t) );
typedef brush_t ( *PFN_CREATE_BRUSH )( brush_t * b, Vector3 mins, Vector3 maxs );