#include "moteurbd.h"

MoteurBD::MoteurBD()
{
    m_map = new map<DonneeElementaire, DonneeElementaire>();
}

MoteurBD::~MoteurBD()
{
    delete m_map;
}
