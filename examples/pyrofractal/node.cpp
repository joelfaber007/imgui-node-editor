//
// Created by joel on 4/29/23.
//

#include "node.h"

int Node::s_noxtid = 0;

Node::Node() {
    m_id = s_noxtid++;

    ax::NodeEditor::BeginNode(m_id);
    ImGui::Text("Node x");
    ax::NodeEditor::BeginPin(s_noxtid++, ax::NodeEditor::PinKind::Input);
    ImGui::Text("in (x, y)");
    ax::NodeEditor::EndPin();
    ImGui::SameLine();
    ax::NodeEditor::BeginPin(s_noxtid++, ax::NodeEditor::PinKind::Output);
    ImGui::Text("out (x,y)");
    ax::NodeEditor::EndPin();
    ax::NodeEditor::EndNode();
}