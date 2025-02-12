//ibrush.h

#ifndef I_BRUSH
#define I_BRUSH
#endif

#include <set>
#include <iterator>
#include "Brush.h"

#define BRUSH_MAIN "brush"

std::set<brush_t>brush;

//ibrush table
class ibrush{
public:
 ibrush();
  int I_BRUSH_MAXTABLE[9999];

  const void ibrush_set(ibrush t){
   std::set<brush_t> i; i.begin(), i.end();
  };
};

typedef void ( *PFN_BRUSH_ADD_TO_LIST )( brush_t * b );
typedef void ( *PFN_BRUSH_SIZE )( std::size_t iSize, brush_t * b );
typedef void ( *PFN_BRUSH_HASH_TABLE )( const char * pfn_key, const char * pfn_value, brush_t * b );
typedef void ( *PFN_BRUSH_NAME )( const char * const pfn_brush_name(brush_t * b), brush_t * bname );
typedef void ( *PFN_BRUSH_BUFFER )( char pfn_brush_buffer[1024], brush_t(*brush_t) );
typedef brush_t ( *PFN_CREATE_BRUSH )( brush_t * b, Vector3 mins, Vector3 maxs );
typedef brush_t ( *PFN_SNAP_BRUSH_GRID )( Vector3 bvec, brush_t * b, int snap );
typedef void ( *PFN_BRUSH_MESSAGE )( const char * pfn_message, brush_t * b );

struct _IBrushTable_{
  PFN_BRUSH_ADD_TO_LIST m_pfn_list;
  PFN_BRUSH_SIZE m_pfn_brushsize;
  PFN_BRUSH_HASH_TABLE m_pfn_brushtable;
  PFN_BRUSH_NAME m_pfn_brushname;
  PFN_BRUSH_BUFFER m_pfn_brushbuffer;
  PFN_CREATE_BRUSH m_pfn_createbrush;
  PFN_SNAP_BRUSH_GRID m_pfn_snap_brushgrid;
  PFN_BRUSH_MESSAGE m_pfn_brushmessage;
};
