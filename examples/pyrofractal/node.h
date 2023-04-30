//
// Created by joel on 4/29/23.
//

#ifndef IMGUI_NODE_EDITOR_NODE_H
#define IMGUI_NODE_EDITOR_NODE_H

#include <../../imgui_node_editor.h>

class Node {
public:
    Node();

private:
    static int s_noxtid;
    int m_id;
};


#endif //IMGUI_NODE_EDITOR_NODE_H
