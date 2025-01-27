#pragma once
#ifndef C_PATH_NODE
#define C_PATH_NODE

class CPathNode {
public:
	CPathNode();
	~CPathNode();

	CPathNode* WinApiNode();
	void AddNodeToPanel(CPathNode * node, HWND * _Panel, bool paint, HDC * _dc);

};

#endif