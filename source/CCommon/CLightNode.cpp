#include "CLightNode.h"

/*
 CLightNode.cpp copyright@ hunter manko
*/

int			c_node_id;
int	*		c_find_node;

bool			c_panel_mb_chck;
bool	    *  c_add_node_to_panel_view;

HDC			c_node_light_context;

#define C_LIGHT_NODE_MSG (LPSTR * CMsg) (CMsg = "Light Node Added\n:")

LPSTR	*	c_node_name;

///////////////////////////////////////
// CONSTRUCT LIGHT NODE C //
//////////////////////////////////////
CLightNode::CLightNode() {

};

////////////////////////////////////
// DESTRUCT LIGHT NODE C //
///////////////////////////////////
CLightNode::~CLightNode() {

};

