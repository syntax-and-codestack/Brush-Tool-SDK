#include "CPathNode.h"
#include <winapi.h>

int			c_node_id;
int		* c_path_node;

bool			c_panel_mb_chck;
bool		* c_add_node_to_panel_view;

HDC			c_node_context;

#define C_PATH_NODE_MSG (LPSTR * CMsg) (CMsg = "Path Node Added\n:")

LPSTR* c_path_node_name;

//////////////////////////////////////
// CPATHNODE CONSTRUCTOR//
/////////////////////////////////////
CPathNode::CPathNode() {

};

/////////////////////////////////////////
//CPATHNODE DECONSTRUCTOR//
////////////////////////////////////////
CPathNode::~CPathNode() {

}

///////////////////////////////
//MALLOC SIZEOF NODE//
//////////////////////////////

CPathNode* AllocNode() {
	CPathNode* cpathnode = (CPathNode*)cmalloc(sizeof(CPathNode));
	return cpathnode;
};

//NODE POSITION
CPathNode* NodePosition(Vector3& Position, float x, float y, float z) {
	if (Position) {
		CreateVector3(Position, x, y, z);
	}
	return NodePosition(Position);
};

HWND * m_pPanel;//scene

//ADD NODE TO SCENE
void AddNodeToScene(CPathNode* Node, HWND * m_pPanel, HDC * NodeDC) {
	if (m_pPanel) {
		Node->WinApiNode()->AddNodeToPanel(Node, m_pPanel, true, NodeDC);
	}
	return AddNodeToScene(Node, m_pPanel, NodeDC);
};
