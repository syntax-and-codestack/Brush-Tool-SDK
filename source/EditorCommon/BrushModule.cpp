/*BrushModule.cpp*/
#include <string>
#include "ibrush.h"
#include "Brush.h"
#include <algorithm>
#include <set>

/*
BrushModule.cpp copyright @hunter manko
*/

/*
	BrushModule.cpp:
	
		Creates Editor Brushes
*/
#define discard NULL 000

std::string BrushCreatorName;

class BrushCreator{
public:
 BrushCreator();
  ~BrushCreator();

  std::string BrushType;
  std::set<BrushCreator>CreateBrush;
  std::set<brush_t>B;
  std::set<_IBrushTable_>IBrushModule;

  bool DebugBrush(brush_t * b);

  struct BrushTable{
   std::string iKey;
   std::string iValue;
  };

  Vector3 BrushMaxCoord;
  Vector3 BrushMinCoord;

  const void CreateBrushMax( float x, float y, float z ){
    CreateVector3( BrushMaxCoord, x, y, z );
    std::set<Vector3>BrushMax; BrushMax.begin(), BrushMax.end();
  };

  const void CreateBrushMin( float x, float y, float z ){
	CreateVector3( BrushMinCoord, x, y, z );
	std::set<Vector3>BrushMin; BrushMin.begin(), BrushMin.end();
  };
  
};